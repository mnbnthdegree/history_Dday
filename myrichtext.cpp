#include "MyRichTextBlockDecorator.h"
#include "Fonts/FontMeasure.h"

class SRichInlineText : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SRichInlineText)
	{}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs, const FText& Text, const FString& TagName, const FTextBlockStyle& TextStyle)
	{
		if (!Text.IsEmptyOrWhitespace())
		{
			const float LineHeight = FSlateApplication::Get().GetRenderer()->GetFontMeasureService()->GetMaxCharacterHeight(TextStyle.Font, 1.0f);

			FTextBlockStyle Style = TextStyle;
			EVerticalAlignment Align = VAlign_Fill;

			if (TagName == TEXT("sub"))
			{
				Style.Font.Size *= 0.5f;
				Align = VAlign_Bottom;
			}
			else if (TagName == TEXT("sup"))
			{
				Style.Font.Size *= 0.5f;
				Align = VAlign_Top;
			}

			ChildSlot
			[
				SNew(SBox)
				.HeightOverride(LineHeight)
				.VAlign(Align)
				[
					SNew(STextBlock)
					.Text(Text)
					.TextStyle(&Style)
				]
			];
		}
	}
};

FMyRichTextDecorator::FMyRichTextDecorator(URichTextBlock* InOwner)
	: FRichTextDecorator(InOwner)
{
	SupportedTags = { TEXT("sub"), TEXT("sup") };
}

bool FMyRichTextDecorator::Supports(const FTextRunParseResults& RunParseResult, const FString& Text) const
{
	return SupportedTags.Contains(RunParseResult.Name);
}

TSharedPtr<SWidget> FMyRichTextDecorator::CreateDecoratorWidget(const FTextRunInfo& RunInfo, const FTextBlockStyle& TextStyle) const
{
	return SNew(SRichInlineText, RunInfo.Content, RunInfo.Name, TextStyle);
}

TSharedPtr<ITextDecorator> UMyRichTextBlockDecorator::CreateDecorator(URichTextBlock* InOwner)
{
	return MakeShareable(new FMyRichTextDecorator(InOwner));
}
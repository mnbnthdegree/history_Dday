#pragma once

#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "MyRichTextBlockDecorator.generated.h"

class FMyRichTextDecorator : public FRichTextDecorator
{
public:
	FMyRichTextDecorator(URichTextBlock* InOwner);
	virtual bool Supports(const FTextRunParseResults& RunParseResult, const FString& Text) const override;

protected:
	virtual TSharedPtr<SWidget> CreateDecoratorWidget(const FTextRunInfo& RunInfo, const FTextBlockStyle& TextStyle) const override;

private:
	TArray<FString> SupportedTags;
};

UCLASS(Abstract, Blueprintable, meta = (DisplayName="My Rich Text Block Decorator"))
class UMyRichTextBlockDecorator : public URichTextBlockDecorator
{
	GENERATED_BODY()

public:
	virtual TSharedPtr<ITextDecorator> CreateDecorator(URichTextBlock* InOwner) override;
};
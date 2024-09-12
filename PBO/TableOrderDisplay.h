#pragma once

#include "CoreMinimal.h"
#include "OrderStatus.h"
#include "TableOrderDisplay.generated.h"

// Actor class to handle the display of order status at a table
UCLASS()
class DINNERDASH_API ATableOrderDisplay : public AActor
{
    GENERATED_BODY()

public:
    // Constructor
    ATableOrderDisplay();

    // Current status of the order at this table
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Order")
    OrderStatus CurrentStatus;

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    // Updates the display to show the current status of the order
    void UpdateDisplay();
};

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "DefenseTower.generated.h"



UCLASS(Blueprintable)
class UEPRATICE_API ADefenseTower : public AActor
{
	GENERATED_BODY()

	// 에디터에서 보이고 수정될 수 있는 실질적인 수치들이다. 체력이나 공격력 등. 그것을 첫번째 퍼블릭에 붙인다.
public:	
	UPROPERTY(EditAnywhere, Category="Tower Params")
	int HealthHPoints = 100;

	UPROPERTY(EditAnywhere, Category="Tower Params")
	int ShellDefense = 2;

	UPROPERTY(EditAnywhere, Category = "Tower Params")
	float AttackRange = 15.0f;

	UPROPERTY(EditAnywhere, Category = "Tower Params")
	float ReloadInterval = 1.0f;
	// Sets default values for this actor's properties
	ADefenseTower();

	// 게임이 플레이되는 동안 게임 플레이 상태를 직접 보여주기 위해 존재한다.
	// 또 언더바는 프로텍션 걸린 변수들 이름 앞에 붙여주는게 규약이다. 퍼블릭과 구분된다.
protected:
	// Called when the game starts or when spawned
	int _HealthPoints;
	float _ReloadCountingDown;
	virtual void BeginPlay() override;

	// 세번째 퍼블릭에는 직접 정의하고 호출할 함수들을 프로토타입 선언한다.
public:	
	
	UFUNCTION(BlueprintPure, 
	Category = "Pangaea | Defense Tower",
	meta=(DispalyName="GetHP"))
	int GetHealthPoints();

	UFUNCTION(BlueprintPure,
		Category = "Pangaea | Defense Tower")
	bool IsDestroyed();

	UFUNCTION(BlueprintPure,
		Category = "Pangaea | Defense Tower")
	bool CanFire();

	void Fire();

	void Hit(int damage);

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// 그 외 보호가 필요한 함수라면, protected 블록을 따로 만들어서 선언한다.
	// 이렇게 나누는 이유는, 변수, 함수, 그리고 쓰임새에 따라서 가독성이 좋도록 한 것이다.
protected:
	void DestroyProcess();

private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,
		Category = "Tower Component",
		meta = (AllowprivateAccess = "true"))
	UBoxComponent* _BoxComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,
		Category = "Tower Component",
		meta = (AllowprivateAccess = "true"))
	UStaticMeshComponent* _MeshComponent;

public:
	FORCEINLINE UBoxComponent* GetBoxComponet() const
	{
		return _BoxComponent;
	}

	FORCEINLINE UStaticMeshComponent* GetMeshComponent() const
	{
		return _MeshComponent;
	}		
};
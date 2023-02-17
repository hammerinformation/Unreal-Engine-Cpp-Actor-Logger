#include "ActorLogger.h"
#include <fstream>
#include "Kismet/GameplayStatics.h"


void ActorLogger::LogLocation() const
{
	const auto ActorLocation = Actor->GetActorLocation();
	std::ofstream File(Path + FileName, std::ios::app);
	File << "---------------------------------" << "\n";
	File << "System Time        : " << __TIMESTAMP__ << '\n';
	File << "Total Elapsed Time : " << UGameplayStatics::GetTimeSeconds(World) << "\n";
	File << "Actor Location     :" << " (X:" << ActorLocation.X << " Y:" << ActorLocation.Y << " Z:" << ActorLocation.Z<< ")""\n";
	File << "---------------------------------" << "\n";
	File.close();
}

void ActorLogger::LogRotation() const
{
	const auto ActorRotation = Actor->GetActorRotation();
	std::ofstream File(Path + FileName, std::ios::app);
	File << "---------------------------------" << "\n";
	File << "System Time        : " << __TIMESTAMP__ << '\n';
	File << "Total Elapsed Time : " << UGameplayStatics::GetTimeSeconds(World) << "\n";
	File << "Actor Rotation     :" << " (X:" << ActorRotation.Roll << " Y:" << ActorRotation.Pitch << " Z:" << ActorRotation.Yaw<< ")""\n";
	File << "---------------------------------" << "\n";
	File.close();
}

void ActorLogger::LogActorScale() const
{
	const auto ActorScale = Actor->GetActorScale();
	std::ofstream File(Path + FileName, std::ios::app);
	File << "---------------------------------" << "\n";
	File << "System Time        : " << __TIMESTAMP__ << '\n';
	File << "Total Elapsed Time : " << UGameplayStatics::GetTimeSeconds(World) << "\n";
	File << "Actor Scale        :" << " (X:" << ActorScale.X << " Y:" << ActorScale.Y << " Z:" << ActorScale.Z<< ")""\n";
	File << "---------------------------------" << "\n";
	File.close();
}

void ActorLogger::LogActorRelativeScale3D() const
{
	const auto ActorRelativeScale3D = Actor->GetActorRelativeScale3D();
	std::ofstream File(Path + FileName, std::ios::app);
	File << "---------------------------------" << "\n";
	File << "System Time          : " << __TIMESTAMP__ << '\n';
	File << "Total Elapsed Time   : " << UGameplayStatics::GetTimeSeconds(World) << "\n";
	File << "ActorRelativeScale3D :" << " (X:" << ActorRelativeScale3D.X << " Y:" << ActorRelativeScale3D.Y << " Z:" << ActorRelativeScale3D.Z<< ")""\n";
	File << "---------------------------------" << "\n";
	File.close();
}

void ActorLogger::LogImportantDetails() const
{
	const FVector ActorLocation = Actor->GetActorLocation();
	const FVector ActorRelativeScale3D = Actor->GetActorRelativeScale3D();
	const FVector ActorScale = Actor->GetActorScale();
	const FRotator ActorRotation = Actor->GetActorRotation();
	const FVector ActorVelocity=Actor->GetVelocity();
	const FVector ActorRightVector = Actor->GetActorRightVector();
	const FVector ActorUpVector = Actor->GetActorUpVector();
	const FVector ActorForwardVector = Actor->GetActorForwardVector();
	const float LifeSpan=Actor->GetLifeSpan();	
	std::ofstream File(Path + FileName, std::ios::app);
	File<<"\n";
	File << "::::::::::::::::::::::::::::::::::::::::::::" << "\n";
	File << "System Time          : " << __TIMESTAMP__ << '\n';
	File << "Total Elapsed Time   : " << UGameplayStatics::GetTimeSeconds(World) << "\n";
	File << "Life Span            : " <<LifeSpan << "\n";
	File << "Actor Location       :" << " (X:" << ActorLocation.X << " Y:" << ActorLocation.Y << " Z:" << ActorLocation.Z<< ")""\n";
	File << "Actor Velocity       :" << " (X:" << ActorVelocity.X << " Y:" << ActorVelocity.Y << " Z:" << ActorVelocity.Z<< ")""\n";
	File << "ActorRelativeScale3D :" << " (X:" << ActorRelativeScale3D.X << " Y:" << ActorRelativeScale3D.Y << " Z:" << ActorRelativeScale3D.Z<< ")""\n";
	File << "Actor Scale          :" << " (X:" << ActorScale.X << " Y:" << ActorScale.Y << " Z:" << ActorScale.Z<< ")""\n";
	File << "Actor Rotation       :" << " (X:" << ActorRotation.Roll << " Y:" << ActorRotation.Pitch << " Z:" << ActorRotation.Yaw<< ")""\n";
	File << "Actor Forward Vector :" << " (X:" << ActorForwardVector.X << " Y:" << ActorForwardVector.Y << " Z:" << ActorForwardVector.Z<< ")""\n";
	File << "Actor Right Vector   :" << " (X:" << ActorRightVector.X << " Y:" << ActorRightVector.Y << " Z:" << ActorRightVector.Z<< ")""\n";
	File << "Actor Up Vector      :" << " (X:" << ActorUpVector.X << " Y:" << ActorUpVector.Y << " Z:" << ActorUpVector.Z<< ")""\n";
	File << "::::::::::::::::::::::::::::::::::::::::::::" << "\n";
	File<<"\n";
	File.close();
}

void ActorLogger::LogActorForwardVector() const
{
	const auto ActorForwardVector = Actor->GetActorForwardVector();
	std::ofstream File(Path + FileName, std::ios::app);
	File << "---------------------------------" << "\n";
	File << "System Time          : " << __TIMESTAMP__ << '\n';
	File << "Total Elapsed Time   : " << UGameplayStatics::GetTimeSeconds(World) << "\n";
	File << "Actor Forward Vector :" << " (X:" << ActorForwardVector.X << " Y:" << ActorForwardVector.Y << " Z:" << ActorForwardVector.Z<< ")""\n";
	File << "---------------------------------" << "\n";
	File.close();
}

void ActorLogger::LogActorRightVector() const
{
	const auto ActorRightVector = Actor->GetActorRightVector();
	std::ofstream File(Path + FileName, std::ios::app);
	File << "---------------------------------" << "\n";
	File << "System Time          : " << __TIMESTAMP__ << '\n';
	File << "Total Elapsed Time   : " << UGameplayStatics::GetTimeSeconds(World) << "\n";
	File << "Actor Right Vector   :" << " (X:" << ActorRightVector.X << " Y:" << ActorRightVector.Y << " Z:" << ActorRightVector.Z<< ")""\n";
	File << "---------------------------------" << "\n";
	File.close();
}

void ActorLogger::LogActorUpVector() const
{
	const auto ActorUpVector = Actor->GetActorUpVector();
	std::ofstream File(Path + FileName, std::ios::app);
	File << "---------------------------------" << "\n";
	File << "System Time          : " << __TIMESTAMP__ << '\n';
	File << "Total Elapsed Time   : " << UGameplayStatics::GetTimeSeconds(World) << "\n";
	File << "Actor Up Vector      :" << " (X:" << ActorUpVector.X << " Y:" << ActorUpVector.Y << " Z:" << ActorUpVector.Z<< ")""\n";
	File << "---------------------------------" << "\n";
	File.close();
}

void ActorLogger::LogVector(const std::string& Message, const FVector& Vector) const
{
    	std::ofstream File(Path + FileName, std::ios::app);
    	File << "---------------------------------" << "\n";
    	File << "System Time          : " << __TIMESTAMP__ << '\n';
    	File << "Total Elapsed Time   : " << UGameplayStatics::GetTimeSeconds(World) << "\n";
    	File << Message+" :" << " (X:" << Vector.X << " Y:" << Vector.Y << " Z:" << Vector.Z<< ")""\n";
    	File << "---------------------------------" << "\n";
    	File.close();
}

void ActorLogger::LogRotator(const std::string& Message, const FRotator& Rotator) const
{
	std::ofstream File(Path + FileName, std::ios::app);
	File << "---------------------------------" << "\n";
	File << "System Time          : " << __TIMESTAMP__ << '\n';
	File << "Total Elapsed Time   : " << UGameplayStatics::GetTimeSeconds(World) << "\n";
	File << Message+" :" << " (X:" << Rotator.Roll << " Y:" << Rotator.Pitch << " Z:" << Rotator.Yaw<< ")""\n";
	File << "---------------------------------" << "\n";
	File.close();
}


ActorLogger::~ActorLogger()
{
}

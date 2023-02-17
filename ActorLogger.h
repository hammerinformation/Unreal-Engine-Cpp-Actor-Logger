#pragma once

#include <string>

class ActorLogger
{
	const AActor* Actor;
	const UWorld* World;
	const std::string FileName;
	const std::string Path;
public:
	void LogLocation() const;
	void LogRotation() const;
	void LogActorScale() const;
	void LogActorRelativeScale3D() const;
	void LogImportantDetails() const;
	void LogActorForwardVector() const;
	void LogActorRightVector() const;
	void LogActorUpVector() const;
	void LogVector(const std::string& Message, const FVector& Vector) const;
	void LogRotator(const std::string& Message, const FRotator& Rotator) const;
	

	ActorLogger(const std::string& Path, const std::string& FileName, const AActor* Actor, const UWorld* World):
		Actor(Actor), World(World), FileName(FileName), Path(Path)
	{
	}

	ActorLogger(const ActorLogger&) = delete;
	ActorLogger& operator=(const ActorLogger&) = delete;

	~ActorLogger();
};

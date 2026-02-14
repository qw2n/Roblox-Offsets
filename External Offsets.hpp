// Dumped by BinaryCrypt (Aka Qwar1e)
// Dumped at: 2.962417s
// Offsets Count: 51

#include <Windows>
#include <string>

struct Vector3 {
	float X, Y, Z;
}

struct Color3 {
	uint8_t R, G, B;
}

namespace Offsets {
	inline const std::string RobloxVersion = "version-bd08027bb04e4045";

    namespace DataModel {
        inline constexpr uintptr_t FakeDataModelPointer = 0x7D909F8; // (uintptr_t) (Roblox::FakeDataModelPointer)
        inline constexpr uintptr_t FakeDataModelToDataModel = 0x1C0; // (uintptr_t) (FakeDataModelPointer::FakeDataModelToDataModel)
        inline constexpr uintptr_t Workspace = 0x178; // (uintptr_t) (DataModel::Workspace)
        inline constexpr uintptr_t GameId = 0x190; // (uintptr_t) (DataModel::GameId)
        inline constexpr uintptr_t PlaceId = 0x198; // (uintptr_t) (DataModel::PlaceId)
    }

    namespace VisualEngine {
        inline constexpr uintptr_t VisualEnginePointer = 0x79449E0; // (uintptr_t) (Roblox::VisualEnginePointer)
        inline constexpr uintptr_t FakeDataModelPointer = 0x700; // (uintptr_t) (VisualEnginePointer::FakeDataModelPointer)
        inline constexpr uintptr_t FakeDataModelToDataModel = 0x1C0; // (uintptr_t) (FakeDataModelPointer::FakeDataModelToDataModel)
    }

    namespace Workspace {
        inline constexpr uintptr_t Terrain = 0x4B0; // (uintptr_t) (Workspace::Terrain)
        inline constexpr uintptr_t Camera = 0x4A0; // (uintptr_t) (Workspace::Camera)
        inline constexpr uintptr_t WorkspaceToWorld = 0x3D8; // (uintptr_t) (Workspace::World)
    }

    namespace World {
        inline constexpr uintptr_t WorldStepsPerSecond = 0x658; // (float) (World::WorldStepsPerSecond) | Default value is 240
        inline constexpr uintptr_t Gravity = 0x1D0; // (float) (World::Gravity)
    }

    namespace Instance {
        inline constexpr uintptr_t Name = 0xB0; // (string) (Instance::Name)
        inline constexpr uintptr_t Children = 0x70; // (uintptr_t) (Instance::Children)
        inline constexpr uintptr_t ChildrenEnd = 0x8; // (uintptr_t) (Instance::ChildrenEnd)
        inline constexpr uintptr_t Parent = 0x68; // (uintptr_t) (Instance::Parent)
        inline constexpr uintptr_t ClassDescriptor = 0x18; // (uintptr_t) (Instance::ClassDescriptor)
        inline constexpr uintptr_t ClassName = 0x8; // (string) (ClassDescriptor::ClassName)
    }

    namespace Misc {
        inline constexpr uintptr_t Value = 0xD0; // (any) (BaseValue::Value)
    }

    namespace Players {
        inline constexpr uintptr_t MaxPlayers = 0x140; // (int) (Players::MaxPlayers)
        inline constexpr uintptr_t RespawnTime = 0x148; // (float) (Players::RespawnTime)
        inline constexpr uintptr_t CharacterAutoLoads = 0x14D; // (bool) (Players::CharacterAutoLoads)
        inline constexpr uintptr_t LocalPlayer = 0x130; // (uintptr_t) (Players::LocalPlayer)
    }

    namespace Player {
        inline constexpr uintptr_t UserId = 0x2B8; // (uintptr_t) (LocalPlayer::UserId)
        inline constexpr uintptr_t ModelInstance = 0x380; // (uintptr_t) (LocalPlayer::ModelInstance)
        inline constexpr uintptr_t CameraMinZoomDistance = 0x314; // (float) (LocalPlayer::CameraMinZoomDistance)
        inline constexpr uintptr_t CameraMaxZoomDistance = 0x310; // (float) (LocalPlayer::CameraMaxZoomDistance)
        inline constexpr uintptr_t DisplayName = 0x130; // (string) (LocalPlayer::DisplayName)
    }

    namespace BasePart {
        inline constexpr uintptr_t Transparency = 0xF0; // (float) (BasePart::Transparency)
        inline constexpr uintptr_t Reflectance = 0xEC; // (float) (BasePart::Reflectance)
        inline constexpr uintptr_t Primitive = 0x148; // (uintptr_t) (BasePart::Primitive)
        inline constexpr uintptr_t Position = 0xE4; // (Vector3) (BasePart::Primitive::Position)
        inline constexpr uintptr_t PartSize = 0x1B0; // (Vector3) (BasePart::Primitive::Size)
        inline constexpr uintptr_t RootPriority = 0x1; // (int) (BasePart::Primitive::RootPriority) | Removed from dumps
        inline constexpr uintptr_t Color = 0x194; // (Color3) (BasePart::Color)
        inline constexpr uintptr_t CastShadow = 0xF5; // (bool) (BasePart::CastShadow)
        inline constexpr uintptr_t Locked = 0xF6; // (bool) (BasePart::Locked)
        inline constexpr uintptr_t Sandboxed = 0x2F7; // (bool) (BasePart::Sandboxed)
        inline constexpr uintptr_t Archivable = 0x2F6; // (bool) (BasePart::Archivable)
        inline constexpr uintptr_t AudioCanCollide = 0xF4; // (bool) (BasePart::AudioCanCollide)
        inline constexpr uintptr_t Massless = 0x2C4; // (bool) (BasePart::Massless)
        inline constexpr uintptr_t EnableFluidForces = 0x26D; // (bool) (BasePart::Primitive::EnableFluidForces)
    }

    namespace ClickDetector {
        inline constexpr uintptr_t MaxActivationDistance = 0x100; // (float) (ClickDetector::MaxActivationDistance)
        inline constexpr uintptr_t CursorIcon = 0xE0; // (string) (ClickDetector::CursorIcon)
    }

    namespace Terrain {
        inline constexpr uintptr_t GrassLength = 0x1F8; // (float) (Terrain::GrassLength)
        inline constexpr uintptr_t WaterReflactance = 0x200; // (float) (Terrain::WaterReflactance)
        inline constexpr uintptr_t WaterTransparency = 0x204; // (float) (Terrain::WaterTransparency)
        inline constexpr uintptr_t WaterWaveSize = 0x208; // (float) (Terrain::WaterWaveSize)
        inline constexpr uintptr_t WaterWaveSpeed = 0x20C; // (float) (Terrain::WaterWaveSpeed)
    }

    namespace Lighting {
        inline constexpr uintptr_t Brightness = 0x120; // (float) (Lighting::Brightness)
    }
}

// C++/WinRT v2.0.191023.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Perception_People_0_H
#define WINRT_Windows_Perception_People_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation::Numerics
{
}
WINRT_EXPORT namespace winrt::Windows::Perception
{
    struct PerceptionTimestamp;
}
WINRT_EXPORT namespace winrt::Windows::Perception::Spatial
{
    struct SpatialCoordinateSystem;
}
WINRT_EXPORT namespace winrt::Windows::UI::Input::Spatial
{
    struct SpatialInteractionSource;
}
WINRT_EXPORT namespace winrt::Windows::Perception::People
{
    enum class HandJointKind : int32_t
    {
        Palm = 0,
        Wrist = 1,
        ThumbMetacarpal = 2,
        ThumbProximal = 3,
        ThumbDistal = 4,
        ThumbTip = 5,
        IndexMetacarpal = 6,
        IndexProximal = 7,
        IndexIntermediate = 8,
        IndexDistal = 9,
        IndexTip = 10,
        MiddleMetacarpal = 11,
        MiddleProximal = 12,
        MiddleIntermediate = 13,
        MiddleDistal = 14,
        MiddleTip = 15,
        RingMetacarpal = 16,
        RingProximal = 17,
        RingIntermediate = 18,
        RingDistal = 19,
        RingTip = 20,
        LittleMetacarpal = 21,
        LittleProximal = 22,
        LittleIntermediate = 23,
        LittleDistal = 24,
        LittleTip = 25,
    };
    enum class JointPoseAccuracy : int32_t
    {
        High = 0,
        Approximate = 1,
    };
    struct IEyesPose;
    struct IEyesPoseStatics;
    struct IHandMeshObserver;
    struct IHandMeshVertexState;
    struct IHandPose;
    struct IHeadPose;
    struct EyesPose;
    struct HandMeshObserver;
    struct HandMeshVertexState;
    struct HandPose;
    struct HeadPose;
    struct HandMeshVertex;
    struct JointPose;
}
namespace winrt::impl
{
    template <> struct category<Windows::Perception::People::IEyesPose>{ using type = interface_category; };
    template <> struct category<Windows::Perception::People::IEyesPoseStatics>{ using type = interface_category; };
    template <> struct category<Windows::Perception::People::IHandMeshObserver>{ using type = interface_category; };
    template <> struct category<Windows::Perception::People::IHandMeshVertexState>{ using type = interface_category; };
    template <> struct category<Windows::Perception::People::IHandPose>{ using type = interface_category; };
    template <> struct category<Windows::Perception::People::IHeadPose>{ using type = interface_category; };
    template <> struct category<Windows::Perception::People::EyesPose>{ using type = class_category; };
    template <> struct category<Windows::Perception::People::HandMeshObserver>{ using type = class_category; };
    template <> struct category<Windows::Perception::People::HandMeshVertexState>{ using type = class_category; };
    template <> struct category<Windows::Perception::People::HandPose>{ using type = class_category; };
    template <> struct category<Windows::Perception::People::HeadPose>{ using type = class_category; };
    template <> struct category<Windows::Perception::People::HandJointKind>{ using type = enum_category; };
    template <> struct category<Windows::Perception::People::JointPoseAccuracy>{ using type = enum_category; };
    template <> struct category<Windows::Perception::People::HandMeshVertex>{ using type = struct_category<Windows::Foundation::Numerics::float3, Windows::Foundation::Numerics::float3>; };
    template <> struct category<Windows::Perception::People::JointPose>{ using type = struct_category<Windows::Foundation::Numerics::quaternion, Windows::Foundation::Numerics::float3, float, Windows::Perception::People::JointPoseAccuracy>; };
    template <> inline constexpr auto& name_v<Windows::Perception::People::EyesPose>{ L"Windows.Perception.People.EyesPose" };
    template <> inline constexpr auto& name_v<Windows::Perception::People::HandMeshObserver>{ L"Windows.Perception.People.HandMeshObserver" };
    template <> inline constexpr auto& name_v<Windows::Perception::People::HandMeshVertexState>{ L"Windows.Perception.People.HandMeshVertexState" };
    template <> inline constexpr auto& name_v<Windows::Perception::People::HandPose>{ L"Windows.Perception.People.HandPose" };
    template <> inline constexpr auto& name_v<Windows::Perception::People::HeadPose>{ L"Windows.Perception.People.HeadPose" };
    template <> inline constexpr auto& name_v<Windows::Perception::People::HandJointKind>{ L"Windows.Perception.People.HandJointKind" };
    template <> inline constexpr auto& name_v<Windows::Perception::People::JointPoseAccuracy>{ L"Windows.Perception.People.JointPoseAccuracy" };
    template <> inline constexpr auto& name_v<Windows::Perception::People::HandMeshVertex>{ L"Windows.Perception.People.HandMeshVertex" };
    template <> inline constexpr auto& name_v<Windows::Perception::People::JointPose>{ L"Windows.Perception.People.JointPose" };
#ifndef WINRT_LEAN_AND_MEAN
    template <> inline constexpr auto& name_v<Windows::Perception::People::IEyesPose>{ L"Windows.Perception.People.IEyesPose" };
    template <> inline constexpr auto& name_v<Windows::Perception::People::IEyesPoseStatics>{ L"Windows.Perception.People.IEyesPoseStatics" };
    template <> inline constexpr auto& name_v<Windows::Perception::People::IHandMeshObserver>{ L"Windows.Perception.People.IHandMeshObserver" };
    template <> inline constexpr auto& name_v<Windows::Perception::People::IHandMeshVertexState>{ L"Windows.Perception.People.IHandMeshVertexState" };
    template <> inline constexpr auto& name_v<Windows::Perception::People::IHandPose>{ L"Windows.Perception.People.IHandPose" };
    template <> inline constexpr auto& name_v<Windows::Perception::People::IHeadPose>{ L"Windows.Perception.People.IHeadPose" };
#endif
    template <> inline constexpr guid guid_v<Windows::Perception::People::IEyesPose>{ 0x682A9B23,0x8A1E,0x5B86,{ 0xA0,0x60,0x90,0x6F,0xFA,0xCB,0x62,0xA4 } };
    template <> inline constexpr guid guid_v<Windows::Perception::People::IEyesPoseStatics>{ 0x1CFF7413,0xB21F,0x54C0,{ 0x80,0xC1,0xE6,0x0D,0x99,0x4C,0xA5,0x8C } };
    template <> inline constexpr guid guid_v<Windows::Perception::People::IHandMeshObserver>{ 0x85AE30CB,0x6FC3,0x55C4,{ 0xA7,0xB4,0x29,0xE3,0x38,0x96,0xCA,0x69 } };
    template <> inline constexpr guid guid_v<Windows::Perception::People::IHandMeshVertexState>{ 0x046C5FEF,0x1D8B,0x55DE,{ 0xAB,0x2C,0x1C,0xD4,0x24,0x88,0x6D,0x8F } };
    template <> inline constexpr guid guid_v<Windows::Perception::People::IHandPose>{ 0x4D98E79A,0xBB08,0x5D09,{ 0x91,0xDE,0xDF,0x0D,0xD3,0xFA,0xE4,0x6C } };
    template <> inline constexpr guid guid_v<Windows::Perception::People::IHeadPose>{ 0x7F5AC5A5,0x49DB,0x379F,{ 0x94,0x29,0x32,0xA2,0xFA,0xF3,0x4F,0xA6 } };
    template <> struct default_interface<Windows::Perception::People::EyesPose>{ using type = Windows::Perception::People::IEyesPose; };
    template <> struct default_interface<Windows::Perception::People::HandMeshObserver>{ using type = Windows::Perception::People::IHandMeshObserver; };
    template <> struct default_interface<Windows::Perception::People::HandMeshVertexState>{ using type = Windows::Perception::People::IHandMeshVertexState; };
    template <> struct default_interface<Windows::Perception::People::HandPose>{ using type = Windows::Perception::People::IHandPose; };
    template <> struct default_interface<Windows::Perception::People::HeadPose>{ using type = Windows::Perception::People::IHeadPose; };
    template <> struct abi<Windows::Perception::People::IEyesPose>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsCalibrationValid(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Gaze(void**) noexcept = 0;
            virtual int32_t __stdcall get_UpdateTimestamp(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Perception::People::IEyesPoseStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall RequestAccessAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Perception::People::IHandMeshObserver>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Source(void**) noexcept = 0;
            virtual int32_t __stdcall get_TriangleIndexCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_VertexCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall GetTriangleIndices(uint32_t, uint16_t*) noexcept = 0;
            virtual int32_t __stdcall GetVertexStateForPose(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_NeutralPose(void**) noexcept = 0;
            virtual int32_t __stdcall get_NeutralPoseVersion(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ModelId(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Perception::People::IHandMeshVertexState>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CoordinateSystem(void**) noexcept = 0;
            virtual int32_t __stdcall GetVertices(uint32_t, struct struct_Windows_Perception_People_HandMeshVertex*) noexcept = 0;
            virtual int32_t __stdcall get_UpdateTimestamp(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Perception::People::IHandPose>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryGetJoint(void*, int32_t, struct struct_Windows_Perception_People_JointPose*, bool*) noexcept = 0;
            virtual int32_t __stdcall TryGetJoints(void*, uint32_t, int32_t*, uint32_t, struct struct_Windows_Perception_People_JointPose*, bool*) noexcept = 0;
            virtual int32_t __stdcall GetRelativeJoint(int32_t, int32_t, struct struct_Windows_Perception_People_JointPose*) noexcept = 0;
            virtual int32_t __stdcall GetRelativeJoints(uint32_t, int32_t*, uint32_t, int32_t*, uint32_t, struct struct_Windows_Perception_People_JointPose*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Perception::People::IHeadPose>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_ForwardDirection(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_UpDirection(Windows::Foundation::Numerics::float3*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Perception_People_IEyesPose
    {
        [[nodiscard]] auto IsCalibrationValid() const;
        [[nodiscard]] auto Gaze() const;
        [[nodiscard]] auto UpdateTimestamp() const;
    };
    template <> struct consume<Windows::Perception::People::IEyesPose>
    {
        template <typename D> using type = consume_Windows_Perception_People_IEyesPose<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_People_IEyesPoseStatics
    {
        auto IsSupported() const;
        auto RequestAccessAsync() const;
    };
    template <> struct consume<Windows::Perception::People::IEyesPoseStatics>
    {
        template <typename D> using type = consume_Windows_Perception_People_IEyesPoseStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_People_IHandMeshObserver
    {
        [[nodiscard]] auto Source() const;
        [[nodiscard]] auto TriangleIndexCount() const;
        [[nodiscard]] auto VertexCount() const;
        auto GetTriangleIndices(array_view<uint16_t> indices) const;
        auto GetVertexStateForPose(Windows::Perception::People::HandPose const& handPose) const;
        [[nodiscard]] auto NeutralPose() const;
        [[nodiscard]] auto NeutralPoseVersion() const;
        [[nodiscard]] auto ModelId() const;
    };
    template <> struct consume<Windows::Perception::People::IHandMeshObserver>
    {
        template <typename D> using type = consume_Windows_Perception_People_IHandMeshObserver<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_People_IHandMeshVertexState
    {
        [[nodiscard]] auto CoordinateSystem() const;
        auto GetVertices(array_view<Windows::Perception::People::HandMeshVertex> vertices) const;
        [[nodiscard]] auto UpdateTimestamp() const;
    };
    template <> struct consume<Windows::Perception::People::IHandMeshVertexState>
    {
        template <typename D> using type = consume_Windows_Perception_People_IHandMeshVertexState<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_People_IHandPose
    {
        auto TryGetJoint(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Perception::People::HandJointKind const& joint, Windows::Perception::People::JointPose& jointPose) const;
        auto TryGetJoints(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, array_view<Windows::Perception::People::HandJointKind const> joints, array_view<Windows::Perception::People::JointPose> jointPoses) const;
        auto GetRelativeJoint(Windows::Perception::People::HandJointKind const& joint, Windows::Perception::People::HandJointKind const& referenceJoint) const;
        auto GetRelativeJoints(array_view<Windows::Perception::People::HandJointKind const> joints, array_view<Windows::Perception::People::HandJointKind const> referenceJoints, array_view<Windows::Perception::People::JointPose> jointPoses) const;
    };
    template <> struct consume<Windows::Perception::People::IHandPose>
    {
        template <typename D> using type = consume_Windows_Perception_People_IHandPose<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_People_IHeadPose
    {
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto ForwardDirection() const;
        [[nodiscard]] auto UpDirection() const;
    };
    template <> struct consume<Windows::Perception::People::IHeadPose>
    {
        template <typename D> using type = consume_Windows_Perception_People_IHeadPose<D>;
    };
    struct struct_Windows_Perception_People_HandMeshVertex
    {
        Windows::Foundation::Numerics::float3 Position;
        Windows::Foundation::Numerics::float3 Normal;
    };
    template <> struct abi<Windows::Perception::People::HandMeshVertex>
    {
        using type = struct_Windows_Perception_People_HandMeshVertex;
    };
    struct struct_Windows_Perception_People_JointPose
    {
        Windows::Foundation::Numerics::quaternion Orientation;
        Windows::Foundation::Numerics::float3 Position;
        float Radius;
        int32_t Accuracy;
    };
    template <> struct abi<Windows::Perception::People::JointPose>
    {
        using type = struct_Windows_Perception_People_JointPose;
    };
}
#endif

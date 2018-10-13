template <typename T> void RegisterClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_Grid();
	RegisterModule_Grid();

	void RegisterModule_PerformanceReporting();
	RegisterModule_PerformanceReporting();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_Tilemap();
	RegisterModule_Tilemap();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_WebGL();
	RegisterModule_WebGL();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>(const char*);
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>(const char*);
class Behaviour; template <> void RegisterClass<Behaviour>(const char*);
class Animation; 
class Animator; template <> void RegisterClass<Animator>(const char*);
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>(const char*);
class AudioListener; template <> void RegisterClass<AudioListener>(const char*);
class AudioSource; template <> void RegisterClass<AudioSource>(const char*);
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>(const char*);
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>(const char*);
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterClass<Collider2D>(const char*);
class BoxCollider2D; template <> void RegisterClass<BoxCollider2D>(const char*);
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; template <> void RegisterClass<EdgeCollider2D>(const char*);
class PolygonCollider2D; 
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; 
class GUIElement; template <> void RegisterClass<GUIElement>(const char*);
namespace TextRenderingPrivate { class GUIText; } 
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>(const char*);
class GridLayout; template <> void RegisterClass<GridLayout>(const char*);
class Grid; template <> void RegisterClass<Grid>(const char*);
class Tilemap; template <> void RegisterClass<Tilemap>(const char*);
class Halo; 
class HaloLayer; 
class IConstraint; 
class AimConstraint; 
class ParentConstraint; 
class PositionConstraint; 
class RotationConstraint; 
class ScaleConstraint; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; 
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>(const char*);
class NavMeshAgent; 
class NavMeshObstacle; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; 
class Skybox; 
class SortingGroup; template <> void RegisterClass<SortingGroup>(const char*);
class Terrain; 
class VideoPlayer; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>(const char*);
class Collider; template <> void RegisterClass<Collider>(const char*);
class BoxCollider; template <> void RegisterClass<BoxCollider>(const char*);
class CapsuleCollider; 
class CharacterController; 
class MeshCollider; 
class SphereCollider; 
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>(const char*);
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; 
class Renderer; template <> void RegisterClass<Renderer>(const char*);
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterClass<MeshRenderer>(const char*);
class ParticleRenderer; 
class ParticleSystemRenderer; 
class SkinnedMeshRenderer; 
class SpriteMask; 
class SpriteRenderer; template <> void RegisterClass<SpriteRenderer>(const char*);
class SpriteShapeRenderer; 
class TilemapRenderer; template <> void RegisterClass<TilemapRenderer>(const char*);
class TrailRenderer; 
class Rigidbody; template <> void RegisterClass<Rigidbody>(const char*);
class Rigidbody2D; template <> void RegisterClass<Rigidbody2D>(const char*);
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterClass<Transform>(const char*);
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>(const char*);
class Tree; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>(const char*);
class NamedObject; template <> void RegisterClass<NamedObject>(const char*);
class AssetBundle; 
class AssetBundleManifest; 
class ScriptedImporter; 
class AssetImporterLog; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; 
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>(const char*);
class GameObjectRecorder; 
class LightProbes; 
class Material; template <> void RegisterClass<Material>(const char*);
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>(const char*);
class Motion; 
class AnimationClip; 
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterClass<PreloadData>(const char*);
class RuntimeAnimatorController; template <> void RegisterClass<RuntimeAnimatorController>(const char*);
class AnimatorController; 
class AnimatorOverrideController; template <> void RegisterClass<AnimatorOverrideController>(const char*);
class SampleClip; template <> void RegisterClass<SampleClip>(const char*);
class AudioClip; template <> void RegisterClass<AudioClip>(const char*);
class Shader; template <> void RegisterClass<Shader>(const char*);
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>(const char*);
class SpriteAtlas; 
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterClass<TextAsset>(const char*);
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>(const char*);
class Texture; template <> void RegisterClass<Texture>(const char*);
class BaseVideoTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterClass<LowerResBlitTexture>(const char*);
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>(const char*);
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>(const char*);
class Cubemap; template <> void RegisterClass<Cubemap>(const char*);
class Texture2DArray; template <> void RegisterClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterClass<Texture3D>(const char*);
class VideoClip; 
class GameManager; template <> void RegisterClass<GameManager>(const char*);
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>(const char*);
class AudioManager; template <> void RegisterClass<AudioManager>(const char*);
class BuildSettings; template <> void RegisterClass<BuildSettings>(const char*);
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>(const char*);
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>(const char*);
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterClass<InputManager>(const char*);
class MonoManager; template <> void RegisterClass<MonoManager>(const char*);
class NavMeshProjectSettings; 
class PerformanceReportingManager; template <> void RegisterClass<PerformanceReportingManager>(const char*);
class Physics2DSettings; template <> void RegisterClass<Physics2DSettings>(const char*);
class PhysicsManager; template <> void RegisterClass<PhysicsManager>(const char*);
class PlayerSettings; template <> void RegisterClass<PlayerSettings>(const char*);
class QualitySettings; template <> void RegisterClass<QualitySettings>(const char*);
class ResourceManager; template <> void RegisterClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>(const char*);
class ScriptMapper; template <> void RegisterClass<ScriptMapper>(const char*);
class TagManager; template <> void RegisterClass<TagManager>(const char*);
class TimeManager; template <> void RegisterClass<TimeManager>(const char*);
class UnityAnalyticsManager; template <> void RegisterClass<UnityAnalyticsManager>(const char*);
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>(const char*);
class LevelGameManager; template <> void RegisterClass<LevelGameManager>(const char*);
class LightmapSettings; template <> void RegisterClass<LightmapSettings>(const char*);
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>(const char*);
class RenderPassAttachment; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 79 non stripped classes
	//0. Camera
	RegisterClass<Camera>("Core");
	//1. Behaviour
	RegisterClass<Behaviour>("Core");
	//2. Unity::Component
	RegisterClass<Unity::Component>("Core");
	//3. EditorExtension
	RegisterClass<EditorExtension>("Core");
	//4. Renderer
	RegisterClass<Renderer>("Core");
	//5. Shader
	RegisterClass<Shader>("Core");
	//6. NamedObject
	RegisterClass<NamedObject>("Core");
	//7. MeshFilter
	RegisterClass<MeshFilter>("Core");
	//8. Mesh
	RegisterClass<Mesh>("Core");
	//9. MonoBehaviour
	RegisterClass<MonoBehaviour>("Core");
	//10. Material
	RegisterClass<Material>("Core");
	//11. Texture
	RegisterClass<Texture>("Core");
	//12. Texture2D
	RegisterClass<Texture2D>("Core");
	//13. RenderTexture
	RegisterClass<RenderTexture>("Core");
	//14. Sprite
	RegisterClass<Sprite>("Core");
	//15. GameObject
	RegisterClass<GameObject>("Core");
	//16. GUIElement
	RegisterClass<GUIElement>("Core");
	//17. GUILayer
	RegisterClass<GUILayer>("Core");
	//18. TextAsset
	RegisterClass<TextAsset>("Core");
	//19. Transform
	RegisterClass<Transform>("Core");
	//20. UI::RectTransform
	RegisterClass<UI::RectTransform>("Core");
	//21. BoxCollider
	RegisterClass<BoxCollider>("Physics");
	//22. Collider
	RegisterClass<Collider>("Physics");
	//23. Animator
	RegisterClass<Animator>("Animation");
	//24. AnimatorOverrideController
	RegisterClass<AnimatorOverrideController>("Animation");
	//25. RuntimeAnimatorController
	RegisterClass<RuntimeAnimatorController>("Animation");
	//26. AudioClip
	RegisterClass<AudioClip>("Audio");
	//27. SampleClip
	RegisterClass<SampleClip>("Audio");
	//28. AudioListener
	RegisterClass<AudioListener>("Audio");
	//29. AudioBehaviour
	RegisterClass<AudioBehaviour>("Audio");
	//30. AudioSource
	RegisterClass<AudioSource>("Audio");
	//31. TextRendering::Font
	RegisterClass<TextRendering::Font>("TextRendering");
	//32. Tilemap
	RegisterClass<Tilemap>("Tilemap");
	//33. GridLayout
	RegisterClass<GridLayout>("Grid");
	//34. UI::Canvas
	RegisterClass<UI::Canvas>("UI");
	//35. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>("UI");
	//36. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>("UI");
	//37. Rigidbody2D
	RegisterClass<Rigidbody2D>("Physics2D");
	//38. BoxCollider2D
	RegisterClass<BoxCollider2D>("Physics2D");
	//39. Collider2D
	RegisterClass<Collider2D>("Physics2D");
	//40. Rigidbody
	RegisterClass<Rigidbody>("Physics");
	//41. PreloadData
	RegisterClass<PreloadData>("Core");
	//42. Cubemap
	RegisterClass<Cubemap>("Core");
	//43. Texture3D
	RegisterClass<Texture3D>("Core");
	//44. Texture2DArray
	RegisterClass<Texture2DArray>("Core");
	//45. MeshRenderer
	RegisterClass<MeshRenderer>("Core");
	//46. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>("Core");
	//47. GameManager
	RegisterClass<GameManager>("Core");
	//48. TagManager
	RegisterClass<TagManager>("Core");
	//49. GlobalGameManager
	RegisterClass<GlobalGameManager>("Core");
	//50. GraphicsSettings
	RegisterClass<GraphicsSettings>("Core");
	//51. DelayedCallManager
	RegisterClass<DelayedCallManager>("Core");
	//52. QualitySettings
	RegisterClass<QualitySettings>("Core");
	//53. InputManager
	RegisterClass<InputManager>("Core");
	//54. TimeManager
	RegisterClass<TimeManager>("Core");
	//55. BuildSettings
	RegisterClass<BuildSettings>("Core");
	//56. ResourceManager
	RegisterClass<ResourceManager>("Core");
	//57. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>("Core");
	//58. ScriptMapper
	RegisterClass<ScriptMapper>("Core");
	//59. PhysicsManager
	RegisterClass<PhysicsManager>("Physics");
	//60. MonoManager
	RegisterClass<MonoManager>("Core");
	//61. MonoScript
	RegisterClass<MonoScript>("Core");
	//62. AudioManager
	RegisterClass<AudioManager>("Audio");
	//63. PlayerSettings
	RegisterClass<PlayerSettings>("Core");
	//64. MasterServerInterface
	//Skipping MasterServerInterface
	//65. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>("CloudWebServices");
	//66. PerformanceReportingManager
	RegisterClass<PerformanceReportingManager>("PerformanceReporting");
	//67. Physics2DSettings
	RegisterClass<Physics2DSettings>("Physics2D");
	//68. UnityAnalyticsManager
	RegisterClass<UnityAnalyticsManager>("UnityAnalytics");
	//69. UnityConnectSettings
	RegisterClass<UnityConnectSettings>("UnityConnect");
	//70. SortingGroup
	RegisterClass<SortingGroup>("Core");
	//71. RenderSettings
	RegisterClass<RenderSettings>("Core");
	//72. LevelGameManager
	RegisterClass<LevelGameManager>("Core");
	//73. LightmapSettings
	RegisterClass<LightmapSettings>("Core");
	//74. SpriteRenderer
	RegisterClass<SpriteRenderer>("Core");
	//75. TilemapRenderer
	RegisterClass<TilemapRenderer>("Tilemap");
	//76. EdgeCollider2D
	RegisterClass<EdgeCollider2D>("Physics2D");
	//77. Grid
	RegisterClass<Grid>("Grid");
	//78. NetworkManager
	//Skipping NetworkManager

}

// Generated by Apple Swift version 5.2.4 effective-4.2 (swiftlang-1103.0.32.9 clang-1103.0.32.53)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import AVFoundation;
@import CoreFoundation;
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import Photos;
@import QuartzCore;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MobScannerSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class CABasicAnimation;
@class UIBezierPath;
@class CAKeyframeAnimation;

SWIFT_CLASS("_TtC13MobScannerSDK19BEMAnimationManager")
@interface BEMAnimationManager : NSObject
/// The duration of the animation created by the <code>BEMAnimationManager</code> object.
@property (nonatomic) CFTimeInterval animationDuration;
/// Designated initializer.
/// * @param animationDuration The duration of the animations created with the <code>BEMAnimationManager</code> object.
/// * @return Returns the a fully initialized <code>BEMAnimationManager</code> object.
- (nonnull instancetype)initWithAnimationDuration:(CFTimeInterval)animationDuration OBJC_DESIGNATED_INITIALIZER;
/// Returns a <code>CABasicAnimation</code> which the stroke.
/// * @param reverse The direction of the animation. Set to YES if the animation should go from opacity 0 to 1, or NO for the opposite.
/// * @return Returns the <code>CABasicAnimation</code> object.
- (CABasicAnimation * _Nonnull)strokeAnimationReverse:(BOOL)reverse SWIFT_WARN_UNUSED_RESULT;
/// Returns a <code>CABasicAnimation</code> which animates the opacity.
/// * @param reverse The direction of the animation. Set to YES if the animation should go from opacity 0 to 1, or false for the opposite.
/// * @return Returns the <code>CABasicAnimation</code> object.
- (CABasicAnimation * _Nonnull)opacityAnimationReverse:(BOOL)reverse SWIFT_WARN_UNUSED_RESULT;
/// Returns a <code>CABasicAnimation</code> which animates between two paths.
/// * @param fromPath The path to transform (morph) from.
/// * @param toPath The path to transform (morph) to.
/// * @return Returns the <code>CABasicAnimation</code> object.
- (CABasicAnimation * _Nonnull)morphAnimationFrom:(UIBezierPath * _Nullable)fromPath to:(UIBezierPath * _Nullable)toPath SWIFT_WARN_UNUSED_RESULT;
/// Animation engine to create a fill animation.
/// * @param bounces The number of bounces for the animation.
/// * @param amplitude How far does the animation bounce.
/// * @param reverse Flag to track if the animation should fill or empty the layer.
/// * @return Returns the <code>CAKeyframeAnimation</code> object.
- (CAKeyframeAnimation * _Nonnull)fillAnimationWithBounces:(NSInteger)bounces amplitude:(CGFloat)amplitude reverse:(BOOL)reverse SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@protocol BEMCheckBoxDelegate;
enum BEMBoxType : NSInteger;
@class UIColor;
@class BEMCheckBoxGroup;
enum BEMAnimationType : NSInteger;
@class NSCoder;
@class UIEvent;
@class CAAnimation;

/// Tasteful Checkbox for iOS.
IB_DESIGNABLE
SWIFT_CLASS("_TtC13MobScannerSDK11BEMCheckBox")
@interface BEMCheckBox : UIControl <CAAnimationDelegate>
/// The object that acts as the delegate of the receiving check box.
/// <ul>
///   <li>
///     @discussion The delegate must adopt the \p BEMCheckBoxDelegate protocol. The delegate is not retained.
///   </li>
/// </ul>
@property (nonatomic, weak) IBOutlet id <BEMCheckBoxDelegate> _Nullable delegate;
/// This property allows you to retrieve and set (without animation) a value determining whether the BEMCheckBox object is On or Off.
/// * Default to NO.
@property (nonatomic) IBInspectable BOOL on;
/// The type of box.
/// * @see BoxType.
@property (nonatomic) enum BEMBoxType boxType;
/// The width of the lines of the check mark and the box. Default to 2.
@property (nonatomic) IBInspectable CGFloat lineWidth;
/// The corner radius which is applied to the box when the boxType is square. Default to 3.0.
@property (nonatomic) IBInspectable CGFloat cornerRadius;
/// The duration in seconds of the animation when the check box switches from on and off. Default to 0.
@property (nonatomic) IBInspectable CFTimeInterval animationDuration;
/// BOOL to control if the box should be hidden or not. Defaults to NO.
@property (nonatomic) IBInspectable BOOL hideBox;
/// The color of the line around the box when it is On.
@property (nonatomic, strong) IBInspectable UIColor * _Nullable onTintColor;
/// The color of the inside of the box when it is On.
@property (nonatomic, strong) IBInspectable UIColor * _Nullable onFillColor;
/// The color of the inside of the box when it is Off.
@property (nonatomic, strong) IBInspectable UIColor * _Nullable offFillColor;
/// The color of the check mark when it is On.
@property (nonatomic, strong) IBInspectable UIColor * _Nullable onCheckColor;
/// The group this box is associated with.
@property (nonatomic, strong) BEMCheckBoxGroup * _Nullable group;
/// The animation type when the check mark gets set to On.
/// * @warning Some animations might not look as intended if the different colors of the control are not appropriatly configured.
/// * @see BEMAnimationType.
@property (nonatomic) enum BEMAnimationType onAnimationType;
/// The animation type when the check mark gets set to Off.
/// * @warning Some animations might not look as intended if the different colors of the control are not appropriatly configured.
/// * @see BEMAnimationType.
@property (nonatomic) enum BEMAnimationType offAnimationType;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic) CGRect frame;
- (void)layoutSubviews;
@property (nonatomic, readonly) CGSize intrinsicContentSize;
/// Set the state of the check box to On or Off, optionally animating the
- (void)setOn:(BOOL)on animated:(BOOL)animated;
- (BOOL)pointInside:(CGPoint)point withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
- (void)animationDidStop:(CAAnimation * _Nonnull)anim finished:(BOOL)flag;
@end

typedef SWIFT_ENUM_NAMED(NSInteger, BEMBoxType, "BoxType", closed) {
/// Circled box.
  BEMBoxTypeCircle = 0,
/// Squared box.
  BEMBoxTypeSquare = 1,
};

typedef SWIFT_ENUM_NAMED(NSInteger, BEMAnimationType, "AnimationType", closed) {
/// Animates the box and the check as if they were drawn.
/// *  Should be used with a clear colored <code>onFillColor</code> property.
  BEMAnimationTypeStroke = 0,
/// When tapped, the checkbox is filled from its center.
/// * Should be used with a colored <code>onFillColor</code> property.
  BEMAnimationTypeFill = 1,
/// Animates the check mark with a bouncy effect.
  BEMAnimationTypeBounce = 2,
/// Morphs the checkmark from a line.
/// * Should be used with a colored <code>onFillColor</code> property.
  BEMAnimationTypeFlat = 3,
/// Animates the box and check as if they were drawn in one continuous line.
/// * Should be used with a clear colored <code>onFillColor</code> property.
  BEMAnimationTypeOneStroke = 4,
/// When tapped, the checkbox is fading in or out (opacity).
  BEMAnimationTypeFade = 5,
};


/// The BEMCheckBoxDelegate protocol. Used to receive life cycle events.
SWIFT_PROTOCOL("_TtP13MobScannerSDK19BEMCheckBoxDelegate_")
@protocol BEMCheckBoxDelegate <NSObject>
@optional
/// Sent to the delegate every time the check box gets tapped.
/// * @discussion This method gets triggered after the properties are updated (on), but before the animations, if any, are completed.
/// * @seealso animationDidStopForCheckBox:
/// * @param checkBox The BEMCheckBox instance that has been tapped.
- (void)didTap:(BEMCheckBox * _Nonnull)checkBox;
/// Sent to the delegate every time the check box finishes being animated.
/// * @discussion This method gets triggered after the properties are updated (on), and after the animations are completed. It won’t be triggered if no animations are started.
/// * @seealso didTapCheckBox:
/// * @param checkBox The BEMCheckBox instance that was animated.
- (void)animationDidStopFor:(BEMCheckBox * _Nonnull)checkBox;
@end


SWIFT_CLASS("_TtC13MobScannerSDK16BEMCheckBoxGroup")
@interface BEMCheckBoxGroup : NSObject
/// An array of check boxes in this group.
@property (nonatomic, readonly, strong) NSHashTable<BEMCheckBox *> * _Nonnull checkBoxes;
/// The currently selected check box. Only can be nil if mustHaveSelection is NO. Setting this value will cause the other check boxes to deselect automatically.
@property (nonatomic, strong) BEMCheckBox * _Nullable selectedCheckBox;
/// If YES, don’t allow the user to unselect all options, must have single selection at all times. Default to NO.
@property (nonatomic) BOOL mustHaveSelection;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Creates a new group with the list of check boxes.
- (nonnull instancetype)initWithCheckBoxes:(NSArray<BEMCheckBox *> * _Nonnull)checkBoxes;
/// Tests whether the checkbox is in this group
- (BOOL)contains:(BEMCheckBox * _Nonnull)checkBox SWIFT_WARN_UNUSED_RESULT;
/// Adds a check box to this group. Check boxes can only belong to a single group, adding to a group removes it from its current group.
- (void)addCheckBoxToGroup:(BEMCheckBox * _Nonnull)checkBox;
/// Removes a check box from this group.
- (void)removeCheckBoxFromGroup:(BEMCheckBox * _Nonnull)checkBox;
@end

@class NSBundle;

SWIFT_CLASS("_TtC13MobScannerSDK18BaseViewController")
@interface BaseViewController : UIViewController
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
@property (nonatomic, readonly) BOOL shouldAutorotate;
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
@property (nonatomic, readonly) UIInterfaceOrientation preferredInterfaceOrientationForPresentation;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITouch;
@class AVCapturePhotoOutput;
@class AVCapturePhoto;

SWIFT_CLASS("_TtC13MobScannerSDK10CameraView")
@interface CameraView : UIView <AVCapturePhotoCaptureDelegate>
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)captureOutput:(AVCapturePhotoOutput * _Nonnull)output didFinishProcessingPhoto:(AVCapturePhoto * _Nonnull)photo error:(NSError * _Nullable)error;
@end

@protocol UIViewControllerTransitionCoordinator;

SWIFT_CLASS("_TtC13MobScannerSDK20CameraViewController")
@interface CameraViewController : BaseViewController
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator> _Nonnull)coordinator;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIScrollView;

SWIFT_CLASS("_TtC13MobScannerSDK12CardViewList")
@interface CardViewList : NSObject <UIScrollViewDelegate>
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (void)scrollViewDidScroll:(UIScrollView * _Nonnull)scrollView;
@end


SWIFT_CLASS("_TtC13MobScannerSDK8CropView")
@interface CropView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13MobScannerSDK18CropViewController")
@interface CropViewController : BaseViewController
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13MobScannerSDK25TatsiPickerViewController")
@interface TatsiPickerViewController : UINavigationController
@property (nonatomic, readonly) UIStatusBarStyle preferredStatusBarStyle;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNavigationBarClass:(Class _Nullable)navigationBarClass toolbarClass:(Class _Nullable)toolbarClass SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithRootViewController:(UIViewController * _Nonnull)rootViewController SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC13MobScannerSDK18DeviceImagerPicker")
@interface DeviceImagerPicker : TatsiPickerViewController
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC13MobScannerSDK14FilterCardView")
@interface FilterCardView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (void)drawRect:(CGRect)rect;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC13MobScannerSDK16FilterOptionList")
@interface FilterOptionList : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC13MobScannerSDK25ImageFilterViewController")
@interface ImageFilterViewController : BaseViewController
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13MobScannerSDK26ImagePreviewViewController")
@interface ImagePreviewViewController : BaseViewController
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end














#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

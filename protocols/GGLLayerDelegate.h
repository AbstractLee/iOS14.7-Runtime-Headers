/* Generated by RuntimeBrowser.
 */

@protocol GGLLayerDelegate

@required

- (void)didPresent;
- (void)didUpdateFrameTexture;
- (void)drawToTexture:(struct Texture { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; unsigned int x10; int x11; unsigned int x12; unsigned int x13; }*)arg1 withRenderQueue:(struct RenderQueue { struct PassDescriptor { struct AttachmentActions { int x_1_2_1; int x_1_2_2; } x_1_1_1[4]; struct AttachmentActions { int x_2_2_1; int x_2_2_2; } x_1_1_2; struct AttachmentActions { int x_3_2_1; int x_3_2_2; } x_1_1_3; } x1; struct vector<ggl::RenderQueue::Pass, geo::StdAllocator<ggl::RenderQueue::Pass, ggl::Allocator>> { struct Pass {} *x_2_1_1; struct Pass {} *x_2_1_2; struct __compressed_pair<ggl::RenderQueue::Pass *, geo::StdAllocator<ggl::RenderQueue::Pass, ggl::Allocator>> { struct Pass {} *x_3_2_1; struct StdAllocator<ggl::RenderQueue::Pass, ggl::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_2_1_3; } x2; struct vector<ggl::CommandBuffer *, geo::StdAllocator<ggl::CommandBuffer *, ggl::Allocator>> { struct CommandBuffer {} **x_3_1_1; struct CommandBuffer {} **x_3_1_2; struct __compressed_pair<ggl::CommandBuffer **, geo::StdAllocator<ggl::CommandBuffer *, ggl::Allocator>> { struct CommandBuffer {} **x_3_2_1; struct StdAllocator<ggl::CommandBuffer *, ggl::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_3_1_3; } x3; }*)arg2;
- (bool)isDelayedRenderQueueConsumptionSupported;
- (void)prepareTexture:(const struct shared_ptr<ggl::Texture2DAbstract> { struct Texture2DAbstract {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (struct RenderQueue { struct PassDescriptor { struct AttachmentActions { int x_1_2_1; int x_1_2_2; } x_1_1_1[4]; struct AttachmentActions { int x_2_2_1; int x_2_2_2; } x_1_1_2; struct AttachmentActions { int x_3_2_1; int x_3_2_2; } x_1_1_3; } x1; struct vector<ggl::RenderQueue::Pass, geo::StdAllocator<ggl::RenderQueue::Pass, ggl::Allocator>> { struct Pass {} *x_2_1_1; struct Pass {} *x_2_1_2; struct __compressed_pair<ggl::RenderQueue::Pass *, geo::StdAllocator<ggl::RenderQueue::Pass, ggl::Allocator>> { struct Pass {} *x_3_2_1; struct StdAllocator<ggl::RenderQueue::Pass, ggl::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_2_1_3; } x2; struct vector<ggl::CommandBuffer *, geo::StdAllocator<ggl::CommandBuffer *, ggl::Allocator>> { struct CommandBuffer {} **x_3_1_1; struct CommandBuffer {} **x_3_1_2; struct __compressed_pair<ggl::CommandBuffer **, geo::StdAllocator<ggl::CommandBuffer *, ggl::Allocator>> { struct CommandBuffer {} **x_3_2_1; struct StdAllocator<ggl::CommandBuffer *, ggl::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_3_1_3; } x3; }*)renderQueueForTimestamp:(double)arg1;
- (void)willPresent;
- (void)willUpdateFrameTexture;

@end

/* Automatically generated from Vulkan vk.xml; DO NOT EDIT!
 *
 * This file is generated from Vulkan vk.xml file covered
 * by the following copyright and permission notice:
 *
 * Copyright 2015-2022 The Khronos Group Inc.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#if 0
#pragma makedep unix
#endif

#include "config.h"

#include <stdlib.h>

#include "vulkan_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(vulkan);

static uint64_t wine_vk_unwrap_handle(uint32_t type, uint64_t handle)
{
    switch(type)
    {
    case VK_OBJECT_TYPE_COMMAND_BUFFER:
        return (uint64_t) (uintptr_t) wine_cmd_buffer_from_handle(((VkCommandBuffer) (uintptr_t) handle))->command_buffer;
    case VK_OBJECT_TYPE_COMMAND_POOL:
        return (uint64_t) wine_cmd_pool_from_handle(handle)->command_pool;
    case VK_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT:
        return (uint64_t) wine_debug_report_callback_from_handle(handle)->debug_callback;
    case VK_OBJECT_TYPE_DEBUG_UTILS_MESSENGER_EXT:
        return (uint64_t) wine_debug_utils_messenger_from_handle(handle)->debug_messenger;
    case VK_OBJECT_TYPE_DEVICE:
        return (uint64_t) (uintptr_t) wine_device_from_handle(((VkDevice) (uintptr_t) handle))->device;
    case VK_OBJECT_TYPE_INSTANCE:
        return (uint64_t) (uintptr_t) wine_instance_from_handle(((VkInstance) (uintptr_t) handle))->instance;
    case VK_OBJECT_TYPE_PHYSICAL_DEVICE:
        return (uint64_t) (uintptr_t) wine_phys_dev_from_handle(((VkPhysicalDevice) (uintptr_t) handle))->phys_dev;
    case VK_OBJECT_TYPE_QUEUE:
        return (uint64_t) (uintptr_t) wine_queue_from_handle(((VkQueue) (uintptr_t) handle))->queue;
    case VK_OBJECT_TYPE_SURFACE_KHR:
        return (uint64_t) wine_surface_from_handle(handle)->surface;
    default:
       return handle;
    }
}

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkAcquireNextImageInfoKHR_win32_to_host(const VkAcquireNextImageInfoKHR *in, VkAcquireNextImageInfoKHR_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->swapchain = in->swapchain;
    out->timeout = in->timeout;
    out->semaphore = in->semaphore;
    out->fence = in->fence;
    out->deviceMask = in->deviceMask;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkAcquireProfilingLockInfoKHR_win32_to_host(const VkAcquireProfilingLockInfoKHR *in, VkAcquireProfilingLockInfoKHR_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->flags = in->flags;
    out->timeout = in->timeout;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkCommandBufferAllocateInfo_win32_to_unwrapped_host(const VkCommandBufferAllocateInfo *in, VkCommandBufferAllocateInfo_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->commandPool = in->commandPool;
    out->level = in->level;
    out->commandBufferCount = in->commandBufferCount;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkDescriptorSetAllocateInfo_win32_to_host(const VkDescriptorSetAllocateInfo *in, VkDescriptorSetAllocateInfo_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->descriptorPool = in->descriptorPool;
    out->descriptorSetCount = in->descriptorSetCount;
    out->pSetLayouts = in->pSetLayouts;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkMemoryAllocateInfo_win32_to_host(const VkMemoryAllocateInfo *in, VkMemoryAllocateInfo_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->allocationSize = in->allocationSize;
    out->memoryTypeIndex = in->memoryTypeIndex;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkCommandBufferInheritanceInfo_win32_to_host(const VkCommandBufferInheritanceInfo *in, VkCommandBufferInheritanceInfo_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->renderPass = in->renderPass;
    out->subpass = in->subpass;
    out->framebuffer = in->framebuffer;
    out->occlusionQueryEnable = in->occlusionQueryEnable;
    out->queryFlags = in->queryFlags;
    out->pipelineStatistics = in->pipelineStatistics;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkCommandBufferInheritanceInfo_host *convert_VkCommandBufferInheritanceInfo_array_win32_to_host(struct conversion_context *ctx, const VkCommandBufferInheritanceInfo *in, uint32_t count)
{
    VkCommandBufferInheritanceInfo_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkCommandBufferInheritanceInfo_win32_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkCommandBufferBeginInfo_win32_to_host(struct conversion_context *ctx, const VkCommandBufferBeginInfo *in, VkCommandBufferBeginInfo_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->flags = in->flags;
    out->pInheritanceInfo = convert_VkCommandBufferInheritanceInfo_array_win32_to_host(ctx, in->pInheritanceInfo, 1);
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkBindAccelerationStructureMemoryInfoNV_win32_to_host(const VkBindAccelerationStructureMemoryInfoNV *in, VkBindAccelerationStructureMemoryInfoNV_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->accelerationStructure = in->accelerationStructure;
    out->memory = in->memory;
    out->memoryOffset = in->memoryOffset;
    out->deviceIndexCount = in->deviceIndexCount;
    out->pDeviceIndices = in->pDeviceIndices;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkBindAccelerationStructureMemoryInfoNV_host *convert_VkBindAccelerationStructureMemoryInfoNV_array_win32_to_host(struct conversion_context *ctx, const VkBindAccelerationStructureMemoryInfoNV *in, uint32_t count)
{
    VkBindAccelerationStructureMemoryInfoNV_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkBindAccelerationStructureMemoryInfoNV_win32_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkBindBufferMemoryInfo_win32_to_host(const VkBindBufferMemoryInfo *in, VkBindBufferMemoryInfo_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->buffer = in->buffer;
    out->memory = in->memory;
    out->memoryOffset = in->memoryOffset;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkBindBufferMemoryInfo_host *convert_VkBindBufferMemoryInfo_array_win32_to_host(struct conversion_context *ctx, const VkBindBufferMemoryInfo *in, uint32_t count)
{
    VkBindBufferMemoryInfo_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkBindBufferMemoryInfo_win32_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkBindImageMemoryInfo_win32_to_host(const VkBindImageMemoryInfo *in, VkBindImageMemoryInfo_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->image = in->image;
    out->memory = in->memory;
    out->memoryOffset = in->memoryOffset;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkBindImageMemoryInfo_host *convert_VkBindImageMemoryInfo_array_win32_to_host(struct conversion_context *ctx, const VkBindImageMemoryInfo *in, uint32_t count)
{
    VkBindImageMemoryInfo_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkBindImageMemoryInfo_win32_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkAccelerationStructureBuildGeometryInfoKHR_win32_to_host(const VkAccelerationStructureBuildGeometryInfoKHR *in, VkAccelerationStructureBuildGeometryInfoKHR_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->type = in->type;
    out->flags = in->flags;
    out->mode = in->mode;
    out->srcAccelerationStructure = in->srcAccelerationStructure;
    out->dstAccelerationStructure = in->dstAccelerationStructure;
    out->geometryCount = in->geometryCount;
    out->pGeometries = in->pGeometries;
    out->ppGeometries = in->ppGeometries;
    out->scratchData = in->scratchData;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkAccelerationStructureBuildGeometryInfoKHR_host *convert_VkAccelerationStructureBuildGeometryInfoKHR_array_win32_to_host(struct conversion_context *ctx, const VkAccelerationStructureBuildGeometryInfoKHR *in, uint32_t count)
{
    VkAccelerationStructureBuildGeometryInfoKHR_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkAccelerationStructureBuildGeometryInfoKHR_win32_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkMicromapBuildInfoEXT_win32_to_host(const VkMicromapBuildInfoEXT *in, VkMicromapBuildInfoEXT_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->type = in->type;
    out->flags = in->flags;
    out->mode = in->mode;
    out->dstMicromap = in->dstMicromap;
    out->usageCountsCount = in->usageCountsCount;
    out->pUsageCounts = in->pUsageCounts;
    out->ppUsageCounts = in->ppUsageCounts;
    out->data = in->data;
    out->scratchData = in->scratchData;
    out->triangleArray = in->triangleArray;
    out->triangleArrayStride = in->triangleArrayStride;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkMicromapBuildInfoEXT_host *convert_VkMicromapBuildInfoEXT_array_win32_to_host(struct conversion_context *ctx, const VkMicromapBuildInfoEXT *in, uint32_t count)
{
    VkMicromapBuildInfoEXT_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkMicromapBuildInfoEXT_win32_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkConditionalRenderingBeginInfoEXT_win32_to_host(const VkConditionalRenderingBeginInfoEXT *in, VkConditionalRenderingBeginInfoEXT_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->buffer = in->buffer;
    out->offset = in->offset;
    out->flags = in->flags;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkRenderPassBeginInfo_win32_to_host(const VkRenderPassBeginInfo *in, VkRenderPassBeginInfo_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->renderPass = in->renderPass;
    out->framebuffer = in->framebuffer;
    out->renderArea = in->renderArea;
    out->clearValueCount = in->clearValueCount;
    out->pClearValues = in->pClearValues;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkRenderingAttachmentInfo_win32_to_host(const VkRenderingAttachmentInfo *in, VkRenderingAttachmentInfo_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->imageView = in->imageView;
    out->imageLayout = in->imageLayout;
    out->resolveMode = in->resolveMode;
    out->resolveImageView = in->resolveImageView;
    out->resolveImageLayout = in->resolveImageLayout;
    out->loadOp = in->loadOp;
    out->storeOp = in->storeOp;
    out->clearValue = in->clearValue;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkRenderingAttachmentInfo_host *convert_VkRenderingAttachmentInfo_array_win32_to_host(struct conversion_context *ctx, const VkRenderingAttachmentInfo *in, uint32_t count)
{
    VkRenderingAttachmentInfo_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkRenderingAttachmentInfo_win32_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkRenderingInfo_win32_to_host(struct conversion_context *ctx, const VkRenderingInfo *in, VkRenderingInfo_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->flags = in->flags;
    out->renderArea = in->renderArea;
    out->layerCount = in->layerCount;
    out->viewMask = in->viewMask;
    out->colorAttachmentCount = in->colorAttachmentCount;
    out->pColorAttachments = convert_VkRenderingAttachmentInfo_array_win32_to_host(ctx, in->pColorAttachments, in->colorAttachmentCount);
    out->pDepthAttachment = convert_VkRenderingAttachmentInfo_array_win32_to_host(ctx, in->pDepthAttachment, 1);
    out->pStencilAttachment = convert_VkRenderingAttachmentInfo_array_win32_to_host(ctx, in->pStencilAttachment, 1);
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkBlitImageInfo2_win32_to_host(const VkBlitImageInfo2 *in, VkBlitImageInfo2_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->srcImage = in->srcImage;
    out->srcImageLayout = in->srcImageLayout;
    out->dstImage = in->dstImage;
    out->dstImageLayout = in->dstImageLayout;
    out->regionCount = in->regionCount;
    out->pRegions = in->pRegions;
    out->filter = in->filter;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkGeometryTrianglesNV_win32_to_host(const VkGeometryTrianglesNV *in, VkGeometryTrianglesNV_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->vertexData = in->vertexData;
    out->vertexOffset = in->vertexOffset;
    out->vertexCount = in->vertexCount;
    out->vertexStride = in->vertexStride;
    out->vertexFormat = in->vertexFormat;
    out->indexData = in->indexData;
    out->indexOffset = in->indexOffset;
    out->indexCount = in->indexCount;
    out->indexType = in->indexType;
    out->transformData = in->transformData;
    out->transformOffset = in->transformOffset;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkGeometryAABBNV_win32_to_host(const VkGeometryAABBNV *in, VkGeometryAABBNV_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->aabbData = in->aabbData;
    out->numAABBs = in->numAABBs;
    out->stride = in->stride;
    out->offset = in->offset;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkGeometryDataNV_win32_to_host(const VkGeometryDataNV *in, VkGeometryDataNV_host *out)
{
    if (!in) return;

    convert_VkGeometryTrianglesNV_win32_to_host(&in->triangles, &out->triangles);
    convert_VkGeometryAABBNV_win32_to_host(&in->aabbs, &out->aabbs);
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkGeometryNV_win32_to_host(const VkGeometryNV *in, VkGeometryNV_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->geometryType = in->geometryType;
    convert_VkGeometryDataNV_win32_to_host(&in->geometry, &out->geometry);
    out->flags = in->flags;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkGeometryNV_host *convert_VkGeometryNV_array_win32_to_host(struct conversion_context *ctx, const VkGeometryNV *in, uint32_t count)
{
    VkGeometryNV_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkGeometryNV_win32_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkAccelerationStructureInfoNV_win32_to_host(struct conversion_context *ctx, const VkAccelerationStructureInfoNV *in, VkAccelerationStructureInfoNV_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->type = in->type;
    out->flags = in->flags;
    out->instanceCount = in->instanceCount;
    out->geometryCount = in->geometryCount;
    out->pGeometries = convert_VkGeometryNV_array_win32_to_host(ctx, in->pGeometries, in->geometryCount);
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkCopyAccelerationStructureInfoKHR_win32_to_host(const VkCopyAccelerationStructureInfoKHR *in, VkCopyAccelerationStructureInfoKHR_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->src = in->src;
    out->dst = in->dst;
    out->mode = in->mode;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkCopyAccelerationStructureToMemoryInfoKHR_win32_to_host(const VkCopyAccelerationStructureToMemoryInfoKHR *in, VkCopyAccelerationStructureToMemoryInfoKHR_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->src = in->src;
    out->dst = in->dst;
    out->mode = in->mode;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkBufferCopy_win32_to_host(const VkBufferCopy *in, VkBufferCopy_host *out)
{
    if (!in) return;

    out->srcOffset = in->srcOffset;
    out->dstOffset = in->dstOffset;
    out->size = in->size;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkBufferCopy_host *convert_VkBufferCopy_array_win32_to_host(struct conversion_context *ctx, const VkBufferCopy *in, uint32_t count)
{
    VkBufferCopy_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkBufferCopy_win32_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkBufferCopy2_win32_to_host(const VkBufferCopy2 *in, VkBufferCopy2_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->srcOffset = in->srcOffset;
    out->dstOffset = in->dstOffset;
    out->size = in->size;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkBufferCopy2_host *convert_VkBufferCopy2_array_win32_to_host(struct conversion_context *ctx, const VkBufferCopy2 *in, uint32_t count)
{
    VkBufferCopy2_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkBufferCopy2_win32_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkCopyBufferInfo2_win32_to_host(struct conversion_context *ctx, const VkCopyBufferInfo2 *in, VkCopyBufferInfo2_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->srcBuffer = in->srcBuffer;
    out->dstBuffer = in->dstBuffer;
    out->regionCount = in->regionCount;
    out->pRegions = convert_VkBufferCopy2_array_win32_to_host(ctx, in->pRegions, in->regionCount);
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkBufferImageCopy_win32_to_host(const VkBufferImageCopy *in, VkBufferImageCopy_host *out)
{
    if (!in) return;

    out->bufferOffset = in->bufferOffset;
    out->bufferRowLength = in->bufferRowLength;
    out->bufferImageHeight = in->bufferImageHeight;
    out->imageSubresource = in->imageSubresource;
    out->imageOffset = in->imageOffset;
    out->imageExtent = in->imageExtent;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkBufferImageCopy_host *convert_VkBufferImageCopy_array_win32_to_host(struct conversion_context *ctx, const VkBufferImageCopy *in, uint32_t count)
{
    VkBufferImageCopy_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkBufferImageCopy_win32_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkBufferImageCopy2_win32_to_host(const VkBufferImageCopy2 *in, VkBufferImageCopy2_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->bufferOffset = in->bufferOffset;
    out->bufferRowLength = in->bufferRowLength;
    out->bufferImageHeight = in->bufferImageHeight;
    out->imageSubresource = in->imageSubresource;
    out->imageOffset = in->imageOffset;
    out->imageExtent = in->imageExtent;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkBufferImageCopy2_host *convert_VkBufferImageCopy2_array_win32_to_host(struct conversion_context *ctx, const VkBufferImageCopy2 *in, uint32_t count)
{
    VkBufferImageCopy2_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkBufferImageCopy2_win32_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkCopyBufferToImageInfo2_win32_to_host(struct conversion_context *ctx, const VkCopyBufferToImageInfo2 *in, VkCopyBufferToImageInfo2_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->srcBuffer = in->srcBuffer;
    out->dstImage = in->dstImage;
    out->dstImageLayout = in->dstImageLayout;
    out->regionCount = in->regionCount;
    out->pRegions = convert_VkBufferImageCopy2_array_win32_to_host(ctx, in->pRegions, in->regionCount);
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkCopyImageInfo2_win32_to_host(const VkCopyImageInfo2 *in, VkCopyImageInfo2_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->srcImage = in->srcImage;
    out->srcImageLayout = in->srcImageLayout;
    out->dstImage = in->dstImage;
    out->dstImageLayout = in->dstImageLayout;
    out->regionCount = in->regionCount;
    out->pRegions = in->pRegions;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkCopyImageToBufferInfo2_win32_to_host(struct conversion_context *ctx, const VkCopyImageToBufferInfo2 *in, VkCopyImageToBufferInfo2_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->srcImage = in->srcImage;
    out->srcImageLayout = in->srcImageLayout;
    out->dstBuffer = in->dstBuffer;
    out->regionCount = in->regionCount;
    out->pRegions = convert_VkBufferImageCopy2_array_win32_to_host(ctx, in->pRegions, in->regionCount);
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkCopyMemoryToAccelerationStructureInfoKHR_win32_to_host(const VkCopyMemoryToAccelerationStructureInfoKHR *in, VkCopyMemoryToAccelerationStructureInfoKHR_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->src = in->src;
    out->dst = in->dst;
    out->mode = in->mode;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkCopyMemoryToMicromapInfoEXT_win32_to_host(const VkCopyMemoryToMicromapInfoEXT *in, VkCopyMemoryToMicromapInfoEXT_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->src = in->src;
    out->dst = in->dst;
    out->mode = in->mode;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkCopyMicromapInfoEXT_win32_to_host(const VkCopyMicromapInfoEXT *in, VkCopyMicromapInfoEXT_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->src = in->src;
    out->dst = in->dst;
    out->mode = in->mode;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkCopyMicromapToMemoryInfoEXT_win32_to_host(const VkCopyMicromapToMemoryInfoEXT *in, VkCopyMicromapToMemoryInfoEXT_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->src = in->src;
    out->dst = in->dst;
    out->mode = in->mode;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkCuLaunchInfoNVX_win32_to_host(const VkCuLaunchInfoNVX *in, VkCuLaunchInfoNVX_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->function = in->function;
    out->gridDimX = in->gridDimX;
    out->gridDimY = in->gridDimY;
    out->gridDimZ = in->gridDimZ;
    out->blockDimX = in->blockDimX;
    out->blockDimY = in->blockDimY;
    out->blockDimZ = in->blockDimZ;
    out->sharedMemBytes = in->sharedMemBytes;
    out->paramCount = in->paramCount;
    out->pParams = in->pParams;
    out->extraCount = in->extraCount;
    out->pExtras = in->pExtras;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkDecompressMemoryRegionNV_win32_to_host(const VkDecompressMemoryRegionNV *in, VkDecompressMemoryRegionNV_host *out)
{
    if (!in) return;

    out->srcAddress = in->srcAddress;
    out->dstAddress = in->dstAddress;
    out->compressedSize = in->compressedSize;
    out->decompressedSize = in->decompressedSize;
    out->decompressionMethod = in->decompressionMethod;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkDecompressMemoryRegionNV_host *convert_VkDecompressMemoryRegionNV_array_win32_to_host(struct conversion_context *ctx, const VkDecompressMemoryRegionNV *in, uint32_t count)
{
    VkDecompressMemoryRegionNV_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkDecompressMemoryRegionNV_win32_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)
static inline VkCommandBuffer *convert_VkCommandBuffer_array_win64_to_host(struct conversion_context *ctx, const VkCommandBuffer *in, uint32_t count)
{
    VkCommandBuffer *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        out[i] = wine_cmd_buffer_from_handle(in[i])->command_buffer;
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkCommandBuffer *convert_VkCommandBuffer_array_win32_to_host(struct conversion_context *ctx, const VkCommandBuffer *in, uint32_t count)
{
    VkCommandBuffer *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        out[i] = wine_cmd_buffer_from_handle(in[i])->command_buffer;
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkIndirectCommandsStreamNV_win32_to_host(const VkIndirectCommandsStreamNV *in, VkIndirectCommandsStreamNV_host *out)
{
    if (!in) return;

    out->buffer = in->buffer;
    out->offset = in->offset;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkIndirectCommandsStreamNV_host *convert_VkIndirectCommandsStreamNV_array_win32_to_host(struct conversion_context *ctx, const VkIndirectCommandsStreamNV *in, uint32_t count)
{
    VkIndirectCommandsStreamNV_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkIndirectCommandsStreamNV_win32_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkGeneratedCommandsInfoNV_win32_to_host(struct conversion_context *ctx, const VkGeneratedCommandsInfoNV *in, VkGeneratedCommandsInfoNV_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->pipelineBindPoint = in->pipelineBindPoint;
    out->pipeline = in->pipeline;
    out->indirectCommandsLayout = in->indirectCommandsLayout;
    out->streamCount = in->streamCount;
    out->pStreams = convert_VkIndirectCommandsStreamNV_array_win32_to_host(ctx, in->pStreams, in->streamCount);
    out->sequencesCount = in->sequencesCount;
    out->preprocessBuffer = in->preprocessBuffer;
    out->preprocessOffset = in->preprocessOffset;
    out->preprocessSize = in->preprocessSize;
    out->sequencesCountBuffer = in->sequencesCountBuffer;
    out->sequencesCountOffset = in->sequencesCountOffset;
    out->sequencesIndexBuffer = in->sequencesIndexBuffer;
    out->sequencesIndexOffset = in->sequencesIndexOffset;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkBufferMemoryBarrier_win32_to_host(const VkBufferMemoryBarrier *in, VkBufferMemoryBarrier_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->srcAccessMask = in->srcAccessMask;
    out->dstAccessMask = in->dstAccessMask;
    out->srcQueueFamilyIndex = in->srcQueueFamilyIndex;
    out->dstQueueFamilyIndex = in->dstQueueFamilyIndex;
    out->buffer = in->buffer;
    out->offset = in->offset;
    out->size = in->size;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkBufferMemoryBarrier_host *convert_VkBufferMemoryBarrier_array_win32_to_host(struct conversion_context *ctx, const VkBufferMemoryBarrier *in, uint32_t count)
{
    VkBufferMemoryBarrier_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkBufferMemoryBarrier_win32_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkImageMemoryBarrier_win32_to_host(const VkImageMemoryBarrier *in, VkImageMemoryBarrier_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->srcAccessMask = in->srcAccessMask;
    out->dstAccessMask = in->dstAccessMask;
    out->oldLayout = in->oldLayout;
    out->newLayout = in->newLayout;
    out->srcQueueFamilyIndex = in->srcQueueFamilyIndex;
    out->dstQueueFamilyIndex = in->dstQueueFamilyIndex;
    out->image = in->image;
    out->subresourceRange = in->subresourceRange;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkImageMemoryBarrier_host *convert_VkImageMemoryBarrier_array_win32_to_host(struct conversion_context *ctx, const VkImageMemoryBarrier *in, uint32_t count)
{
    VkImageMemoryBarrier_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkImageMemoryBarrier_win32_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkBufferMemoryBarrier2_win32_to_host(const VkBufferMemoryBarrier2 *in, VkBufferMemoryBarrier2_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->srcStageMask = in->srcStageMask;
    out->srcAccessMask = in->srcAccessMask;
    out->dstStageMask = in->dstStageMask;
    out->dstAccessMask = in->dstAccessMask;
    out->srcQueueFamilyIndex = in->srcQueueFamilyIndex;
    out->dstQueueFamilyIndex = in->dstQueueFamilyIndex;
    out->buffer = in->buffer;
    out->offset = in->offset;
    out->size = in->size;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkBufferMemoryBarrier2_host *convert_VkBufferMemoryBarrier2_array_win32_to_host(struct conversion_context *ctx, const VkBufferMemoryBarrier2 *in, uint32_t count)
{
    VkBufferMemoryBarrier2_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkBufferMemoryBarrier2_win32_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkImageMemoryBarrier2_win32_to_host(const VkImageMemoryBarrier2 *in, VkImageMemoryBarrier2_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->srcStageMask = in->srcStageMask;
    out->srcAccessMask = in->srcAccessMask;
    out->dstStageMask = in->dstStageMask;
    out->dstAccessMask = in->dstAccessMask;
    out->oldLayout = in->oldLayout;
    out->newLayout = in->newLayout;
    out->srcQueueFamilyIndex = in->srcQueueFamilyIndex;
    out->dstQueueFamilyIndex = in->dstQueueFamilyIndex;
    out->image = in->image;
    out->subresourceRange = in->subresourceRange;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkImageMemoryBarrier2_host *convert_VkImageMemoryBarrier2_array_win32_to_host(struct conversion_context *ctx, const VkImageMemoryBarrier2 *in, uint32_t count)
{
    VkImageMemoryBarrier2_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkImageMemoryBarrier2_win32_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkDependencyInfo_win32_to_host(struct conversion_context *ctx, const VkDependencyInfo *in, VkDependencyInfo_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->dependencyFlags = in->dependencyFlags;
    out->memoryBarrierCount = in->memoryBarrierCount;
    out->pMemoryBarriers = in->pMemoryBarriers;
    out->bufferMemoryBarrierCount = in->bufferMemoryBarrierCount;
    out->pBufferMemoryBarriers = convert_VkBufferMemoryBarrier2_array_win32_to_host(ctx, in->pBufferMemoryBarriers, in->bufferMemoryBarrierCount);
    out->imageMemoryBarrierCount = in->imageMemoryBarrierCount;
    out->pImageMemoryBarriers = convert_VkImageMemoryBarrier2_array_win32_to_host(ctx, in->pImageMemoryBarriers, in->imageMemoryBarrierCount);
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkDescriptorImageInfo_win32_to_host(const VkDescriptorImageInfo *in, VkDescriptorImageInfo_host *out)
{
    if (!in) return;

    out->sampler = in->sampler;
    out->imageView = in->imageView;
    out->imageLayout = in->imageLayout;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkDescriptorImageInfo_host *convert_VkDescriptorImageInfo_array_win32_to_host(struct conversion_context *ctx, const VkDescriptorImageInfo *in, uint32_t count)
{
    VkDescriptorImageInfo_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkDescriptorImageInfo_win32_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkDescriptorBufferInfo_win32_to_host(const VkDescriptorBufferInfo *in, VkDescriptorBufferInfo_host *out)
{
    if (!in) return;

    out->buffer = in->buffer;
    out->offset = in->offset;
    out->range = in->range;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkDescriptorBufferInfo_host *convert_VkDescriptorBufferInfo_array_win32_to_host(struct conversion_context *ctx, const VkDescriptorBufferInfo *in, uint32_t count)
{
    VkDescriptorBufferInfo_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkDescriptorBufferInfo_win32_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkWriteDescriptorSet_win32_to_host(struct conversion_context *ctx, const VkWriteDescriptorSet *in, VkWriteDescriptorSet_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->dstSet = in->dstSet;
    out->dstBinding = in->dstBinding;
    out->dstArrayElement = in->dstArrayElement;
    out->descriptorCount = in->descriptorCount;
    out->descriptorType = in->descriptorType;
    out->pImageInfo = convert_VkDescriptorImageInfo_array_win32_to_host(ctx, in->pImageInfo, in->descriptorCount);
    out->pBufferInfo = convert_VkDescriptorBufferInfo_array_win32_to_host(ctx, in->pBufferInfo, in->descriptorCount);
    out->pTexelBufferView = in->pTexelBufferView;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkWriteDescriptorSet_host *convert_VkWriteDescriptorSet_array_win32_to_host(struct conversion_context *ctx, const VkWriteDescriptorSet *in, uint32_t count)
{
    VkWriteDescriptorSet_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkWriteDescriptorSet_win32_to_host(ctx, &in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkResolveImageInfo2_win32_to_host(const VkResolveImageInfo2 *in, VkResolveImageInfo2_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->srcImage = in->srcImage;
    out->srcImageLayout = in->srcImageLayout;
    out->dstImage = in->dstImage;
    out->dstImageLayout = in->dstImageLayout;
    out->regionCount = in->regionCount;
    out->pRegions = in->pRegions;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkPerformanceMarkerInfoINTEL_win32_to_host(const VkPerformanceMarkerInfoINTEL *in, VkPerformanceMarkerInfoINTEL_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->marker = in->marker;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkPerformanceOverrideInfoINTEL_win32_to_host(const VkPerformanceOverrideInfoINTEL *in, VkPerformanceOverrideInfoINTEL_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->type = in->type;
    out->enable = in->enable;
    out->parameter = in->parameter;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkStridedDeviceAddressRegionKHR_win32_to_host(const VkStridedDeviceAddressRegionKHR *in, VkStridedDeviceAddressRegionKHR_host *out)
{
    if (!in) return;

    out->deviceAddress = in->deviceAddress;
    out->stride = in->stride;
    out->size = in->size;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkDependencyInfo_host *convert_VkDependencyInfo_array_win32_to_host(struct conversion_context *ctx, const VkDependencyInfo *in, uint32_t count)
{
    VkDependencyInfo_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkDependencyInfo_win32_to_host(ctx, &in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkAccelerationStructureCreateInfoKHR_win32_to_host(const VkAccelerationStructureCreateInfoKHR *in, VkAccelerationStructureCreateInfoKHR_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->createFlags = in->createFlags;
    out->buffer = in->buffer;
    out->offset = in->offset;
    out->size = in->size;
    out->type = in->type;
    out->deviceAddress = in->deviceAddress;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkAccelerationStructureCreateInfoNV_win32_to_host(struct conversion_context *ctx, const VkAccelerationStructureCreateInfoNV *in, VkAccelerationStructureCreateInfoNV_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->compactedSize = in->compactedSize;
    convert_VkAccelerationStructureInfoNV_win32_to_host(ctx, &in->info, &out->info);
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkBufferCreateInfo_win32_to_host(const VkBufferCreateInfo *in, VkBufferCreateInfo_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->flags = in->flags;
    out->size = in->size;
    out->usage = in->usage;
    out->sharingMode = in->sharingMode;
    out->queueFamilyIndexCount = in->queueFamilyIndexCount;
    out->pQueueFamilyIndices = in->pQueueFamilyIndices;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkBufferViewCreateInfo_win32_to_host(const VkBufferViewCreateInfo *in, VkBufferViewCreateInfo_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->flags = in->flags;
    out->buffer = in->buffer;
    out->format = in->format;
    out->offset = in->offset;
    out->range = in->range;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkPipelineShaderStageCreateInfo_win32_to_host(const VkPipelineShaderStageCreateInfo *in, VkPipelineShaderStageCreateInfo_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->flags = in->flags;
    out->stage = in->stage;
    out->module = in->module;
    out->pName = in->pName;
    out->pSpecializationInfo = in->pSpecializationInfo;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkComputePipelineCreateInfo_win32_to_host(const VkComputePipelineCreateInfo *in, VkComputePipelineCreateInfo_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->flags = in->flags;
    convert_VkPipelineShaderStageCreateInfo_win32_to_host(&in->stage, &out->stage);
    out->layout = in->layout;
    out->basePipelineHandle = in->basePipelineHandle;
    out->basePipelineIndex = in->basePipelineIndex;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkComputePipelineCreateInfo_host *convert_VkComputePipelineCreateInfo_array_win32_to_host(struct conversion_context *ctx, const VkComputePipelineCreateInfo *in, uint32_t count)
{
    VkComputePipelineCreateInfo_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkComputePipelineCreateInfo_win32_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkCuFunctionCreateInfoNVX_win32_to_host(const VkCuFunctionCreateInfoNVX *in, VkCuFunctionCreateInfoNVX_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->module = in->module;
    out->pName = in->pName;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkDescriptorUpdateTemplateCreateInfo_win32_to_host(const VkDescriptorUpdateTemplateCreateInfo *in, VkDescriptorUpdateTemplateCreateInfo_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->flags = in->flags;
    out->descriptorUpdateEntryCount = in->descriptorUpdateEntryCount;
    out->pDescriptorUpdateEntries = in->pDescriptorUpdateEntries;
    out->templateType = in->templateType;
    out->descriptorSetLayout = in->descriptorSetLayout;
    out->pipelineBindPoint = in->pipelineBindPoint;
    out->pipelineLayout = in->pipelineLayout;
    out->set = in->set;
}
#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)
static inline VkPhysicalDevice *convert_VkPhysicalDevice_array_win64_to_host(struct conversion_context *ctx, const VkPhysicalDevice *in, uint32_t count)
{
    VkPhysicalDevice *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        out[i] = wine_phys_dev_from_handle(in[i])->phys_dev;
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkPhysicalDevice *convert_VkPhysicalDevice_array_win32_to_host(struct conversion_context *ctx, const VkPhysicalDevice *in, uint32_t count)
{
    VkPhysicalDevice *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        out[i] = wine_phys_dev_from_handle(in[i])->phys_dev;
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)
static inline void convert_VkDeviceCreateInfo_win64_to_host(struct conversion_context *ctx, const VkDeviceCreateInfo *in, VkDeviceCreateInfo *out)
{
    const VkBaseInStructure *in_header;
    VkBaseOutStructure *out_header = (void *)out;

    if (!in) return;

    out->sType = in->sType;
    out->pNext = NULL;
    out->flags = in->flags;
    out->queueCreateInfoCount = in->queueCreateInfoCount;
    out->pQueueCreateInfos = in->pQueueCreateInfos;
    out->enabledLayerCount = in->enabledLayerCount;
    out->ppEnabledLayerNames = in->ppEnabledLayerNames;
    out->enabledExtensionCount = in->enabledExtensionCount;
    out->ppEnabledExtensionNames = in->ppEnabledExtensionNames;
    out->pEnabledFeatures = in->pEnabledFeatures;

    for (in_header = (void *)in->pNext; in_header; in_header = (void *)in_header->pNext)
    {
        switch (in_header->sType)
        {
        case VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO:
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV:
        {
            VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV *in_ext = (const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->deviceGeneratedCommands = in_ext->deviceGeneratedCommands;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_DEVICE_PRIVATE_DATA_CREATE_INFO:
        {
            VkDevicePrivateDataCreateInfo *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkDevicePrivateDataCreateInfo *in_ext = (const VkDevicePrivateDataCreateInfo *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_DEVICE_PRIVATE_DATA_CREATE_INFO;
            out_ext->pNext = NULL;
            out_ext->privateDataSlotRequestCount = in_ext->privateDataSlotRequestCount;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES:
        {
            VkPhysicalDevicePrivateDataFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDevicePrivateDataFeatures *in_ext = (const VkPhysicalDevicePrivateDataFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES;
            out_ext->pNext = NULL;
            out_ext->privateData = in_ext->privateData;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2:
        {
            VkPhysicalDeviceFeatures2 *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceFeatures2 *in_ext = (const VkPhysicalDeviceFeatures2 *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2;
            out_ext->pNext = NULL;
            out_ext->features = in_ext->features;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES:
        {
            VkPhysicalDeviceVariablePointersFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceVariablePointersFeatures *in_ext = (const VkPhysicalDeviceVariablePointersFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES;
            out_ext->pNext = NULL;
            out_ext->variablePointersStorageBuffer = in_ext->variablePointersStorageBuffer;
            out_ext->variablePointers = in_ext->variablePointers;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES:
        {
            VkPhysicalDeviceMultiviewFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceMultiviewFeatures *in_ext = (const VkPhysicalDeviceMultiviewFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES;
            out_ext->pNext = NULL;
            out_ext->multiview = in_ext->multiview;
            out_ext->multiviewGeometryShader = in_ext->multiviewGeometryShader;
            out_ext->multiviewTessellationShader = in_ext->multiviewTessellationShader;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO:
        {
            VkDeviceGroupDeviceCreateInfo *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkDeviceGroupDeviceCreateInfo *in_ext = (const VkDeviceGroupDeviceCreateInfo *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO;
            out_ext->pNext = NULL;
            out_ext->physicalDeviceCount = in_ext->physicalDeviceCount;
            out_ext->pPhysicalDevices = convert_VkPhysicalDevice_array_win64_to_host(ctx, in_ext->pPhysicalDevices, in_ext->physicalDeviceCount);
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR:
        {
            VkPhysicalDevicePresentIdFeaturesKHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDevicePresentIdFeaturesKHR *in_ext = (const VkPhysicalDevicePresentIdFeaturesKHR *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR;
            out_ext->pNext = NULL;
            out_ext->presentId = in_ext->presentId;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR:
        {
            VkPhysicalDevicePresentWaitFeaturesKHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDevicePresentWaitFeaturesKHR *in_ext = (const VkPhysicalDevicePresentWaitFeaturesKHR *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR;
            out_ext->pNext = NULL;
            out_ext->presentWait = in_ext->presentWait;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES:
        {
            VkPhysicalDevice16BitStorageFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDevice16BitStorageFeatures *in_ext = (const VkPhysicalDevice16BitStorageFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES;
            out_ext->pNext = NULL;
            out_ext->storageBuffer16BitAccess = in_ext->storageBuffer16BitAccess;
            out_ext->uniformAndStorageBuffer16BitAccess = in_ext->uniformAndStorageBuffer16BitAccess;
            out_ext->storagePushConstant16 = in_ext->storagePushConstant16;
            out_ext->storageInputOutput16 = in_ext->storageInputOutput16;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES:
        {
            VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures *in_ext = (const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES;
            out_ext->pNext = NULL;
            out_ext->shaderSubgroupExtendedTypes = in_ext->shaderSubgroupExtendedTypes;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES:
        {
            VkPhysicalDeviceSamplerYcbcrConversionFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceSamplerYcbcrConversionFeatures *in_ext = (const VkPhysicalDeviceSamplerYcbcrConversionFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES;
            out_ext->pNext = NULL;
            out_ext->samplerYcbcrConversion = in_ext->samplerYcbcrConversion;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES:
        {
            VkPhysicalDeviceProtectedMemoryFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceProtectedMemoryFeatures *in_ext = (const VkPhysicalDeviceProtectedMemoryFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES;
            out_ext->pNext = NULL;
            out_ext->protectedMemory = in_ext->protectedMemory;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT:
        {
            VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT *in_ext = (const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->advancedBlendCoherentOperations = in_ext->advancedBlendCoherentOperations;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT:
        {
            VkPhysicalDeviceMultiDrawFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceMultiDrawFeaturesEXT *in_ext = (const VkPhysicalDeviceMultiDrawFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->multiDraw = in_ext->multiDraw;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES:
        {
            VkPhysicalDeviceInlineUniformBlockFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceInlineUniformBlockFeatures *in_ext = (const VkPhysicalDeviceInlineUniformBlockFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES;
            out_ext->pNext = NULL;
            out_ext->inlineUniformBlock = in_ext->inlineUniformBlock;
            out_ext->descriptorBindingInlineUniformBlockUpdateAfterBind = in_ext->descriptorBindingInlineUniformBlockUpdateAfterBind;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES:
        {
            VkPhysicalDeviceMaintenance4Features *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceMaintenance4Features *in_ext = (const VkPhysicalDeviceMaintenance4Features *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES;
            out_ext->pNext = NULL;
            out_ext->maintenance4 = in_ext->maintenance4;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES:
        {
            VkPhysicalDeviceShaderDrawParametersFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderDrawParametersFeatures *in_ext = (const VkPhysicalDeviceShaderDrawParametersFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES;
            out_ext->pNext = NULL;
            out_ext->shaderDrawParameters = in_ext->shaderDrawParameters;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES:
        {
            VkPhysicalDeviceShaderFloat16Int8Features *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderFloat16Int8Features *in_ext = (const VkPhysicalDeviceShaderFloat16Int8Features *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES;
            out_ext->pNext = NULL;
            out_ext->shaderFloat16 = in_ext->shaderFloat16;
            out_ext->shaderInt8 = in_ext->shaderInt8;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES:
        {
            VkPhysicalDeviceHostQueryResetFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceHostQueryResetFeatures *in_ext = (const VkPhysicalDeviceHostQueryResetFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES;
            out_ext->pNext = NULL;
            out_ext->hostQueryReset = in_ext->hostQueryReset;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES_KHR:
        {
            VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR *in_ext = (const VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES_KHR;
            out_ext->pNext = NULL;
            out_ext->globalPriorityQuery = in_ext->globalPriorityQuery;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES:
        {
            VkPhysicalDeviceDescriptorIndexingFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceDescriptorIndexingFeatures *in_ext = (const VkPhysicalDeviceDescriptorIndexingFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES;
            out_ext->pNext = NULL;
            out_ext->shaderInputAttachmentArrayDynamicIndexing = in_ext->shaderInputAttachmentArrayDynamicIndexing;
            out_ext->shaderUniformTexelBufferArrayDynamicIndexing = in_ext->shaderUniformTexelBufferArrayDynamicIndexing;
            out_ext->shaderStorageTexelBufferArrayDynamicIndexing = in_ext->shaderStorageTexelBufferArrayDynamicIndexing;
            out_ext->shaderUniformBufferArrayNonUniformIndexing = in_ext->shaderUniformBufferArrayNonUniformIndexing;
            out_ext->shaderSampledImageArrayNonUniformIndexing = in_ext->shaderSampledImageArrayNonUniformIndexing;
            out_ext->shaderStorageBufferArrayNonUniformIndexing = in_ext->shaderStorageBufferArrayNonUniformIndexing;
            out_ext->shaderStorageImageArrayNonUniformIndexing = in_ext->shaderStorageImageArrayNonUniformIndexing;
            out_ext->shaderInputAttachmentArrayNonUniformIndexing = in_ext->shaderInputAttachmentArrayNonUniformIndexing;
            out_ext->shaderUniformTexelBufferArrayNonUniformIndexing = in_ext->shaderUniformTexelBufferArrayNonUniformIndexing;
            out_ext->shaderStorageTexelBufferArrayNonUniformIndexing = in_ext->shaderStorageTexelBufferArrayNonUniformIndexing;
            out_ext->descriptorBindingUniformBufferUpdateAfterBind = in_ext->descriptorBindingUniformBufferUpdateAfterBind;
            out_ext->descriptorBindingSampledImageUpdateAfterBind = in_ext->descriptorBindingSampledImageUpdateAfterBind;
            out_ext->descriptorBindingStorageImageUpdateAfterBind = in_ext->descriptorBindingStorageImageUpdateAfterBind;
            out_ext->descriptorBindingStorageBufferUpdateAfterBind = in_ext->descriptorBindingStorageBufferUpdateAfterBind;
            out_ext->descriptorBindingUniformTexelBufferUpdateAfterBind = in_ext->descriptorBindingUniformTexelBufferUpdateAfterBind;
            out_ext->descriptorBindingStorageTexelBufferUpdateAfterBind = in_ext->descriptorBindingStorageTexelBufferUpdateAfterBind;
            out_ext->descriptorBindingUpdateUnusedWhilePending = in_ext->descriptorBindingUpdateUnusedWhilePending;
            out_ext->descriptorBindingPartiallyBound = in_ext->descriptorBindingPartiallyBound;
            out_ext->descriptorBindingVariableDescriptorCount = in_ext->descriptorBindingVariableDescriptorCount;
            out_ext->runtimeDescriptorArray = in_ext->runtimeDescriptorArray;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES:
        {
            VkPhysicalDeviceTimelineSemaphoreFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceTimelineSemaphoreFeatures *in_ext = (const VkPhysicalDeviceTimelineSemaphoreFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES;
            out_ext->pNext = NULL;
            out_ext->timelineSemaphore = in_ext->timelineSemaphore;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES:
        {
            VkPhysicalDevice8BitStorageFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDevice8BitStorageFeatures *in_ext = (const VkPhysicalDevice8BitStorageFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES;
            out_ext->pNext = NULL;
            out_ext->storageBuffer8BitAccess = in_ext->storageBuffer8BitAccess;
            out_ext->uniformAndStorageBuffer8BitAccess = in_ext->uniformAndStorageBuffer8BitAccess;
            out_ext->storagePushConstant8 = in_ext->storagePushConstant8;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT:
        {
            VkPhysicalDeviceConditionalRenderingFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceConditionalRenderingFeaturesEXT *in_ext = (const VkPhysicalDeviceConditionalRenderingFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->conditionalRendering = in_ext->conditionalRendering;
            out_ext->inheritedConditionalRendering = in_ext->inheritedConditionalRendering;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES:
        {
            VkPhysicalDeviceVulkanMemoryModelFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceVulkanMemoryModelFeatures *in_ext = (const VkPhysicalDeviceVulkanMemoryModelFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES;
            out_ext->pNext = NULL;
            out_ext->vulkanMemoryModel = in_ext->vulkanMemoryModel;
            out_ext->vulkanMemoryModelDeviceScope = in_ext->vulkanMemoryModelDeviceScope;
            out_ext->vulkanMemoryModelAvailabilityVisibilityChains = in_ext->vulkanMemoryModelAvailabilityVisibilityChains;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES:
        {
            VkPhysicalDeviceShaderAtomicInt64Features *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderAtomicInt64Features *in_ext = (const VkPhysicalDeviceShaderAtomicInt64Features *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES;
            out_ext->pNext = NULL;
            out_ext->shaderBufferInt64Atomics = in_ext->shaderBufferInt64Atomics;
            out_ext->shaderSharedInt64Atomics = in_ext->shaderSharedInt64Atomics;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT:
        {
            VkPhysicalDeviceShaderAtomicFloatFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT *in_ext = (const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->shaderBufferFloat32Atomics = in_ext->shaderBufferFloat32Atomics;
            out_ext->shaderBufferFloat32AtomicAdd = in_ext->shaderBufferFloat32AtomicAdd;
            out_ext->shaderBufferFloat64Atomics = in_ext->shaderBufferFloat64Atomics;
            out_ext->shaderBufferFloat64AtomicAdd = in_ext->shaderBufferFloat64AtomicAdd;
            out_ext->shaderSharedFloat32Atomics = in_ext->shaderSharedFloat32Atomics;
            out_ext->shaderSharedFloat32AtomicAdd = in_ext->shaderSharedFloat32AtomicAdd;
            out_ext->shaderSharedFloat64Atomics = in_ext->shaderSharedFloat64Atomics;
            out_ext->shaderSharedFloat64AtomicAdd = in_ext->shaderSharedFloat64AtomicAdd;
            out_ext->shaderImageFloat32Atomics = in_ext->shaderImageFloat32Atomics;
            out_ext->shaderImageFloat32AtomicAdd = in_ext->shaderImageFloat32AtomicAdd;
            out_ext->sparseImageFloat32Atomics = in_ext->sparseImageFloat32Atomics;
            out_ext->sparseImageFloat32AtomicAdd = in_ext->sparseImageFloat32AtomicAdd;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT:
        {
            VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT *in_ext = (const VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->shaderBufferFloat16Atomics = in_ext->shaderBufferFloat16Atomics;
            out_ext->shaderBufferFloat16AtomicAdd = in_ext->shaderBufferFloat16AtomicAdd;
            out_ext->shaderBufferFloat16AtomicMinMax = in_ext->shaderBufferFloat16AtomicMinMax;
            out_ext->shaderBufferFloat32AtomicMinMax = in_ext->shaderBufferFloat32AtomicMinMax;
            out_ext->shaderBufferFloat64AtomicMinMax = in_ext->shaderBufferFloat64AtomicMinMax;
            out_ext->shaderSharedFloat16Atomics = in_ext->shaderSharedFloat16Atomics;
            out_ext->shaderSharedFloat16AtomicAdd = in_ext->shaderSharedFloat16AtomicAdd;
            out_ext->shaderSharedFloat16AtomicMinMax = in_ext->shaderSharedFloat16AtomicMinMax;
            out_ext->shaderSharedFloat32AtomicMinMax = in_ext->shaderSharedFloat32AtomicMinMax;
            out_ext->shaderSharedFloat64AtomicMinMax = in_ext->shaderSharedFloat64AtomicMinMax;
            out_ext->shaderImageFloat32AtomicMinMax = in_ext->shaderImageFloat32AtomicMinMax;
            out_ext->sparseImageFloat32AtomicMinMax = in_ext->sparseImageFloat32AtomicMinMax;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT:
        {
            VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT *in_ext = (const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->vertexAttributeInstanceRateDivisor = in_ext->vertexAttributeInstanceRateDivisor;
            out_ext->vertexAttributeInstanceRateZeroDivisor = in_ext->vertexAttributeInstanceRateZeroDivisor;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT:
        {
            VkPhysicalDeviceASTCDecodeFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceASTCDecodeFeaturesEXT *in_ext = (const VkPhysicalDeviceASTCDecodeFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->decodeModeSharedExponent = in_ext->decodeModeSharedExponent;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT:
        {
            VkPhysicalDeviceTransformFeedbackFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceTransformFeedbackFeaturesEXT *in_ext = (const VkPhysicalDeviceTransformFeedbackFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->transformFeedback = in_ext->transformFeedback;
            out_ext->geometryStreams = in_ext->geometryStreams;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV:
        {
            VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *in_ext = (const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->representativeFragmentTest = in_ext->representativeFragmentTest;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV:
        {
            VkPhysicalDeviceExclusiveScissorFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceExclusiveScissorFeaturesNV *in_ext = (const VkPhysicalDeviceExclusiveScissorFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->exclusiveScissor = in_ext->exclusiveScissor;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV:
        {
            VkPhysicalDeviceCornerSampledImageFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceCornerSampledImageFeaturesNV *in_ext = (const VkPhysicalDeviceCornerSampledImageFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->cornerSampledImage = in_ext->cornerSampledImage;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV:
        {
            VkPhysicalDeviceComputeShaderDerivativesFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV *in_ext = (const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->computeDerivativeGroupQuads = in_ext->computeDerivativeGroupQuads;
            out_ext->computeDerivativeGroupLinear = in_ext->computeDerivativeGroupLinear;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV:
        {
            VkPhysicalDeviceShaderImageFootprintFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderImageFootprintFeaturesNV *in_ext = (const VkPhysicalDeviceShaderImageFootprintFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->imageFootprint = in_ext->imageFootprint;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV:
        {
            VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV *in_ext = (const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->dedicatedAllocationImageAliasing = in_ext->dedicatedAllocationImageAliasing;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV:
        {
            VkPhysicalDeviceCopyMemoryIndirectFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceCopyMemoryIndirectFeaturesNV *in_ext = (const VkPhysicalDeviceCopyMemoryIndirectFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->indirectCopy = in_ext->indirectCopy;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_NV:
        {
            VkPhysicalDeviceMemoryDecompressionFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceMemoryDecompressionFeaturesNV *in_ext = (const VkPhysicalDeviceMemoryDecompressionFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->memoryDecompression = in_ext->memoryDecompression;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV:
        {
            VkPhysicalDeviceShadingRateImageFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShadingRateImageFeaturesNV *in_ext = (const VkPhysicalDeviceShadingRateImageFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->shadingRateImage = in_ext->shadingRateImage;
            out_ext->shadingRateCoarseSampleOrder = in_ext->shadingRateCoarseSampleOrder;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI:
        {
            VkPhysicalDeviceInvocationMaskFeaturesHUAWEI *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceInvocationMaskFeaturesHUAWEI *in_ext = (const VkPhysicalDeviceInvocationMaskFeaturesHUAWEI *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI;
            out_ext->pNext = NULL;
            out_ext->invocationMask = in_ext->invocationMask;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV:
        {
            VkPhysicalDeviceMeshShaderFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceMeshShaderFeaturesNV *in_ext = (const VkPhysicalDeviceMeshShaderFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->taskShader = in_ext->taskShader;
            out_ext->meshShader = in_ext->meshShader;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT:
        {
            VkPhysicalDeviceMeshShaderFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceMeshShaderFeaturesEXT *in_ext = (const VkPhysicalDeviceMeshShaderFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->taskShader = in_ext->taskShader;
            out_ext->meshShader = in_ext->meshShader;
            out_ext->multiviewMeshShader = in_ext->multiviewMeshShader;
            out_ext->primitiveFragmentShadingRateMeshShader = in_ext->primitiveFragmentShadingRateMeshShader;
            out_ext->meshShaderQueries = in_ext->meshShaderQueries;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR:
        {
            VkPhysicalDeviceAccelerationStructureFeaturesKHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceAccelerationStructureFeaturesKHR *in_ext = (const VkPhysicalDeviceAccelerationStructureFeaturesKHR *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR;
            out_ext->pNext = NULL;
            out_ext->accelerationStructure = in_ext->accelerationStructure;
            out_ext->accelerationStructureCaptureReplay = in_ext->accelerationStructureCaptureReplay;
            out_ext->accelerationStructureIndirectBuild = in_ext->accelerationStructureIndirectBuild;
            out_ext->accelerationStructureHostCommands = in_ext->accelerationStructureHostCommands;
            out_ext->descriptorBindingAccelerationStructureUpdateAfterBind = in_ext->descriptorBindingAccelerationStructureUpdateAfterBind;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR:
        {
            VkPhysicalDeviceRayTracingPipelineFeaturesKHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceRayTracingPipelineFeaturesKHR *in_ext = (const VkPhysicalDeviceRayTracingPipelineFeaturesKHR *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR;
            out_ext->pNext = NULL;
            out_ext->rayTracingPipeline = in_ext->rayTracingPipeline;
            out_ext->rayTracingPipelineShaderGroupHandleCaptureReplay = in_ext->rayTracingPipelineShaderGroupHandleCaptureReplay;
            out_ext->rayTracingPipelineShaderGroupHandleCaptureReplayMixed = in_ext->rayTracingPipelineShaderGroupHandleCaptureReplayMixed;
            out_ext->rayTracingPipelineTraceRaysIndirect = in_ext->rayTracingPipelineTraceRaysIndirect;
            out_ext->rayTraversalPrimitiveCulling = in_ext->rayTraversalPrimitiveCulling;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR:
        {
            VkPhysicalDeviceRayQueryFeaturesKHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceRayQueryFeaturesKHR *in_ext = (const VkPhysicalDeviceRayQueryFeaturesKHR *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR;
            out_ext->pNext = NULL;
            out_ext->rayQuery = in_ext->rayQuery;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR:
        {
            VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR *in_ext = (const VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR;
            out_ext->pNext = NULL;
            out_ext->rayTracingMaintenance1 = in_ext->rayTracingMaintenance1;
            out_ext->rayTracingPipelineTraceRaysIndirect2 = in_ext->rayTracingPipelineTraceRaysIndirect2;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD:
        {
            VkDeviceMemoryOverallocationCreateInfoAMD *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkDeviceMemoryOverallocationCreateInfoAMD *in_ext = (const VkDeviceMemoryOverallocationCreateInfoAMD *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD;
            out_ext->pNext = NULL;
            out_ext->overallocationBehavior = in_ext->overallocationBehavior;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT:
        {
            VkPhysicalDeviceFragmentDensityMapFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceFragmentDensityMapFeaturesEXT *in_ext = (const VkPhysicalDeviceFragmentDensityMapFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->fragmentDensityMap = in_ext->fragmentDensityMap;
            out_ext->fragmentDensityMapDynamic = in_ext->fragmentDensityMapDynamic;
            out_ext->fragmentDensityMapNonSubsampledImages = in_ext->fragmentDensityMapNonSubsampledImages;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT:
        {
            VkPhysicalDeviceFragmentDensityMap2FeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT *in_ext = (const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->fragmentDensityMapDeferred = in_ext->fragmentDensityMapDeferred;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_QCOM:
        {
            VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM *in_ext = (const VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_QCOM;
            out_ext->pNext = NULL;
            out_ext->fragmentDensityMapOffset = in_ext->fragmentDensityMapOffset;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES:
        {
            VkPhysicalDeviceScalarBlockLayoutFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceScalarBlockLayoutFeatures *in_ext = (const VkPhysicalDeviceScalarBlockLayoutFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES;
            out_ext->pNext = NULL;
            out_ext->scalarBlockLayout = in_ext->scalarBlockLayout;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES:
        {
            VkPhysicalDeviceUniformBufferStandardLayoutFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceUniformBufferStandardLayoutFeatures *in_ext = (const VkPhysicalDeviceUniformBufferStandardLayoutFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES;
            out_ext->pNext = NULL;
            out_ext->uniformBufferStandardLayout = in_ext->uniformBufferStandardLayout;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT:
        {
            VkPhysicalDeviceDepthClipEnableFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceDepthClipEnableFeaturesEXT *in_ext = (const VkPhysicalDeviceDepthClipEnableFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->depthClipEnable = in_ext->depthClipEnable;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT:
        {
            VkPhysicalDeviceMemoryPriorityFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceMemoryPriorityFeaturesEXT *in_ext = (const VkPhysicalDeviceMemoryPriorityFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->memoryPriority = in_ext->memoryPriority;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT:
        {
            VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT *in_ext = (const VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->pageableDeviceLocalMemory = in_ext->pageableDeviceLocalMemory;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES:
        {
            VkPhysicalDeviceBufferDeviceAddressFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceBufferDeviceAddressFeatures *in_ext = (const VkPhysicalDeviceBufferDeviceAddressFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES;
            out_ext->pNext = NULL;
            out_ext->bufferDeviceAddress = in_ext->bufferDeviceAddress;
            out_ext->bufferDeviceAddressCaptureReplay = in_ext->bufferDeviceAddressCaptureReplay;
            out_ext->bufferDeviceAddressMultiDevice = in_ext->bufferDeviceAddressMultiDevice;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT:
        {
            VkPhysicalDeviceBufferDeviceAddressFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT *in_ext = (const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->bufferDeviceAddress = in_ext->bufferDeviceAddress;
            out_ext->bufferDeviceAddressCaptureReplay = in_ext->bufferDeviceAddressCaptureReplay;
            out_ext->bufferDeviceAddressMultiDevice = in_ext->bufferDeviceAddressMultiDevice;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES:
        {
            VkPhysicalDeviceImagelessFramebufferFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceImagelessFramebufferFeatures *in_ext = (const VkPhysicalDeviceImagelessFramebufferFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES;
            out_ext->pNext = NULL;
            out_ext->imagelessFramebuffer = in_ext->imagelessFramebuffer;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES:
        {
            VkPhysicalDeviceTextureCompressionASTCHDRFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceTextureCompressionASTCHDRFeatures *in_ext = (const VkPhysicalDeviceTextureCompressionASTCHDRFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES;
            out_ext->pNext = NULL;
            out_ext->textureCompressionASTC_HDR = in_ext->textureCompressionASTC_HDR;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV:
        {
            VkPhysicalDeviceCooperativeMatrixFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceCooperativeMatrixFeaturesNV *in_ext = (const VkPhysicalDeviceCooperativeMatrixFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->cooperativeMatrix = in_ext->cooperativeMatrix;
            out_ext->cooperativeMatrixRobustBufferAccess = in_ext->cooperativeMatrixRobustBufferAccess;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT:
        {
            VkPhysicalDeviceYcbcrImageArraysFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT *in_ext = (const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->ycbcrImageArrays = in_ext->ycbcrImageArrays;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV:
        {
            VkPhysicalDevicePresentBarrierFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDevicePresentBarrierFeaturesNV *in_ext = (const VkPhysicalDevicePresentBarrierFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->presentBarrier = in_ext->presentBarrier;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR:
        {
            VkPhysicalDevicePerformanceQueryFeaturesKHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDevicePerformanceQueryFeaturesKHR *in_ext = (const VkPhysicalDevicePerformanceQueryFeaturesKHR *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR;
            out_ext->pNext = NULL;
            out_ext->performanceCounterQueryPools = in_ext->performanceCounterQueryPools;
            out_ext->performanceCounterMultipleQueryPools = in_ext->performanceCounterMultipleQueryPools;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV:
        {
            VkPhysicalDeviceCoverageReductionModeFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceCoverageReductionModeFeaturesNV *in_ext = (const VkPhysicalDeviceCoverageReductionModeFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->coverageReductionMode = in_ext->coverageReductionMode;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL:
        {
            VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL *in_ext = (const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL;
            out_ext->pNext = NULL;
            out_ext->shaderIntegerFunctions2 = in_ext->shaderIntegerFunctions2;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR:
        {
            VkPhysicalDeviceShaderClockFeaturesKHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderClockFeaturesKHR *in_ext = (const VkPhysicalDeviceShaderClockFeaturesKHR *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR;
            out_ext->pNext = NULL;
            out_ext->shaderSubgroupClock = in_ext->shaderSubgroupClock;
            out_ext->shaderDeviceClock = in_ext->shaderDeviceClock;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT:
        {
            VkPhysicalDeviceIndexTypeUint8FeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceIndexTypeUint8FeaturesEXT *in_ext = (const VkPhysicalDeviceIndexTypeUint8FeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->indexTypeUint8 = in_ext->indexTypeUint8;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV:
        {
            VkPhysicalDeviceShaderSMBuiltinsFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV *in_ext = (const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->shaderSMBuiltins = in_ext->shaderSMBuiltins;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT:
        {
            VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT *in_ext = (const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->fragmentShaderSampleInterlock = in_ext->fragmentShaderSampleInterlock;
            out_ext->fragmentShaderPixelInterlock = in_ext->fragmentShaderPixelInterlock;
            out_ext->fragmentShaderShadingRateInterlock = in_ext->fragmentShaderShadingRateInterlock;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES:
        {
            VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures *in_ext = (const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES;
            out_ext->pNext = NULL;
            out_ext->separateDepthStencilLayouts = in_ext->separateDepthStencilLayouts;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT:
        {
            VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT *in_ext = (const VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->primitiveTopologyListRestart = in_ext->primitiveTopologyListRestart;
            out_ext->primitiveTopologyPatchListRestart = in_ext->primitiveTopologyPatchListRestart;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR:
        {
            VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR *in_ext = (const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR;
            out_ext->pNext = NULL;
            out_ext->pipelineExecutableInfo = in_ext->pipelineExecutableInfo;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES:
        {
            VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures *in_ext = (const VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES;
            out_ext->pNext = NULL;
            out_ext->shaderDemoteToHelperInvocation = in_ext->shaderDemoteToHelperInvocation;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT:
        {
            VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT *in_ext = (const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->texelBufferAlignment = in_ext->texelBufferAlignment;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES:
        {
            VkPhysicalDeviceSubgroupSizeControlFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceSubgroupSizeControlFeatures *in_ext = (const VkPhysicalDeviceSubgroupSizeControlFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES;
            out_ext->pNext = NULL;
            out_ext->subgroupSizeControl = in_ext->subgroupSizeControl;
            out_ext->computeFullSubgroups = in_ext->computeFullSubgroups;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT:
        {
            VkPhysicalDeviceLineRasterizationFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceLineRasterizationFeaturesEXT *in_ext = (const VkPhysicalDeviceLineRasterizationFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->rectangularLines = in_ext->rectangularLines;
            out_ext->bresenhamLines = in_ext->bresenhamLines;
            out_ext->smoothLines = in_ext->smoothLines;
            out_ext->stippledRectangularLines = in_ext->stippledRectangularLines;
            out_ext->stippledBresenhamLines = in_ext->stippledBresenhamLines;
            out_ext->stippledSmoothLines = in_ext->stippledSmoothLines;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES:
        {
            VkPhysicalDevicePipelineCreationCacheControlFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDevicePipelineCreationCacheControlFeatures *in_ext = (const VkPhysicalDevicePipelineCreationCacheControlFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES;
            out_ext->pNext = NULL;
            out_ext->pipelineCreationCacheControl = in_ext->pipelineCreationCacheControl;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES:
        {
            VkPhysicalDeviceVulkan11Features *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceVulkan11Features *in_ext = (const VkPhysicalDeviceVulkan11Features *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES;
            out_ext->pNext = NULL;
            out_ext->storageBuffer16BitAccess = in_ext->storageBuffer16BitAccess;
            out_ext->uniformAndStorageBuffer16BitAccess = in_ext->uniformAndStorageBuffer16BitAccess;
            out_ext->storagePushConstant16 = in_ext->storagePushConstant16;
            out_ext->storageInputOutput16 = in_ext->storageInputOutput16;
            out_ext->multiview = in_ext->multiview;
            out_ext->multiviewGeometryShader = in_ext->multiviewGeometryShader;
            out_ext->multiviewTessellationShader = in_ext->multiviewTessellationShader;
            out_ext->variablePointersStorageBuffer = in_ext->variablePointersStorageBuffer;
            out_ext->variablePointers = in_ext->variablePointers;
            out_ext->protectedMemory = in_ext->protectedMemory;
            out_ext->samplerYcbcrConversion = in_ext->samplerYcbcrConversion;
            out_ext->shaderDrawParameters = in_ext->shaderDrawParameters;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES:
        {
            VkPhysicalDeviceVulkan12Features *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceVulkan12Features *in_ext = (const VkPhysicalDeviceVulkan12Features *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES;
            out_ext->pNext = NULL;
            out_ext->samplerMirrorClampToEdge = in_ext->samplerMirrorClampToEdge;
            out_ext->drawIndirectCount = in_ext->drawIndirectCount;
            out_ext->storageBuffer8BitAccess = in_ext->storageBuffer8BitAccess;
            out_ext->uniformAndStorageBuffer8BitAccess = in_ext->uniformAndStorageBuffer8BitAccess;
            out_ext->storagePushConstant8 = in_ext->storagePushConstant8;
            out_ext->shaderBufferInt64Atomics = in_ext->shaderBufferInt64Atomics;
            out_ext->shaderSharedInt64Atomics = in_ext->shaderSharedInt64Atomics;
            out_ext->shaderFloat16 = in_ext->shaderFloat16;
            out_ext->shaderInt8 = in_ext->shaderInt8;
            out_ext->descriptorIndexing = in_ext->descriptorIndexing;
            out_ext->shaderInputAttachmentArrayDynamicIndexing = in_ext->shaderInputAttachmentArrayDynamicIndexing;
            out_ext->shaderUniformTexelBufferArrayDynamicIndexing = in_ext->shaderUniformTexelBufferArrayDynamicIndexing;
            out_ext->shaderStorageTexelBufferArrayDynamicIndexing = in_ext->shaderStorageTexelBufferArrayDynamicIndexing;
            out_ext->shaderUniformBufferArrayNonUniformIndexing = in_ext->shaderUniformBufferArrayNonUniformIndexing;
            out_ext->shaderSampledImageArrayNonUniformIndexing = in_ext->shaderSampledImageArrayNonUniformIndexing;
            out_ext->shaderStorageBufferArrayNonUniformIndexing = in_ext->shaderStorageBufferArrayNonUniformIndexing;
            out_ext->shaderStorageImageArrayNonUniformIndexing = in_ext->shaderStorageImageArrayNonUniformIndexing;
            out_ext->shaderInputAttachmentArrayNonUniformIndexing = in_ext->shaderInputAttachmentArrayNonUniformIndexing;
            out_ext->shaderUniformTexelBufferArrayNonUniformIndexing = in_ext->shaderUniformTexelBufferArrayNonUniformIndexing;
            out_ext->shaderStorageTexelBufferArrayNonUniformIndexing = in_ext->shaderStorageTexelBufferArrayNonUniformIndexing;
            out_ext->descriptorBindingUniformBufferUpdateAfterBind = in_ext->descriptorBindingUniformBufferUpdateAfterBind;
            out_ext->descriptorBindingSampledImageUpdateAfterBind = in_ext->descriptorBindingSampledImageUpdateAfterBind;
            out_ext->descriptorBindingStorageImageUpdateAfterBind = in_ext->descriptorBindingStorageImageUpdateAfterBind;
            out_ext->descriptorBindingStorageBufferUpdateAfterBind = in_ext->descriptorBindingStorageBufferUpdateAfterBind;
            out_ext->descriptorBindingUniformTexelBufferUpdateAfterBind = in_ext->descriptorBindingUniformTexelBufferUpdateAfterBind;
            out_ext->descriptorBindingStorageTexelBufferUpdateAfterBind = in_ext->descriptorBindingStorageTexelBufferUpdateAfterBind;
            out_ext->descriptorBindingUpdateUnusedWhilePending = in_ext->descriptorBindingUpdateUnusedWhilePending;
            out_ext->descriptorBindingPartiallyBound = in_ext->descriptorBindingPartiallyBound;
            out_ext->descriptorBindingVariableDescriptorCount = in_ext->descriptorBindingVariableDescriptorCount;
            out_ext->runtimeDescriptorArray = in_ext->runtimeDescriptorArray;
            out_ext->samplerFilterMinmax = in_ext->samplerFilterMinmax;
            out_ext->scalarBlockLayout = in_ext->scalarBlockLayout;
            out_ext->imagelessFramebuffer = in_ext->imagelessFramebuffer;
            out_ext->uniformBufferStandardLayout = in_ext->uniformBufferStandardLayout;
            out_ext->shaderSubgroupExtendedTypes = in_ext->shaderSubgroupExtendedTypes;
            out_ext->separateDepthStencilLayouts = in_ext->separateDepthStencilLayouts;
            out_ext->hostQueryReset = in_ext->hostQueryReset;
            out_ext->timelineSemaphore = in_ext->timelineSemaphore;
            out_ext->bufferDeviceAddress = in_ext->bufferDeviceAddress;
            out_ext->bufferDeviceAddressCaptureReplay = in_ext->bufferDeviceAddressCaptureReplay;
            out_ext->bufferDeviceAddressMultiDevice = in_ext->bufferDeviceAddressMultiDevice;
            out_ext->vulkanMemoryModel = in_ext->vulkanMemoryModel;
            out_ext->vulkanMemoryModelDeviceScope = in_ext->vulkanMemoryModelDeviceScope;
            out_ext->vulkanMemoryModelAvailabilityVisibilityChains = in_ext->vulkanMemoryModelAvailabilityVisibilityChains;
            out_ext->shaderOutputViewportIndex = in_ext->shaderOutputViewportIndex;
            out_ext->shaderOutputLayer = in_ext->shaderOutputLayer;
            out_ext->subgroupBroadcastDynamicId = in_ext->subgroupBroadcastDynamicId;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES:
        {
            VkPhysicalDeviceVulkan13Features *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceVulkan13Features *in_ext = (const VkPhysicalDeviceVulkan13Features *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES;
            out_ext->pNext = NULL;
            out_ext->robustImageAccess = in_ext->robustImageAccess;
            out_ext->inlineUniformBlock = in_ext->inlineUniformBlock;
            out_ext->descriptorBindingInlineUniformBlockUpdateAfterBind = in_ext->descriptorBindingInlineUniformBlockUpdateAfterBind;
            out_ext->pipelineCreationCacheControl = in_ext->pipelineCreationCacheControl;
            out_ext->privateData = in_ext->privateData;
            out_ext->shaderDemoteToHelperInvocation = in_ext->shaderDemoteToHelperInvocation;
            out_ext->shaderTerminateInvocation = in_ext->shaderTerminateInvocation;
            out_ext->subgroupSizeControl = in_ext->subgroupSizeControl;
            out_ext->computeFullSubgroups = in_ext->computeFullSubgroups;
            out_ext->synchronization2 = in_ext->synchronization2;
            out_ext->textureCompressionASTC_HDR = in_ext->textureCompressionASTC_HDR;
            out_ext->shaderZeroInitializeWorkgroupMemory = in_ext->shaderZeroInitializeWorkgroupMemory;
            out_ext->dynamicRendering = in_ext->dynamicRendering;
            out_ext->shaderIntegerDotProduct = in_ext->shaderIntegerDotProduct;
            out_ext->maintenance4 = in_ext->maintenance4;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD:
        {
            VkPhysicalDeviceCoherentMemoryFeaturesAMD *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceCoherentMemoryFeaturesAMD *in_ext = (const VkPhysicalDeviceCoherentMemoryFeaturesAMD *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD;
            out_ext->pNext = NULL;
            out_ext->deviceCoherentMemory = in_ext->deviceCoherentMemory;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT:
        {
            VkPhysicalDeviceCustomBorderColorFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceCustomBorderColorFeaturesEXT *in_ext = (const VkPhysicalDeviceCustomBorderColorFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->customBorderColors = in_ext->customBorderColors;
            out_ext->customBorderColorWithoutFormat = in_ext->customBorderColorWithoutFormat;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT:
        {
            VkPhysicalDeviceBorderColorSwizzleFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceBorderColorSwizzleFeaturesEXT *in_ext = (const VkPhysicalDeviceBorderColorSwizzleFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->borderColorSwizzle = in_ext->borderColorSwizzle;
            out_ext->borderColorSwizzleFromImage = in_ext->borderColorSwizzleFromImage;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT:
        {
            VkPhysicalDeviceExtendedDynamicStateFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT *in_ext = (const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->extendedDynamicState = in_ext->extendedDynamicState;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT:
        {
            VkPhysicalDeviceExtendedDynamicState2FeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceExtendedDynamicState2FeaturesEXT *in_ext = (const VkPhysicalDeviceExtendedDynamicState2FeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->extendedDynamicState2 = in_ext->extendedDynamicState2;
            out_ext->extendedDynamicState2LogicOp = in_ext->extendedDynamicState2LogicOp;
            out_ext->extendedDynamicState2PatchControlPoints = in_ext->extendedDynamicState2PatchControlPoints;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT:
        {
            VkPhysicalDeviceExtendedDynamicState3FeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceExtendedDynamicState3FeaturesEXT *in_ext = (const VkPhysicalDeviceExtendedDynamicState3FeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->extendedDynamicState3TessellationDomainOrigin = in_ext->extendedDynamicState3TessellationDomainOrigin;
            out_ext->extendedDynamicState3DepthClampEnable = in_ext->extendedDynamicState3DepthClampEnable;
            out_ext->extendedDynamicState3PolygonMode = in_ext->extendedDynamicState3PolygonMode;
            out_ext->extendedDynamicState3RasterizationSamples = in_ext->extendedDynamicState3RasterizationSamples;
            out_ext->extendedDynamicState3SampleMask = in_ext->extendedDynamicState3SampleMask;
            out_ext->extendedDynamicState3AlphaToCoverageEnable = in_ext->extendedDynamicState3AlphaToCoverageEnable;
            out_ext->extendedDynamicState3AlphaToOneEnable = in_ext->extendedDynamicState3AlphaToOneEnable;
            out_ext->extendedDynamicState3LogicOpEnable = in_ext->extendedDynamicState3LogicOpEnable;
            out_ext->extendedDynamicState3ColorBlendEnable = in_ext->extendedDynamicState3ColorBlendEnable;
            out_ext->extendedDynamicState3ColorBlendEquation = in_ext->extendedDynamicState3ColorBlendEquation;
            out_ext->extendedDynamicState3ColorWriteMask = in_ext->extendedDynamicState3ColorWriteMask;
            out_ext->extendedDynamicState3RasterizationStream = in_ext->extendedDynamicState3RasterizationStream;
            out_ext->extendedDynamicState3ConservativeRasterizationMode = in_ext->extendedDynamicState3ConservativeRasterizationMode;
            out_ext->extendedDynamicState3ExtraPrimitiveOverestimationSize = in_ext->extendedDynamicState3ExtraPrimitiveOverestimationSize;
            out_ext->extendedDynamicState3DepthClipEnable = in_ext->extendedDynamicState3DepthClipEnable;
            out_ext->extendedDynamicState3SampleLocationsEnable = in_ext->extendedDynamicState3SampleLocationsEnable;
            out_ext->extendedDynamicState3ColorBlendAdvanced = in_ext->extendedDynamicState3ColorBlendAdvanced;
            out_ext->extendedDynamicState3ProvokingVertexMode = in_ext->extendedDynamicState3ProvokingVertexMode;
            out_ext->extendedDynamicState3LineRasterizationMode = in_ext->extendedDynamicState3LineRasterizationMode;
            out_ext->extendedDynamicState3LineStippleEnable = in_ext->extendedDynamicState3LineStippleEnable;
            out_ext->extendedDynamicState3DepthClipNegativeOneToOne = in_ext->extendedDynamicState3DepthClipNegativeOneToOne;
            out_ext->extendedDynamicState3ViewportWScalingEnable = in_ext->extendedDynamicState3ViewportWScalingEnable;
            out_ext->extendedDynamicState3ViewportSwizzle = in_ext->extendedDynamicState3ViewportSwizzle;
            out_ext->extendedDynamicState3CoverageToColorEnable = in_ext->extendedDynamicState3CoverageToColorEnable;
            out_ext->extendedDynamicState3CoverageToColorLocation = in_ext->extendedDynamicState3CoverageToColorLocation;
            out_ext->extendedDynamicState3CoverageModulationMode = in_ext->extendedDynamicState3CoverageModulationMode;
            out_ext->extendedDynamicState3CoverageModulationTableEnable = in_ext->extendedDynamicState3CoverageModulationTableEnable;
            out_ext->extendedDynamicState3CoverageModulationTable = in_ext->extendedDynamicState3CoverageModulationTable;
            out_ext->extendedDynamicState3CoverageReductionMode = in_ext->extendedDynamicState3CoverageReductionMode;
            out_ext->extendedDynamicState3RepresentativeFragmentTestEnable = in_ext->extendedDynamicState3RepresentativeFragmentTestEnable;
            out_ext->extendedDynamicState3ShadingRateImageEnable = in_ext->extendedDynamicState3ShadingRateImageEnable;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV:
        {
            VkPhysicalDeviceDiagnosticsConfigFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceDiagnosticsConfigFeaturesNV *in_ext = (const VkPhysicalDeviceDiagnosticsConfigFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->diagnosticsConfig = in_ext->diagnosticsConfig;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV:
        {
            VkDeviceDiagnosticsConfigCreateInfoNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkDeviceDiagnosticsConfigCreateInfoNV *in_ext = (const VkDeviceDiagnosticsConfigCreateInfoNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV;
            out_ext->pNext = NULL;
            out_ext->flags = in_ext->flags;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES:
        {
            VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures *in_ext = (const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES;
            out_ext->pNext = NULL;
            out_ext->shaderZeroInitializeWorkgroupMemory = in_ext->shaderZeroInitializeWorkgroupMemory;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR:
        {
            VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR *in_ext = (const VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR;
            out_ext->pNext = NULL;
            out_ext->shaderSubgroupUniformControlFlow = in_ext->shaderSubgroupUniformControlFlow;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT:
        {
            VkPhysicalDeviceRobustness2FeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceRobustness2FeaturesEXT *in_ext = (const VkPhysicalDeviceRobustness2FeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->robustBufferAccess2 = in_ext->robustBufferAccess2;
            out_ext->robustImageAccess2 = in_ext->robustImageAccess2;
            out_ext->nullDescriptor = in_ext->nullDescriptor;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES:
        {
            VkPhysicalDeviceImageRobustnessFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceImageRobustnessFeatures *in_ext = (const VkPhysicalDeviceImageRobustnessFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES;
            out_ext->pNext = NULL;
            out_ext->robustImageAccess = in_ext->robustImageAccess;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR:
        {
            VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR *in_ext = (const VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR;
            out_ext->pNext = NULL;
            out_ext->workgroupMemoryExplicitLayout = in_ext->workgroupMemoryExplicitLayout;
            out_ext->workgroupMemoryExplicitLayoutScalarBlockLayout = in_ext->workgroupMemoryExplicitLayoutScalarBlockLayout;
            out_ext->workgroupMemoryExplicitLayout8BitAccess = in_ext->workgroupMemoryExplicitLayout8BitAccess;
            out_ext->workgroupMemoryExplicitLayout16BitAccess = in_ext->workgroupMemoryExplicitLayout16BitAccess;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT:
        {
            VkPhysicalDevice4444FormatsFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDevice4444FormatsFeaturesEXT *in_ext = (const VkPhysicalDevice4444FormatsFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->formatA4R4G4B4 = in_ext->formatA4R4G4B4;
            out_ext->formatA4B4G4R4 = in_ext->formatA4B4G4R4;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI:
        {
            VkPhysicalDeviceSubpassShadingFeaturesHUAWEI *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceSubpassShadingFeaturesHUAWEI *in_ext = (const VkPhysicalDeviceSubpassShadingFeaturesHUAWEI *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI;
            out_ext->pNext = NULL;
            out_ext->subpassShading = in_ext->subpassShading;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT:
        {
            VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT *in_ext = (const VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->shaderImageInt64Atomics = in_ext->shaderImageInt64Atomics;
            out_ext->sparseImageInt64Atomics = in_ext->sparseImageInt64Atomics;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR:
        {
            VkPhysicalDeviceFragmentShadingRateFeaturesKHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceFragmentShadingRateFeaturesKHR *in_ext = (const VkPhysicalDeviceFragmentShadingRateFeaturesKHR *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR;
            out_ext->pNext = NULL;
            out_ext->pipelineFragmentShadingRate = in_ext->pipelineFragmentShadingRate;
            out_ext->primitiveFragmentShadingRate = in_ext->primitiveFragmentShadingRate;
            out_ext->attachmentFragmentShadingRate = in_ext->attachmentFragmentShadingRate;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES:
        {
            VkPhysicalDeviceShaderTerminateInvocationFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderTerminateInvocationFeatures *in_ext = (const VkPhysicalDeviceShaderTerminateInvocationFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES;
            out_ext->pNext = NULL;
            out_ext->shaderTerminateInvocation = in_ext->shaderTerminateInvocation;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV:
        {
            VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV *in_ext = (const VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->fragmentShadingRateEnums = in_ext->fragmentShadingRateEnums;
            out_ext->supersampleFragmentShadingRates = in_ext->supersampleFragmentShadingRates;
            out_ext->noInvocationFragmentShadingRates = in_ext->noInvocationFragmentShadingRates;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT:
        {
            VkPhysicalDeviceImage2DViewOf3DFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceImage2DViewOf3DFeaturesEXT *in_ext = (const VkPhysicalDeviceImage2DViewOf3DFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->image2DViewOf3D = in_ext->image2DViewOf3D;
            out_ext->sampler2DViewOf3D = in_ext->sampler2DViewOf3D;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT:
        {
            VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT *in_ext = (const VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->mutableDescriptorType = in_ext->mutableDescriptorType;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT:
        {
            VkPhysicalDeviceDepthClipControlFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceDepthClipControlFeaturesEXT *in_ext = (const VkPhysicalDeviceDepthClipControlFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->depthClipControl = in_ext->depthClipControl;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT:
        {
            VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT *in_ext = (const VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->vertexInputDynamicState = in_ext->vertexInputDynamicState;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT:
        {
            VkPhysicalDeviceColorWriteEnableFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceColorWriteEnableFeaturesEXT *in_ext = (const VkPhysicalDeviceColorWriteEnableFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->colorWriteEnable = in_ext->colorWriteEnable;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES:
        {
            VkPhysicalDeviceSynchronization2Features *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceSynchronization2Features *in_ext = (const VkPhysicalDeviceSynchronization2Features *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES;
            out_ext->pNext = NULL;
            out_ext->synchronization2 = in_ext->synchronization2;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT:
        {
            VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT *in_ext = (const VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->primitivesGeneratedQuery = in_ext->primitivesGeneratedQuery;
            out_ext->primitivesGeneratedQueryWithRasterizerDiscard = in_ext->primitivesGeneratedQueryWithRasterizerDiscard;
            out_ext->primitivesGeneratedQueryWithNonZeroStreams = in_ext->primitivesGeneratedQueryWithNonZeroStreams;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT:
        {
            VkPhysicalDeviceLegacyDitheringFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceLegacyDitheringFeaturesEXT *in_ext = (const VkPhysicalDeviceLegacyDitheringFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->legacyDithering = in_ext->legacyDithering;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT:
        {
            VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT *in_ext = (const VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->multisampledRenderToSingleSampled = in_ext->multisampledRenderToSingleSampled;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES_EXT:
        {
            VkPhysicalDevicePipelineProtectedAccessFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDevicePipelineProtectedAccessFeaturesEXT *in_ext = (const VkPhysicalDevicePipelineProtectedAccessFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->pipelineProtectedAccess = in_ext->pipelineProtectedAccess;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV:
        {
            VkPhysicalDeviceInheritedViewportScissorFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceInheritedViewportScissorFeaturesNV *in_ext = (const VkPhysicalDeviceInheritedViewportScissorFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->inheritedViewportScissor2D = in_ext->inheritedViewportScissor2D;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT:
        {
            VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT *in_ext = (const VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->ycbcr2plane444Formats = in_ext->ycbcr2plane444Formats;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT:
        {
            VkPhysicalDeviceProvokingVertexFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceProvokingVertexFeaturesEXT *in_ext = (const VkPhysicalDeviceProvokingVertexFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->provokingVertexLast = in_ext->provokingVertexLast;
            out_ext->transformFeedbackPreservesProvokingVertex = in_ext->transformFeedbackPreservesProvokingVertex;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES:
        {
            VkPhysicalDeviceShaderIntegerDotProductFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderIntegerDotProductFeatures *in_ext = (const VkPhysicalDeviceShaderIntegerDotProductFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES;
            out_ext->pNext = NULL;
            out_ext->shaderIntegerDotProduct = in_ext->shaderIntegerDotProduct;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR:
        {
            VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR *in_ext = (const VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR;
            out_ext->pNext = NULL;
            out_ext->fragmentShaderBarycentric = in_ext->fragmentShaderBarycentric;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV:
        {
            VkPhysicalDeviceRayTracingMotionBlurFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceRayTracingMotionBlurFeaturesNV *in_ext = (const VkPhysicalDeviceRayTracingMotionBlurFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->rayTracingMotionBlur = in_ext->rayTracingMotionBlur;
            out_ext->rayTracingMotionBlurPipelineTraceRaysIndirect = in_ext->rayTracingMotionBlurPipelineTraceRaysIndirect;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT:
        {
            VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT *in_ext = (const VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->formatRgba10x6WithoutYCbCrSampler = in_ext->formatRgba10x6WithoutYCbCrSampler;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES:
        {
            VkPhysicalDeviceDynamicRenderingFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceDynamicRenderingFeatures *in_ext = (const VkPhysicalDeviceDynamicRenderingFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES;
            out_ext->pNext = NULL;
            out_ext->dynamicRendering = in_ext->dynamicRendering;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT:
        {
            VkPhysicalDeviceImageViewMinLodFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceImageViewMinLodFeaturesEXT *in_ext = (const VkPhysicalDeviceImageViewMinLodFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->minLod = in_ext->minLod;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT:
        {
            VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT *in_ext = (const VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->rasterizationOrderColorAttachmentAccess = in_ext->rasterizationOrderColorAttachmentAccess;
            out_ext->rasterizationOrderDepthAttachmentAccess = in_ext->rasterizationOrderDepthAttachmentAccess;
            out_ext->rasterizationOrderStencilAttachmentAccess = in_ext->rasterizationOrderStencilAttachmentAccess;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV:
        {
            VkPhysicalDeviceLinearColorAttachmentFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceLinearColorAttachmentFeaturesNV *in_ext = (const VkPhysicalDeviceLinearColorAttachmentFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->linearColorAttachment = in_ext->linearColorAttachment;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT:
        {
            VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT *in_ext = (const VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->graphicsPipelineLibrary = in_ext->graphicsPipelineLibrary;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE:
        {
            VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE *in_ext = (const VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE;
            out_ext->pNext = NULL;
            out_ext->descriptorSetHostMapping = in_ext->descriptorSetHostMapping;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT:
        {
            VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT *in_ext = (const VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->shaderModuleIdentifier = in_ext->shaderModuleIdentifier;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT:
        {
            VkPhysicalDeviceImageCompressionControlFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceImageCompressionControlFeaturesEXT *in_ext = (const VkPhysicalDeviceImageCompressionControlFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->imageCompressionControl = in_ext->imageCompressionControl;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT:
        {
            VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT *in_ext = (const VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->imageCompressionControlSwapchain = in_ext->imageCompressionControlSwapchain;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT:
        {
            VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT *in_ext = (const VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->subpassMergeFeedback = in_ext->subpassMergeFeedback;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT:
        {
            VkPhysicalDeviceOpacityMicromapFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceOpacityMicromapFeaturesEXT *in_ext = (const VkPhysicalDeviceOpacityMicromapFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->micromap = in_ext->micromap;
            out_ext->micromapCaptureReplay = in_ext->micromapCaptureReplay;
            out_ext->micromapHostCommands = in_ext->micromapHostCommands;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT:
        {
            VkPhysicalDevicePipelinePropertiesFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDevicePipelinePropertiesFeaturesEXT *in_ext = (const VkPhysicalDevicePipelinePropertiesFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->pipelinePropertiesIdentifier = in_ext->pipelinePropertiesIdentifier;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD:
        {
            VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD *in_ext = (const VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD;
            out_ext->pNext = NULL;
            out_ext->shaderEarlyAndLateFragmentTests = in_ext->shaderEarlyAndLateFragmentTests;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT:
        {
            VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT *in_ext = (const VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->nonSeamlessCubeMap = in_ext->nonSeamlessCubeMap;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES_EXT:
        {
            VkPhysicalDevicePipelineRobustnessFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDevicePipelineRobustnessFeaturesEXT *in_ext = (const VkPhysicalDevicePipelineRobustnessFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->pipelineRobustness = in_ext->pipelineRobustness;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM:
        {
            VkPhysicalDeviceImageProcessingFeaturesQCOM *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceImageProcessingFeaturesQCOM *in_ext = (const VkPhysicalDeviceImageProcessingFeaturesQCOM *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM;
            out_ext->pNext = NULL;
            out_ext->textureSampleWeighted = in_ext->textureSampleWeighted;
            out_ext->textureBoxFilter = in_ext->textureBoxFilter;
            out_ext->textureBlockMatch = in_ext->textureBlockMatch;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM:
        {
            VkPhysicalDeviceTilePropertiesFeaturesQCOM *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceTilePropertiesFeaturesQCOM *in_ext = (const VkPhysicalDeviceTilePropertiesFeaturesQCOM *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM;
            out_ext->pNext = NULL;
            out_ext->tileProperties = in_ext->tileProperties;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT:
        {
            VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT *in_ext = (const VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->attachmentFeedbackLoopLayout = in_ext->attachmentFeedbackLoopLayout;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_EXT:
        {
            VkPhysicalDeviceDepthClampZeroOneFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceDepthClampZeroOneFeaturesEXT *in_ext = (const VkPhysicalDeviceDepthClampZeroOneFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->depthClampZeroOne = in_ext->depthClampZeroOne;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT:
        {
            VkPhysicalDeviceAddressBindingReportFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceAddressBindingReportFeaturesEXT *in_ext = (const VkPhysicalDeviceAddressBindingReportFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->reportAddressBinding = in_ext->reportAddressBinding;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV:
        {
            VkPhysicalDeviceOpticalFlowFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceOpticalFlowFeaturesNV *in_ext = (const VkPhysicalDeviceOpticalFlowFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->opticalFlow = in_ext->opticalFlow;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FAULT_FEATURES_EXT:
        {
            VkPhysicalDeviceFaultFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceFaultFeaturesEXT *in_ext = (const VkPhysicalDeviceFaultFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FAULT_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->deviceFault = in_ext->deviceFault;
            out_ext->deviceFaultVendorBinary = in_ext->deviceFaultVendorBinary;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM:
        {
            VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM *in_ext = (const VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM;
            out_ext->pNext = NULL;
            out_ext->shaderCoreBuiltins = in_ext->shaderCoreBuiltins;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV:
        {
            VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV *in_ext = (const VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->rayTracingInvocationReorder = in_ext->rayTracingInvocationReorder;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        default:
            FIXME("Unhandled sType %u.", in_header->sType);
            break;
        }
    }
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkDeviceCreateInfo_win32_to_host(struct conversion_context *ctx, const VkDeviceCreateInfo *in, VkDeviceCreateInfo *out)
{
    const VkBaseInStructure *in_header;
    VkBaseOutStructure *out_header = (void *)out;

    if (!in) return;

    out->sType = in->sType;
    out->pNext = NULL;
    out->flags = in->flags;
    out->queueCreateInfoCount = in->queueCreateInfoCount;
    out->pQueueCreateInfos = in->pQueueCreateInfos;
    out->enabledLayerCount = in->enabledLayerCount;
    out->ppEnabledLayerNames = in->ppEnabledLayerNames;
    out->enabledExtensionCount = in->enabledExtensionCount;
    out->ppEnabledExtensionNames = in->ppEnabledExtensionNames;
    out->pEnabledFeatures = in->pEnabledFeatures;

    for (in_header = UlongToPtr(in->pNext); in_header; in_header = UlongToPtr(in_header->pNext))
    {
        switch (in_header->sType)
        {
        case VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO:
            break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV:
        {
            VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV *in_ext = (const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->deviceGeneratedCommands = in_ext->deviceGeneratedCommands;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_DEVICE_PRIVATE_DATA_CREATE_INFO:
        {
            VkDevicePrivateDataCreateInfo *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkDevicePrivateDataCreateInfo *in_ext = (const VkDevicePrivateDataCreateInfo *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_DEVICE_PRIVATE_DATA_CREATE_INFO;
            out_ext->pNext = NULL;
            out_ext->privateDataSlotRequestCount = in_ext->privateDataSlotRequestCount;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES:
        {
            VkPhysicalDevicePrivateDataFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDevicePrivateDataFeatures *in_ext = (const VkPhysicalDevicePrivateDataFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES;
            out_ext->pNext = NULL;
            out_ext->privateData = in_ext->privateData;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2:
        {
            VkPhysicalDeviceFeatures2 *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceFeatures2 *in_ext = (const VkPhysicalDeviceFeatures2 *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2;
            out_ext->pNext = NULL;
            out_ext->features = in_ext->features;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES:
        {
            VkPhysicalDeviceVariablePointersFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceVariablePointersFeatures *in_ext = (const VkPhysicalDeviceVariablePointersFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES;
            out_ext->pNext = NULL;
            out_ext->variablePointersStorageBuffer = in_ext->variablePointersStorageBuffer;
            out_ext->variablePointers = in_ext->variablePointers;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES:
        {
            VkPhysicalDeviceMultiviewFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceMultiviewFeatures *in_ext = (const VkPhysicalDeviceMultiviewFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES;
            out_ext->pNext = NULL;
            out_ext->multiview = in_ext->multiview;
            out_ext->multiviewGeometryShader = in_ext->multiviewGeometryShader;
            out_ext->multiviewTessellationShader = in_ext->multiviewTessellationShader;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO:
        {
            VkDeviceGroupDeviceCreateInfo *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkDeviceGroupDeviceCreateInfo *in_ext = (const VkDeviceGroupDeviceCreateInfo *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO;
            out_ext->pNext = NULL;
            out_ext->physicalDeviceCount = in_ext->physicalDeviceCount;
            out_ext->pPhysicalDevices = convert_VkPhysicalDevice_array_win32_to_host(ctx, in_ext->pPhysicalDevices, in_ext->physicalDeviceCount);
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR:
        {
            VkPhysicalDevicePresentIdFeaturesKHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDevicePresentIdFeaturesKHR *in_ext = (const VkPhysicalDevicePresentIdFeaturesKHR *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR;
            out_ext->pNext = NULL;
            out_ext->presentId = in_ext->presentId;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR:
        {
            VkPhysicalDevicePresentWaitFeaturesKHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDevicePresentWaitFeaturesKHR *in_ext = (const VkPhysicalDevicePresentWaitFeaturesKHR *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR;
            out_ext->pNext = NULL;
            out_ext->presentWait = in_ext->presentWait;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES:
        {
            VkPhysicalDevice16BitStorageFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDevice16BitStorageFeatures *in_ext = (const VkPhysicalDevice16BitStorageFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES;
            out_ext->pNext = NULL;
            out_ext->storageBuffer16BitAccess = in_ext->storageBuffer16BitAccess;
            out_ext->uniformAndStorageBuffer16BitAccess = in_ext->uniformAndStorageBuffer16BitAccess;
            out_ext->storagePushConstant16 = in_ext->storagePushConstant16;
            out_ext->storageInputOutput16 = in_ext->storageInputOutput16;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES:
        {
            VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures *in_ext = (const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES;
            out_ext->pNext = NULL;
            out_ext->shaderSubgroupExtendedTypes = in_ext->shaderSubgroupExtendedTypes;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES:
        {
            VkPhysicalDeviceSamplerYcbcrConversionFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceSamplerYcbcrConversionFeatures *in_ext = (const VkPhysicalDeviceSamplerYcbcrConversionFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES;
            out_ext->pNext = NULL;
            out_ext->samplerYcbcrConversion = in_ext->samplerYcbcrConversion;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES:
        {
            VkPhysicalDeviceProtectedMemoryFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceProtectedMemoryFeatures *in_ext = (const VkPhysicalDeviceProtectedMemoryFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES;
            out_ext->pNext = NULL;
            out_ext->protectedMemory = in_ext->protectedMemory;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT:
        {
            VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT *in_ext = (const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->advancedBlendCoherentOperations = in_ext->advancedBlendCoherentOperations;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT:
        {
            VkPhysicalDeviceMultiDrawFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceMultiDrawFeaturesEXT *in_ext = (const VkPhysicalDeviceMultiDrawFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->multiDraw = in_ext->multiDraw;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES:
        {
            VkPhysicalDeviceInlineUniformBlockFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceInlineUniformBlockFeatures *in_ext = (const VkPhysicalDeviceInlineUniformBlockFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES;
            out_ext->pNext = NULL;
            out_ext->inlineUniformBlock = in_ext->inlineUniformBlock;
            out_ext->descriptorBindingInlineUniformBlockUpdateAfterBind = in_ext->descriptorBindingInlineUniformBlockUpdateAfterBind;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES:
        {
            VkPhysicalDeviceMaintenance4Features *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceMaintenance4Features *in_ext = (const VkPhysicalDeviceMaintenance4Features *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES;
            out_ext->pNext = NULL;
            out_ext->maintenance4 = in_ext->maintenance4;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES:
        {
            VkPhysicalDeviceShaderDrawParametersFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderDrawParametersFeatures *in_ext = (const VkPhysicalDeviceShaderDrawParametersFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES;
            out_ext->pNext = NULL;
            out_ext->shaderDrawParameters = in_ext->shaderDrawParameters;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES:
        {
            VkPhysicalDeviceShaderFloat16Int8Features *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderFloat16Int8Features *in_ext = (const VkPhysicalDeviceShaderFloat16Int8Features *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES;
            out_ext->pNext = NULL;
            out_ext->shaderFloat16 = in_ext->shaderFloat16;
            out_ext->shaderInt8 = in_ext->shaderInt8;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES:
        {
            VkPhysicalDeviceHostQueryResetFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceHostQueryResetFeatures *in_ext = (const VkPhysicalDeviceHostQueryResetFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES;
            out_ext->pNext = NULL;
            out_ext->hostQueryReset = in_ext->hostQueryReset;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES_KHR:
        {
            VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR *in_ext = (const VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES_KHR;
            out_ext->pNext = NULL;
            out_ext->globalPriorityQuery = in_ext->globalPriorityQuery;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES:
        {
            VkPhysicalDeviceDescriptorIndexingFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceDescriptorIndexingFeatures *in_ext = (const VkPhysicalDeviceDescriptorIndexingFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES;
            out_ext->pNext = NULL;
            out_ext->shaderInputAttachmentArrayDynamicIndexing = in_ext->shaderInputAttachmentArrayDynamicIndexing;
            out_ext->shaderUniformTexelBufferArrayDynamicIndexing = in_ext->shaderUniformTexelBufferArrayDynamicIndexing;
            out_ext->shaderStorageTexelBufferArrayDynamicIndexing = in_ext->shaderStorageTexelBufferArrayDynamicIndexing;
            out_ext->shaderUniformBufferArrayNonUniformIndexing = in_ext->shaderUniformBufferArrayNonUniformIndexing;
            out_ext->shaderSampledImageArrayNonUniformIndexing = in_ext->shaderSampledImageArrayNonUniformIndexing;
            out_ext->shaderStorageBufferArrayNonUniformIndexing = in_ext->shaderStorageBufferArrayNonUniformIndexing;
            out_ext->shaderStorageImageArrayNonUniformIndexing = in_ext->shaderStorageImageArrayNonUniformIndexing;
            out_ext->shaderInputAttachmentArrayNonUniformIndexing = in_ext->shaderInputAttachmentArrayNonUniformIndexing;
            out_ext->shaderUniformTexelBufferArrayNonUniformIndexing = in_ext->shaderUniformTexelBufferArrayNonUniformIndexing;
            out_ext->shaderStorageTexelBufferArrayNonUniformIndexing = in_ext->shaderStorageTexelBufferArrayNonUniformIndexing;
            out_ext->descriptorBindingUniformBufferUpdateAfterBind = in_ext->descriptorBindingUniformBufferUpdateAfterBind;
            out_ext->descriptorBindingSampledImageUpdateAfterBind = in_ext->descriptorBindingSampledImageUpdateAfterBind;
            out_ext->descriptorBindingStorageImageUpdateAfterBind = in_ext->descriptorBindingStorageImageUpdateAfterBind;
            out_ext->descriptorBindingStorageBufferUpdateAfterBind = in_ext->descriptorBindingStorageBufferUpdateAfterBind;
            out_ext->descriptorBindingUniformTexelBufferUpdateAfterBind = in_ext->descriptorBindingUniformTexelBufferUpdateAfterBind;
            out_ext->descriptorBindingStorageTexelBufferUpdateAfterBind = in_ext->descriptorBindingStorageTexelBufferUpdateAfterBind;
            out_ext->descriptorBindingUpdateUnusedWhilePending = in_ext->descriptorBindingUpdateUnusedWhilePending;
            out_ext->descriptorBindingPartiallyBound = in_ext->descriptorBindingPartiallyBound;
            out_ext->descriptorBindingVariableDescriptorCount = in_ext->descriptorBindingVariableDescriptorCount;
            out_ext->runtimeDescriptorArray = in_ext->runtimeDescriptorArray;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES:
        {
            VkPhysicalDeviceTimelineSemaphoreFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceTimelineSemaphoreFeatures *in_ext = (const VkPhysicalDeviceTimelineSemaphoreFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES;
            out_ext->pNext = NULL;
            out_ext->timelineSemaphore = in_ext->timelineSemaphore;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES:
        {
            VkPhysicalDevice8BitStorageFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDevice8BitStorageFeatures *in_ext = (const VkPhysicalDevice8BitStorageFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES;
            out_ext->pNext = NULL;
            out_ext->storageBuffer8BitAccess = in_ext->storageBuffer8BitAccess;
            out_ext->uniformAndStorageBuffer8BitAccess = in_ext->uniformAndStorageBuffer8BitAccess;
            out_ext->storagePushConstant8 = in_ext->storagePushConstant8;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT:
        {
            VkPhysicalDeviceConditionalRenderingFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceConditionalRenderingFeaturesEXT *in_ext = (const VkPhysicalDeviceConditionalRenderingFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->conditionalRendering = in_ext->conditionalRendering;
            out_ext->inheritedConditionalRendering = in_ext->inheritedConditionalRendering;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES:
        {
            VkPhysicalDeviceVulkanMemoryModelFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceVulkanMemoryModelFeatures *in_ext = (const VkPhysicalDeviceVulkanMemoryModelFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES;
            out_ext->pNext = NULL;
            out_ext->vulkanMemoryModel = in_ext->vulkanMemoryModel;
            out_ext->vulkanMemoryModelDeviceScope = in_ext->vulkanMemoryModelDeviceScope;
            out_ext->vulkanMemoryModelAvailabilityVisibilityChains = in_ext->vulkanMemoryModelAvailabilityVisibilityChains;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES:
        {
            VkPhysicalDeviceShaderAtomicInt64Features *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderAtomicInt64Features *in_ext = (const VkPhysicalDeviceShaderAtomicInt64Features *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES;
            out_ext->pNext = NULL;
            out_ext->shaderBufferInt64Atomics = in_ext->shaderBufferInt64Atomics;
            out_ext->shaderSharedInt64Atomics = in_ext->shaderSharedInt64Atomics;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT:
        {
            VkPhysicalDeviceShaderAtomicFloatFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT *in_ext = (const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->shaderBufferFloat32Atomics = in_ext->shaderBufferFloat32Atomics;
            out_ext->shaderBufferFloat32AtomicAdd = in_ext->shaderBufferFloat32AtomicAdd;
            out_ext->shaderBufferFloat64Atomics = in_ext->shaderBufferFloat64Atomics;
            out_ext->shaderBufferFloat64AtomicAdd = in_ext->shaderBufferFloat64AtomicAdd;
            out_ext->shaderSharedFloat32Atomics = in_ext->shaderSharedFloat32Atomics;
            out_ext->shaderSharedFloat32AtomicAdd = in_ext->shaderSharedFloat32AtomicAdd;
            out_ext->shaderSharedFloat64Atomics = in_ext->shaderSharedFloat64Atomics;
            out_ext->shaderSharedFloat64AtomicAdd = in_ext->shaderSharedFloat64AtomicAdd;
            out_ext->shaderImageFloat32Atomics = in_ext->shaderImageFloat32Atomics;
            out_ext->shaderImageFloat32AtomicAdd = in_ext->shaderImageFloat32AtomicAdd;
            out_ext->sparseImageFloat32Atomics = in_ext->sparseImageFloat32Atomics;
            out_ext->sparseImageFloat32AtomicAdd = in_ext->sparseImageFloat32AtomicAdd;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT:
        {
            VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT *in_ext = (const VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->shaderBufferFloat16Atomics = in_ext->shaderBufferFloat16Atomics;
            out_ext->shaderBufferFloat16AtomicAdd = in_ext->shaderBufferFloat16AtomicAdd;
            out_ext->shaderBufferFloat16AtomicMinMax = in_ext->shaderBufferFloat16AtomicMinMax;
            out_ext->shaderBufferFloat32AtomicMinMax = in_ext->shaderBufferFloat32AtomicMinMax;
            out_ext->shaderBufferFloat64AtomicMinMax = in_ext->shaderBufferFloat64AtomicMinMax;
            out_ext->shaderSharedFloat16Atomics = in_ext->shaderSharedFloat16Atomics;
            out_ext->shaderSharedFloat16AtomicAdd = in_ext->shaderSharedFloat16AtomicAdd;
            out_ext->shaderSharedFloat16AtomicMinMax = in_ext->shaderSharedFloat16AtomicMinMax;
            out_ext->shaderSharedFloat32AtomicMinMax = in_ext->shaderSharedFloat32AtomicMinMax;
            out_ext->shaderSharedFloat64AtomicMinMax = in_ext->shaderSharedFloat64AtomicMinMax;
            out_ext->shaderImageFloat32AtomicMinMax = in_ext->shaderImageFloat32AtomicMinMax;
            out_ext->sparseImageFloat32AtomicMinMax = in_ext->sparseImageFloat32AtomicMinMax;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT:
        {
            VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT *in_ext = (const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->vertexAttributeInstanceRateDivisor = in_ext->vertexAttributeInstanceRateDivisor;
            out_ext->vertexAttributeInstanceRateZeroDivisor = in_ext->vertexAttributeInstanceRateZeroDivisor;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT:
        {
            VkPhysicalDeviceASTCDecodeFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceASTCDecodeFeaturesEXT *in_ext = (const VkPhysicalDeviceASTCDecodeFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->decodeModeSharedExponent = in_ext->decodeModeSharedExponent;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT:
        {
            VkPhysicalDeviceTransformFeedbackFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceTransformFeedbackFeaturesEXT *in_ext = (const VkPhysicalDeviceTransformFeedbackFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->transformFeedback = in_ext->transformFeedback;
            out_ext->geometryStreams = in_ext->geometryStreams;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV:
        {
            VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *in_ext = (const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->representativeFragmentTest = in_ext->representativeFragmentTest;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV:
        {
            VkPhysicalDeviceExclusiveScissorFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceExclusiveScissorFeaturesNV *in_ext = (const VkPhysicalDeviceExclusiveScissorFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->exclusiveScissor = in_ext->exclusiveScissor;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV:
        {
            VkPhysicalDeviceCornerSampledImageFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceCornerSampledImageFeaturesNV *in_ext = (const VkPhysicalDeviceCornerSampledImageFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->cornerSampledImage = in_ext->cornerSampledImage;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV:
        {
            VkPhysicalDeviceComputeShaderDerivativesFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV *in_ext = (const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->computeDerivativeGroupQuads = in_ext->computeDerivativeGroupQuads;
            out_ext->computeDerivativeGroupLinear = in_ext->computeDerivativeGroupLinear;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV:
        {
            VkPhysicalDeviceShaderImageFootprintFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderImageFootprintFeaturesNV *in_ext = (const VkPhysicalDeviceShaderImageFootprintFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->imageFootprint = in_ext->imageFootprint;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV:
        {
            VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV *in_ext = (const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->dedicatedAllocationImageAliasing = in_ext->dedicatedAllocationImageAliasing;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV:
        {
            VkPhysicalDeviceCopyMemoryIndirectFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceCopyMemoryIndirectFeaturesNV *in_ext = (const VkPhysicalDeviceCopyMemoryIndirectFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->indirectCopy = in_ext->indirectCopy;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_NV:
        {
            VkPhysicalDeviceMemoryDecompressionFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceMemoryDecompressionFeaturesNV *in_ext = (const VkPhysicalDeviceMemoryDecompressionFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->memoryDecompression = in_ext->memoryDecompression;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV:
        {
            VkPhysicalDeviceShadingRateImageFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShadingRateImageFeaturesNV *in_ext = (const VkPhysicalDeviceShadingRateImageFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->shadingRateImage = in_ext->shadingRateImage;
            out_ext->shadingRateCoarseSampleOrder = in_ext->shadingRateCoarseSampleOrder;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI:
        {
            VkPhysicalDeviceInvocationMaskFeaturesHUAWEI *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceInvocationMaskFeaturesHUAWEI *in_ext = (const VkPhysicalDeviceInvocationMaskFeaturesHUAWEI *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI;
            out_ext->pNext = NULL;
            out_ext->invocationMask = in_ext->invocationMask;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV:
        {
            VkPhysicalDeviceMeshShaderFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceMeshShaderFeaturesNV *in_ext = (const VkPhysicalDeviceMeshShaderFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->taskShader = in_ext->taskShader;
            out_ext->meshShader = in_ext->meshShader;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT:
        {
            VkPhysicalDeviceMeshShaderFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceMeshShaderFeaturesEXT *in_ext = (const VkPhysicalDeviceMeshShaderFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->taskShader = in_ext->taskShader;
            out_ext->meshShader = in_ext->meshShader;
            out_ext->multiviewMeshShader = in_ext->multiviewMeshShader;
            out_ext->primitiveFragmentShadingRateMeshShader = in_ext->primitiveFragmentShadingRateMeshShader;
            out_ext->meshShaderQueries = in_ext->meshShaderQueries;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR:
        {
            VkPhysicalDeviceAccelerationStructureFeaturesKHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceAccelerationStructureFeaturesKHR *in_ext = (const VkPhysicalDeviceAccelerationStructureFeaturesKHR *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR;
            out_ext->pNext = NULL;
            out_ext->accelerationStructure = in_ext->accelerationStructure;
            out_ext->accelerationStructureCaptureReplay = in_ext->accelerationStructureCaptureReplay;
            out_ext->accelerationStructureIndirectBuild = in_ext->accelerationStructureIndirectBuild;
            out_ext->accelerationStructureHostCommands = in_ext->accelerationStructureHostCommands;
            out_ext->descriptorBindingAccelerationStructureUpdateAfterBind = in_ext->descriptorBindingAccelerationStructureUpdateAfterBind;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR:
        {
            VkPhysicalDeviceRayTracingPipelineFeaturesKHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceRayTracingPipelineFeaturesKHR *in_ext = (const VkPhysicalDeviceRayTracingPipelineFeaturesKHR *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR;
            out_ext->pNext = NULL;
            out_ext->rayTracingPipeline = in_ext->rayTracingPipeline;
            out_ext->rayTracingPipelineShaderGroupHandleCaptureReplay = in_ext->rayTracingPipelineShaderGroupHandleCaptureReplay;
            out_ext->rayTracingPipelineShaderGroupHandleCaptureReplayMixed = in_ext->rayTracingPipelineShaderGroupHandleCaptureReplayMixed;
            out_ext->rayTracingPipelineTraceRaysIndirect = in_ext->rayTracingPipelineTraceRaysIndirect;
            out_ext->rayTraversalPrimitiveCulling = in_ext->rayTraversalPrimitiveCulling;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR:
        {
            VkPhysicalDeviceRayQueryFeaturesKHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceRayQueryFeaturesKHR *in_ext = (const VkPhysicalDeviceRayQueryFeaturesKHR *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR;
            out_ext->pNext = NULL;
            out_ext->rayQuery = in_ext->rayQuery;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR:
        {
            VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR *in_ext = (const VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR;
            out_ext->pNext = NULL;
            out_ext->rayTracingMaintenance1 = in_ext->rayTracingMaintenance1;
            out_ext->rayTracingPipelineTraceRaysIndirect2 = in_ext->rayTracingPipelineTraceRaysIndirect2;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD:
        {
            VkDeviceMemoryOverallocationCreateInfoAMD *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkDeviceMemoryOverallocationCreateInfoAMD *in_ext = (const VkDeviceMemoryOverallocationCreateInfoAMD *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD;
            out_ext->pNext = NULL;
            out_ext->overallocationBehavior = in_ext->overallocationBehavior;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT:
        {
            VkPhysicalDeviceFragmentDensityMapFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceFragmentDensityMapFeaturesEXT *in_ext = (const VkPhysicalDeviceFragmentDensityMapFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->fragmentDensityMap = in_ext->fragmentDensityMap;
            out_ext->fragmentDensityMapDynamic = in_ext->fragmentDensityMapDynamic;
            out_ext->fragmentDensityMapNonSubsampledImages = in_ext->fragmentDensityMapNonSubsampledImages;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT:
        {
            VkPhysicalDeviceFragmentDensityMap2FeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT *in_ext = (const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->fragmentDensityMapDeferred = in_ext->fragmentDensityMapDeferred;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_QCOM:
        {
            VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM *in_ext = (const VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_QCOM;
            out_ext->pNext = NULL;
            out_ext->fragmentDensityMapOffset = in_ext->fragmentDensityMapOffset;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES:
        {
            VkPhysicalDeviceScalarBlockLayoutFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceScalarBlockLayoutFeatures *in_ext = (const VkPhysicalDeviceScalarBlockLayoutFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES;
            out_ext->pNext = NULL;
            out_ext->scalarBlockLayout = in_ext->scalarBlockLayout;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES:
        {
            VkPhysicalDeviceUniformBufferStandardLayoutFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceUniformBufferStandardLayoutFeatures *in_ext = (const VkPhysicalDeviceUniformBufferStandardLayoutFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES;
            out_ext->pNext = NULL;
            out_ext->uniformBufferStandardLayout = in_ext->uniformBufferStandardLayout;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT:
        {
            VkPhysicalDeviceDepthClipEnableFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceDepthClipEnableFeaturesEXT *in_ext = (const VkPhysicalDeviceDepthClipEnableFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->depthClipEnable = in_ext->depthClipEnable;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT:
        {
            VkPhysicalDeviceMemoryPriorityFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceMemoryPriorityFeaturesEXT *in_ext = (const VkPhysicalDeviceMemoryPriorityFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->memoryPriority = in_ext->memoryPriority;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT:
        {
            VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT *in_ext = (const VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->pageableDeviceLocalMemory = in_ext->pageableDeviceLocalMemory;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES:
        {
            VkPhysicalDeviceBufferDeviceAddressFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceBufferDeviceAddressFeatures *in_ext = (const VkPhysicalDeviceBufferDeviceAddressFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES;
            out_ext->pNext = NULL;
            out_ext->bufferDeviceAddress = in_ext->bufferDeviceAddress;
            out_ext->bufferDeviceAddressCaptureReplay = in_ext->bufferDeviceAddressCaptureReplay;
            out_ext->bufferDeviceAddressMultiDevice = in_ext->bufferDeviceAddressMultiDevice;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT:
        {
            VkPhysicalDeviceBufferDeviceAddressFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT *in_ext = (const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->bufferDeviceAddress = in_ext->bufferDeviceAddress;
            out_ext->bufferDeviceAddressCaptureReplay = in_ext->bufferDeviceAddressCaptureReplay;
            out_ext->bufferDeviceAddressMultiDevice = in_ext->bufferDeviceAddressMultiDevice;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES:
        {
            VkPhysicalDeviceImagelessFramebufferFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceImagelessFramebufferFeatures *in_ext = (const VkPhysicalDeviceImagelessFramebufferFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES;
            out_ext->pNext = NULL;
            out_ext->imagelessFramebuffer = in_ext->imagelessFramebuffer;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES:
        {
            VkPhysicalDeviceTextureCompressionASTCHDRFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceTextureCompressionASTCHDRFeatures *in_ext = (const VkPhysicalDeviceTextureCompressionASTCHDRFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES;
            out_ext->pNext = NULL;
            out_ext->textureCompressionASTC_HDR = in_ext->textureCompressionASTC_HDR;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV:
        {
            VkPhysicalDeviceCooperativeMatrixFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceCooperativeMatrixFeaturesNV *in_ext = (const VkPhysicalDeviceCooperativeMatrixFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->cooperativeMatrix = in_ext->cooperativeMatrix;
            out_ext->cooperativeMatrixRobustBufferAccess = in_ext->cooperativeMatrixRobustBufferAccess;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT:
        {
            VkPhysicalDeviceYcbcrImageArraysFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT *in_ext = (const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->ycbcrImageArrays = in_ext->ycbcrImageArrays;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV:
        {
            VkPhysicalDevicePresentBarrierFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDevicePresentBarrierFeaturesNV *in_ext = (const VkPhysicalDevicePresentBarrierFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->presentBarrier = in_ext->presentBarrier;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR:
        {
            VkPhysicalDevicePerformanceQueryFeaturesKHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDevicePerformanceQueryFeaturesKHR *in_ext = (const VkPhysicalDevicePerformanceQueryFeaturesKHR *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR;
            out_ext->pNext = NULL;
            out_ext->performanceCounterQueryPools = in_ext->performanceCounterQueryPools;
            out_ext->performanceCounterMultipleQueryPools = in_ext->performanceCounterMultipleQueryPools;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV:
        {
            VkPhysicalDeviceCoverageReductionModeFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceCoverageReductionModeFeaturesNV *in_ext = (const VkPhysicalDeviceCoverageReductionModeFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->coverageReductionMode = in_ext->coverageReductionMode;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL:
        {
            VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL *in_ext = (const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL;
            out_ext->pNext = NULL;
            out_ext->shaderIntegerFunctions2 = in_ext->shaderIntegerFunctions2;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR:
        {
            VkPhysicalDeviceShaderClockFeaturesKHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderClockFeaturesKHR *in_ext = (const VkPhysicalDeviceShaderClockFeaturesKHR *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR;
            out_ext->pNext = NULL;
            out_ext->shaderSubgroupClock = in_ext->shaderSubgroupClock;
            out_ext->shaderDeviceClock = in_ext->shaderDeviceClock;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT:
        {
            VkPhysicalDeviceIndexTypeUint8FeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceIndexTypeUint8FeaturesEXT *in_ext = (const VkPhysicalDeviceIndexTypeUint8FeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->indexTypeUint8 = in_ext->indexTypeUint8;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV:
        {
            VkPhysicalDeviceShaderSMBuiltinsFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV *in_ext = (const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->shaderSMBuiltins = in_ext->shaderSMBuiltins;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT:
        {
            VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT *in_ext = (const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->fragmentShaderSampleInterlock = in_ext->fragmentShaderSampleInterlock;
            out_ext->fragmentShaderPixelInterlock = in_ext->fragmentShaderPixelInterlock;
            out_ext->fragmentShaderShadingRateInterlock = in_ext->fragmentShaderShadingRateInterlock;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES:
        {
            VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures *in_ext = (const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES;
            out_ext->pNext = NULL;
            out_ext->separateDepthStencilLayouts = in_ext->separateDepthStencilLayouts;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT:
        {
            VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT *in_ext = (const VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->primitiveTopologyListRestart = in_ext->primitiveTopologyListRestart;
            out_ext->primitiveTopologyPatchListRestart = in_ext->primitiveTopologyPatchListRestart;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR:
        {
            VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR *in_ext = (const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR;
            out_ext->pNext = NULL;
            out_ext->pipelineExecutableInfo = in_ext->pipelineExecutableInfo;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES:
        {
            VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures *in_ext = (const VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES;
            out_ext->pNext = NULL;
            out_ext->shaderDemoteToHelperInvocation = in_ext->shaderDemoteToHelperInvocation;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT:
        {
            VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT *in_ext = (const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->texelBufferAlignment = in_ext->texelBufferAlignment;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES:
        {
            VkPhysicalDeviceSubgroupSizeControlFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceSubgroupSizeControlFeatures *in_ext = (const VkPhysicalDeviceSubgroupSizeControlFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES;
            out_ext->pNext = NULL;
            out_ext->subgroupSizeControl = in_ext->subgroupSizeControl;
            out_ext->computeFullSubgroups = in_ext->computeFullSubgroups;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT:
        {
            VkPhysicalDeviceLineRasterizationFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceLineRasterizationFeaturesEXT *in_ext = (const VkPhysicalDeviceLineRasterizationFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->rectangularLines = in_ext->rectangularLines;
            out_ext->bresenhamLines = in_ext->bresenhamLines;
            out_ext->smoothLines = in_ext->smoothLines;
            out_ext->stippledRectangularLines = in_ext->stippledRectangularLines;
            out_ext->stippledBresenhamLines = in_ext->stippledBresenhamLines;
            out_ext->stippledSmoothLines = in_ext->stippledSmoothLines;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES:
        {
            VkPhysicalDevicePipelineCreationCacheControlFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDevicePipelineCreationCacheControlFeatures *in_ext = (const VkPhysicalDevicePipelineCreationCacheControlFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES;
            out_ext->pNext = NULL;
            out_ext->pipelineCreationCacheControl = in_ext->pipelineCreationCacheControl;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES:
        {
            VkPhysicalDeviceVulkan11Features *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceVulkan11Features *in_ext = (const VkPhysicalDeviceVulkan11Features *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES;
            out_ext->pNext = NULL;
            out_ext->storageBuffer16BitAccess = in_ext->storageBuffer16BitAccess;
            out_ext->uniformAndStorageBuffer16BitAccess = in_ext->uniformAndStorageBuffer16BitAccess;
            out_ext->storagePushConstant16 = in_ext->storagePushConstant16;
            out_ext->storageInputOutput16 = in_ext->storageInputOutput16;
            out_ext->multiview = in_ext->multiview;
            out_ext->multiviewGeometryShader = in_ext->multiviewGeometryShader;
            out_ext->multiviewTessellationShader = in_ext->multiviewTessellationShader;
            out_ext->variablePointersStorageBuffer = in_ext->variablePointersStorageBuffer;
            out_ext->variablePointers = in_ext->variablePointers;
            out_ext->protectedMemory = in_ext->protectedMemory;
            out_ext->samplerYcbcrConversion = in_ext->samplerYcbcrConversion;
            out_ext->shaderDrawParameters = in_ext->shaderDrawParameters;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES:
        {
            VkPhysicalDeviceVulkan12Features *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceVulkan12Features *in_ext = (const VkPhysicalDeviceVulkan12Features *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES;
            out_ext->pNext = NULL;
            out_ext->samplerMirrorClampToEdge = in_ext->samplerMirrorClampToEdge;
            out_ext->drawIndirectCount = in_ext->drawIndirectCount;
            out_ext->storageBuffer8BitAccess = in_ext->storageBuffer8BitAccess;
            out_ext->uniformAndStorageBuffer8BitAccess = in_ext->uniformAndStorageBuffer8BitAccess;
            out_ext->storagePushConstant8 = in_ext->storagePushConstant8;
            out_ext->shaderBufferInt64Atomics = in_ext->shaderBufferInt64Atomics;
            out_ext->shaderSharedInt64Atomics = in_ext->shaderSharedInt64Atomics;
            out_ext->shaderFloat16 = in_ext->shaderFloat16;
            out_ext->shaderInt8 = in_ext->shaderInt8;
            out_ext->descriptorIndexing = in_ext->descriptorIndexing;
            out_ext->shaderInputAttachmentArrayDynamicIndexing = in_ext->shaderInputAttachmentArrayDynamicIndexing;
            out_ext->shaderUniformTexelBufferArrayDynamicIndexing = in_ext->shaderUniformTexelBufferArrayDynamicIndexing;
            out_ext->shaderStorageTexelBufferArrayDynamicIndexing = in_ext->shaderStorageTexelBufferArrayDynamicIndexing;
            out_ext->shaderUniformBufferArrayNonUniformIndexing = in_ext->shaderUniformBufferArrayNonUniformIndexing;
            out_ext->shaderSampledImageArrayNonUniformIndexing = in_ext->shaderSampledImageArrayNonUniformIndexing;
            out_ext->shaderStorageBufferArrayNonUniformIndexing = in_ext->shaderStorageBufferArrayNonUniformIndexing;
            out_ext->shaderStorageImageArrayNonUniformIndexing = in_ext->shaderStorageImageArrayNonUniformIndexing;
            out_ext->shaderInputAttachmentArrayNonUniformIndexing = in_ext->shaderInputAttachmentArrayNonUniformIndexing;
            out_ext->shaderUniformTexelBufferArrayNonUniformIndexing = in_ext->shaderUniformTexelBufferArrayNonUniformIndexing;
            out_ext->shaderStorageTexelBufferArrayNonUniformIndexing = in_ext->shaderStorageTexelBufferArrayNonUniformIndexing;
            out_ext->descriptorBindingUniformBufferUpdateAfterBind = in_ext->descriptorBindingUniformBufferUpdateAfterBind;
            out_ext->descriptorBindingSampledImageUpdateAfterBind = in_ext->descriptorBindingSampledImageUpdateAfterBind;
            out_ext->descriptorBindingStorageImageUpdateAfterBind = in_ext->descriptorBindingStorageImageUpdateAfterBind;
            out_ext->descriptorBindingStorageBufferUpdateAfterBind = in_ext->descriptorBindingStorageBufferUpdateAfterBind;
            out_ext->descriptorBindingUniformTexelBufferUpdateAfterBind = in_ext->descriptorBindingUniformTexelBufferUpdateAfterBind;
            out_ext->descriptorBindingStorageTexelBufferUpdateAfterBind = in_ext->descriptorBindingStorageTexelBufferUpdateAfterBind;
            out_ext->descriptorBindingUpdateUnusedWhilePending = in_ext->descriptorBindingUpdateUnusedWhilePending;
            out_ext->descriptorBindingPartiallyBound = in_ext->descriptorBindingPartiallyBound;
            out_ext->descriptorBindingVariableDescriptorCount = in_ext->descriptorBindingVariableDescriptorCount;
            out_ext->runtimeDescriptorArray = in_ext->runtimeDescriptorArray;
            out_ext->samplerFilterMinmax = in_ext->samplerFilterMinmax;
            out_ext->scalarBlockLayout = in_ext->scalarBlockLayout;
            out_ext->imagelessFramebuffer = in_ext->imagelessFramebuffer;
            out_ext->uniformBufferStandardLayout = in_ext->uniformBufferStandardLayout;
            out_ext->shaderSubgroupExtendedTypes = in_ext->shaderSubgroupExtendedTypes;
            out_ext->separateDepthStencilLayouts = in_ext->separateDepthStencilLayouts;
            out_ext->hostQueryReset = in_ext->hostQueryReset;
            out_ext->timelineSemaphore = in_ext->timelineSemaphore;
            out_ext->bufferDeviceAddress = in_ext->bufferDeviceAddress;
            out_ext->bufferDeviceAddressCaptureReplay = in_ext->bufferDeviceAddressCaptureReplay;
            out_ext->bufferDeviceAddressMultiDevice = in_ext->bufferDeviceAddressMultiDevice;
            out_ext->vulkanMemoryModel = in_ext->vulkanMemoryModel;
            out_ext->vulkanMemoryModelDeviceScope = in_ext->vulkanMemoryModelDeviceScope;
            out_ext->vulkanMemoryModelAvailabilityVisibilityChains = in_ext->vulkanMemoryModelAvailabilityVisibilityChains;
            out_ext->shaderOutputViewportIndex = in_ext->shaderOutputViewportIndex;
            out_ext->shaderOutputLayer = in_ext->shaderOutputLayer;
            out_ext->subgroupBroadcastDynamicId = in_ext->subgroupBroadcastDynamicId;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES:
        {
            VkPhysicalDeviceVulkan13Features *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceVulkan13Features *in_ext = (const VkPhysicalDeviceVulkan13Features *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES;
            out_ext->pNext = NULL;
            out_ext->robustImageAccess = in_ext->robustImageAccess;
            out_ext->inlineUniformBlock = in_ext->inlineUniformBlock;
            out_ext->descriptorBindingInlineUniformBlockUpdateAfterBind = in_ext->descriptorBindingInlineUniformBlockUpdateAfterBind;
            out_ext->pipelineCreationCacheControl = in_ext->pipelineCreationCacheControl;
            out_ext->privateData = in_ext->privateData;
            out_ext->shaderDemoteToHelperInvocation = in_ext->shaderDemoteToHelperInvocation;
            out_ext->shaderTerminateInvocation = in_ext->shaderTerminateInvocation;
            out_ext->subgroupSizeControl = in_ext->subgroupSizeControl;
            out_ext->computeFullSubgroups = in_ext->computeFullSubgroups;
            out_ext->synchronization2 = in_ext->synchronization2;
            out_ext->textureCompressionASTC_HDR = in_ext->textureCompressionASTC_HDR;
            out_ext->shaderZeroInitializeWorkgroupMemory = in_ext->shaderZeroInitializeWorkgroupMemory;
            out_ext->dynamicRendering = in_ext->dynamicRendering;
            out_ext->shaderIntegerDotProduct = in_ext->shaderIntegerDotProduct;
            out_ext->maintenance4 = in_ext->maintenance4;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD:
        {
            VkPhysicalDeviceCoherentMemoryFeaturesAMD *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceCoherentMemoryFeaturesAMD *in_ext = (const VkPhysicalDeviceCoherentMemoryFeaturesAMD *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD;
            out_ext->pNext = NULL;
            out_ext->deviceCoherentMemory = in_ext->deviceCoherentMemory;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT:
        {
            VkPhysicalDeviceCustomBorderColorFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceCustomBorderColorFeaturesEXT *in_ext = (const VkPhysicalDeviceCustomBorderColorFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->customBorderColors = in_ext->customBorderColors;
            out_ext->customBorderColorWithoutFormat = in_ext->customBorderColorWithoutFormat;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT:
        {
            VkPhysicalDeviceBorderColorSwizzleFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceBorderColorSwizzleFeaturesEXT *in_ext = (const VkPhysicalDeviceBorderColorSwizzleFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->borderColorSwizzle = in_ext->borderColorSwizzle;
            out_ext->borderColorSwizzleFromImage = in_ext->borderColorSwizzleFromImage;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT:
        {
            VkPhysicalDeviceExtendedDynamicStateFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT *in_ext = (const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->extendedDynamicState = in_ext->extendedDynamicState;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT:
        {
            VkPhysicalDeviceExtendedDynamicState2FeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceExtendedDynamicState2FeaturesEXT *in_ext = (const VkPhysicalDeviceExtendedDynamicState2FeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->extendedDynamicState2 = in_ext->extendedDynamicState2;
            out_ext->extendedDynamicState2LogicOp = in_ext->extendedDynamicState2LogicOp;
            out_ext->extendedDynamicState2PatchControlPoints = in_ext->extendedDynamicState2PatchControlPoints;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT:
        {
            VkPhysicalDeviceExtendedDynamicState3FeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceExtendedDynamicState3FeaturesEXT *in_ext = (const VkPhysicalDeviceExtendedDynamicState3FeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->extendedDynamicState3TessellationDomainOrigin = in_ext->extendedDynamicState3TessellationDomainOrigin;
            out_ext->extendedDynamicState3DepthClampEnable = in_ext->extendedDynamicState3DepthClampEnable;
            out_ext->extendedDynamicState3PolygonMode = in_ext->extendedDynamicState3PolygonMode;
            out_ext->extendedDynamicState3RasterizationSamples = in_ext->extendedDynamicState3RasterizationSamples;
            out_ext->extendedDynamicState3SampleMask = in_ext->extendedDynamicState3SampleMask;
            out_ext->extendedDynamicState3AlphaToCoverageEnable = in_ext->extendedDynamicState3AlphaToCoverageEnable;
            out_ext->extendedDynamicState3AlphaToOneEnable = in_ext->extendedDynamicState3AlphaToOneEnable;
            out_ext->extendedDynamicState3LogicOpEnable = in_ext->extendedDynamicState3LogicOpEnable;
            out_ext->extendedDynamicState3ColorBlendEnable = in_ext->extendedDynamicState3ColorBlendEnable;
            out_ext->extendedDynamicState3ColorBlendEquation = in_ext->extendedDynamicState3ColorBlendEquation;
            out_ext->extendedDynamicState3ColorWriteMask = in_ext->extendedDynamicState3ColorWriteMask;
            out_ext->extendedDynamicState3RasterizationStream = in_ext->extendedDynamicState3RasterizationStream;
            out_ext->extendedDynamicState3ConservativeRasterizationMode = in_ext->extendedDynamicState3ConservativeRasterizationMode;
            out_ext->extendedDynamicState3ExtraPrimitiveOverestimationSize = in_ext->extendedDynamicState3ExtraPrimitiveOverestimationSize;
            out_ext->extendedDynamicState3DepthClipEnable = in_ext->extendedDynamicState3DepthClipEnable;
            out_ext->extendedDynamicState3SampleLocationsEnable = in_ext->extendedDynamicState3SampleLocationsEnable;
            out_ext->extendedDynamicState3ColorBlendAdvanced = in_ext->extendedDynamicState3ColorBlendAdvanced;
            out_ext->extendedDynamicState3ProvokingVertexMode = in_ext->extendedDynamicState3ProvokingVertexMode;
            out_ext->extendedDynamicState3LineRasterizationMode = in_ext->extendedDynamicState3LineRasterizationMode;
            out_ext->extendedDynamicState3LineStippleEnable = in_ext->extendedDynamicState3LineStippleEnable;
            out_ext->extendedDynamicState3DepthClipNegativeOneToOne = in_ext->extendedDynamicState3DepthClipNegativeOneToOne;
            out_ext->extendedDynamicState3ViewportWScalingEnable = in_ext->extendedDynamicState3ViewportWScalingEnable;
            out_ext->extendedDynamicState3ViewportSwizzle = in_ext->extendedDynamicState3ViewportSwizzle;
            out_ext->extendedDynamicState3CoverageToColorEnable = in_ext->extendedDynamicState3CoverageToColorEnable;
            out_ext->extendedDynamicState3CoverageToColorLocation = in_ext->extendedDynamicState3CoverageToColorLocation;
            out_ext->extendedDynamicState3CoverageModulationMode = in_ext->extendedDynamicState3CoverageModulationMode;
            out_ext->extendedDynamicState3CoverageModulationTableEnable = in_ext->extendedDynamicState3CoverageModulationTableEnable;
            out_ext->extendedDynamicState3CoverageModulationTable = in_ext->extendedDynamicState3CoverageModulationTable;
            out_ext->extendedDynamicState3CoverageReductionMode = in_ext->extendedDynamicState3CoverageReductionMode;
            out_ext->extendedDynamicState3RepresentativeFragmentTestEnable = in_ext->extendedDynamicState3RepresentativeFragmentTestEnable;
            out_ext->extendedDynamicState3ShadingRateImageEnable = in_ext->extendedDynamicState3ShadingRateImageEnable;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV:
        {
            VkPhysicalDeviceDiagnosticsConfigFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceDiagnosticsConfigFeaturesNV *in_ext = (const VkPhysicalDeviceDiagnosticsConfigFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->diagnosticsConfig = in_ext->diagnosticsConfig;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV:
        {
            VkDeviceDiagnosticsConfigCreateInfoNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkDeviceDiagnosticsConfigCreateInfoNV *in_ext = (const VkDeviceDiagnosticsConfigCreateInfoNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV;
            out_ext->pNext = NULL;
            out_ext->flags = in_ext->flags;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES:
        {
            VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures *in_ext = (const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES;
            out_ext->pNext = NULL;
            out_ext->shaderZeroInitializeWorkgroupMemory = in_ext->shaderZeroInitializeWorkgroupMemory;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR:
        {
            VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR *in_ext = (const VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR;
            out_ext->pNext = NULL;
            out_ext->shaderSubgroupUniformControlFlow = in_ext->shaderSubgroupUniformControlFlow;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT:
        {
            VkPhysicalDeviceRobustness2FeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceRobustness2FeaturesEXT *in_ext = (const VkPhysicalDeviceRobustness2FeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->robustBufferAccess2 = in_ext->robustBufferAccess2;
            out_ext->robustImageAccess2 = in_ext->robustImageAccess2;
            out_ext->nullDescriptor = in_ext->nullDescriptor;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES:
        {
            VkPhysicalDeviceImageRobustnessFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceImageRobustnessFeatures *in_ext = (const VkPhysicalDeviceImageRobustnessFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES;
            out_ext->pNext = NULL;
            out_ext->robustImageAccess = in_ext->robustImageAccess;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR:
        {
            VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR *in_ext = (const VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR;
            out_ext->pNext = NULL;
            out_ext->workgroupMemoryExplicitLayout = in_ext->workgroupMemoryExplicitLayout;
            out_ext->workgroupMemoryExplicitLayoutScalarBlockLayout = in_ext->workgroupMemoryExplicitLayoutScalarBlockLayout;
            out_ext->workgroupMemoryExplicitLayout8BitAccess = in_ext->workgroupMemoryExplicitLayout8BitAccess;
            out_ext->workgroupMemoryExplicitLayout16BitAccess = in_ext->workgroupMemoryExplicitLayout16BitAccess;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT:
        {
            VkPhysicalDevice4444FormatsFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDevice4444FormatsFeaturesEXT *in_ext = (const VkPhysicalDevice4444FormatsFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->formatA4R4G4B4 = in_ext->formatA4R4G4B4;
            out_ext->formatA4B4G4R4 = in_ext->formatA4B4G4R4;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI:
        {
            VkPhysicalDeviceSubpassShadingFeaturesHUAWEI *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceSubpassShadingFeaturesHUAWEI *in_ext = (const VkPhysicalDeviceSubpassShadingFeaturesHUAWEI *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI;
            out_ext->pNext = NULL;
            out_ext->subpassShading = in_ext->subpassShading;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT:
        {
            VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT *in_ext = (const VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->shaderImageInt64Atomics = in_ext->shaderImageInt64Atomics;
            out_ext->sparseImageInt64Atomics = in_ext->sparseImageInt64Atomics;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR:
        {
            VkPhysicalDeviceFragmentShadingRateFeaturesKHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceFragmentShadingRateFeaturesKHR *in_ext = (const VkPhysicalDeviceFragmentShadingRateFeaturesKHR *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR;
            out_ext->pNext = NULL;
            out_ext->pipelineFragmentShadingRate = in_ext->pipelineFragmentShadingRate;
            out_ext->primitiveFragmentShadingRate = in_ext->primitiveFragmentShadingRate;
            out_ext->attachmentFragmentShadingRate = in_ext->attachmentFragmentShadingRate;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES:
        {
            VkPhysicalDeviceShaderTerminateInvocationFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderTerminateInvocationFeatures *in_ext = (const VkPhysicalDeviceShaderTerminateInvocationFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES;
            out_ext->pNext = NULL;
            out_ext->shaderTerminateInvocation = in_ext->shaderTerminateInvocation;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV:
        {
            VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV *in_ext = (const VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->fragmentShadingRateEnums = in_ext->fragmentShadingRateEnums;
            out_ext->supersampleFragmentShadingRates = in_ext->supersampleFragmentShadingRates;
            out_ext->noInvocationFragmentShadingRates = in_ext->noInvocationFragmentShadingRates;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT:
        {
            VkPhysicalDeviceImage2DViewOf3DFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceImage2DViewOf3DFeaturesEXT *in_ext = (const VkPhysicalDeviceImage2DViewOf3DFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->image2DViewOf3D = in_ext->image2DViewOf3D;
            out_ext->sampler2DViewOf3D = in_ext->sampler2DViewOf3D;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT:
        {
            VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT *in_ext = (const VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->mutableDescriptorType = in_ext->mutableDescriptorType;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT:
        {
            VkPhysicalDeviceDepthClipControlFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceDepthClipControlFeaturesEXT *in_ext = (const VkPhysicalDeviceDepthClipControlFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->depthClipControl = in_ext->depthClipControl;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT:
        {
            VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT *in_ext = (const VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->vertexInputDynamicState = in_ext->vertexInputDynamicState;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT:
        {
            VkPhysicalDeviceColorWriteEnableFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceColorWriteEnableFeaturesEXT *in_ext = (const VkPhysicalDeviceColorWriteEnableFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->colorWriteEnable = in_ext->colorWriteEnable;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES:
        {
            VkPhysicalDeviceSynchronization2Features *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceSynchronization2Features *in_ext = (const VkPhysicalDeviceSynchronization2Features *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES;
            out_ext->pNext = NULL;
            out_ext->synchronization2 = in_ext->synchronization2;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT:
        {
            VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT *in_ext = (const VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->primitivesGeneratedQuery = in_ext->primitivesGeneratedQuery;
            out_ext->primitivesGeneratedQueryWithRasterizerDiscard = in_ext->primitivesGeneratedQueryWithRasterizerDiscard;
            out_ext->primitivesGeneratedQueryWithNonZeroStreams = in_ext->primitivesGeneratedQueryWithNonZeroStreams;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT:
        {
            VkPhysicalDeviceLegacyDitheringFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceLegacyDitheringFeaturesEXT *in_ext = (const VkPhysicalDeviceLegacyDitheringFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->legacyDithering = in_ext->legacyDithering;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT:
        {
            VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT *in_ext = (const VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->multisampledRenderToSingleSampled = in_ext->multisampledRenderToSingleSampled;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES_EXT:
        {
            VkPhysicalDevicePipelineProtectedAccessFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDevicePipelineProtectedAccessFeaturesEXT *in_ext = (const VkPhysicalDevicePipelineProtectedAccessFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->pipelineProtectedAccess = in_ext->pipelineProtectedAccess;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV:
        {
            VkPhysicalDeviceInheritedViewportScissorFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceInheritedViewportScissorFeaturesNV *in_ext = (const VkPhysicalDeviceInheritedViewportScissorFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->inheritedViewportScissor2D = in_ext->inheritedViewportScissor2D;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT:
        {
            VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT *in_ext = (const VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->ycbcr2plane444Formats = in_ext->ycbcr2plane444Formats;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT:
        {
            VkPhysicalDeviceProvokingVertexFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceProvokingVertexFeaturesEXT *in_ext = (const VkPhysicalDeviceProvokingVertexFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->provokingVertexLast = in_ext->provokingVertexLast;
            out_ext->transformFeedbackPreservesProvokingVertex = in_ext->transformFeedbackPreservesProvokingVertex;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES:
        {
            VkPhysicalDeviceShaderIntegerDotProductFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderIntegerDotProductFeatures *in_ext = (const VkPhysicalDeviceShaderIntegerDotProductFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES;
            out_ext->pNext = NULL;
            out_ext->shaderIntegerDotProduct = in_ext->shaderIntegerDotProduct;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR:
        {
            VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR *in_ext = (const VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR;
            out_ext->pNext = NULL;
            out_ext->fragmentShaderBarycentric = in_ext->fragmentShaderBarycentric;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV:
        {
            VkPhysicalDeviceRayTracingMotionBlurFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceRayTracingMotionBlurFeaturesNV *in_ext = (const VkPhysicalDeviceRayTracingMotionBlurFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->rayTracingMotionBlur = in_ext->rayTracingMotionBlur;
            out_ext->rayTracingMotionBlurPipelineTraceRaysIndirect = in_ext->rayTracingMotionBlurPipelineTraceRaysIndirect;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT:
        {
            VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT *in_ext = (const VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->formatRgba10x6WithoutYCbCrSampler = in_ext->formatRgba10x6WithoutYCbCrSampler;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES:
        {
            VkPhysicalDeviceDynamicRenderingFeatures *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceDynamicRenderingFeatures *in_ext = (const VkPhysicalDeviceDynamicRenderingFeatures *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES;
            out_ext->pNext = NULL;
            out_ext->dynamicRendering = in_ext->dynamicRendering;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT:
        {
            VkPhysicalDeviceImageViewMinLodFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceImageViewMinLodFeaturesEXT *in_ext = (const VkPhysicalDeviceImageViewMinLodFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->minLod = in_ext->minLod;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT:
        {
            VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT *in_ext = (const VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->rasterizationOrderColorAttachmentAccess = in_ext->rasterizationOrderColorAttachmentAccess;
            out_ext->rasterizationOrderDepthAttachmentAccess = in_ext->rasterizationOrderDepthAttachmentAccess;
            out_ext->rasterizationOrderStencilAttachmentAccess = in_ext->rasterizationOrderStencilAttachmentAccess;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV:
        {
            VkPhysicalDeviceLinearColorAttachmentFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceLinearColorAttachmentFeaturesNV *in_ext = (const VkPhysicalDeviceLinearColorAttachmentFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->linearColorAttachment = in_ext->linearColorAttachment;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT:
        {
            VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT *in_ext = (const VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->graphicsPipelineLibrary = in_ext->graphicsPipelineLibrary;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE:
        {
            VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE *in_ext = (const VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE;
            out_ext->pNext = NULL;
            out_ext->descriptorSetHostMapping = in_ext->descriptorSetHostMapping;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT:
        {
            VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT *in_ext = (const VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->shaderModuleIdentifier = in_ext->shaderModuleIdentifier;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT:
        {
            VkPhysicalDeviceImageCompressionControlFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceImageCompressionControlFeaturesEXT *in_ext = (const VkPhysicalDeviceImageCompressionControlFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->imageCompressionControl = in_ext->imageCompressionControl;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT:
        {
            VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT *in_ext = (const VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->imageCompressionControlSwapchain = in_ext->imageCompressionControlSwapchain;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT:
        {
            VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT *in_ext = (const VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->subpassMergeFeedback = in_ext->subpassMergeFeedback;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT:
        {
            VkPhysicalDeviceOpacityMicromapFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceOpacityMicromapFeaturesEXT *in_ext = (const VkPhysicalDeviceOpacityMicromapFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->micromap = in_ext->micromap;
            out_ext->micromapCaptureReplay = in_ext->micromapCaptureReplay;
            out_ext->micromapHostCommands = in_ext->micromapHostCommands;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT:
        {
            VkPhysicalDevicePipelinePropertiesFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDevicePipelinePropertiesFeaturesEXT *in_ext = (const VkPhysicalDevicePipelinePropertiesFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->pipelinePropertiesIdentifier = in_ext->pipelinePropertiesIdentifier;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD:
        {
            VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD *in_ext = (const VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD;
            out_ext->pNext = NULL;
            out_ext->shaderEarlyAndLateFragmentTests = in_ext->shaderEarlyAndLateFragmentTests;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT:
        {
            VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT *in_ext = (const VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->nonSeamlessCubeMap = in_ext->nonSeamlessCubeMap;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES_EXT:
        {
            VkPhysicalDevicePipelineRobustnessFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDevicePipelineRobustnessFeaturesEXT *in_ext = (const VkPhysicalDevicePipelineRobustnessFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->pipelineRobustness = in_ext->pipelineRobustness;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM:
        {
            VkPhysicalDeviceImageProcessingFeaturesQCOM *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceImageProcessingFeaturesQCOM *in_ext = (const VkPhysicalDeviceImageProcessingFeaturesQCOM *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM;
            out_ext->pNext = NULL;
            out_ext->textureSampleWeighted = in_ext->textureSampleWeighted;
            out_ext->textureBoxFilter = in_ext->textureBoxFilter;
            out_ext->textureBlockMatch = in_ext->textureBlockMatch;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM:
        {
            VkPhysicalDeviceTilePropertiesFeaturesQCOM *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceTilePropertiesFeaturesQCOM *in_ext = (const VkPhysicalDeviceTilePropertiesFeaturesQCOM *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM;
            out_ext->pNext = NULL;
            out_ext->tileProperties = in_ext->tileProperties;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT:
        {
            VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT *in_ext = (const VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->attachmentFeedbackLoopLayout = in_ext->attachmentFeedbackLoopLayout;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_EXT:
        {
            VkPhysicalDeviceDepthClampZeroOneFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceDepthClampZeroOneFeaturesEXT *in_ext = (const VkPhysicalDeviceDepthClampZeroOneFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->depthClampZeroOne = in_ext->depthClampZeroOne;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT:
        {
            VkPhysicalDeviceAddressBindingReportFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceAddressBindingReportFeaturesEXT *in_ext = (const VkPhysicalDeviceAddressBindingReportFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->reportAddressBinding = in_ext->reportAddressBinding;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV:
        {
            VkPhysicalDeviceOpticalFlowFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceOpticalFlowFeaturesNV *in_ext = (const VkPhysicalDeviceOpticalFlowFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->opticalFlow = in_ext->opticalFlow;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FAULT_FEATURES_EXT:
        {
            VkPhysicalDeviceFaultFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceFaultFeaturesEXT *in_ext = (const VkPhysicalDeviceFaultFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FAULT_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->deviceFault = in_ext->deviceFault;
            out_ext->deviceFaultVendorBinary = in_ext->deviceFaultVendorBinary;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM:
        {
            VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM *in_ext = (const VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM;
            out_ext->pNext = NULL;
            out_ext->shaderCoreBuiltins = in_ext->shaderCoreBuiltins;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV:
        {
            VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV *in_ext = (const VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV;
            out_ext->pNext = NULL;
            out_ext->rayTracingInvocationReorder = in_ext->rayTracingInvocationReorder;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        default:
            FIXME("Unhandled sType %u.", in_header->sType);
            break;
        }
    }
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkFramebufferCreateInfo_win32_to_host(const VkFramebufferCreateInfo *in, VkFramebufferCreateInfo_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->flags = in->flags;
    out->renderPass = in->renderPass;
    out->attachmentCount = in->attachmentCount;
    out->pAttachments = in->pAttachments;
    out->width = in->width;
    out->height = in->height;
    out->layers = in->layers;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkPipelineShaderStageCreateInfo_host *convert_VkPipelineShaderStageCreateInfo_array_win32_to_host(struct conversion_context *ctx, const VkPipelineShaderStageCreateInfo *in, uint32_t count)
{
    VkPipelineShaderStageCreateInfo_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkPipelineShaderStageCreateInfo_win32_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkGraphicsPipelineCreateInfo_win32_to_host(struct conversion_context *ctx, const VkGraphicsPipelineCreateInfo *in, VkGraphicsPipelineCreateInfo_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->flags = in->flags;
    out->stageCount = in->stageCount;
    out->pStages = convert_VkPipelineShaderStageCreateInfo_array_win32_to_host(ctx, in->pStages, in->stageCount);
    out->pVertexInputState = in->pVertexInputState;
    out->pInputAssemblyState = in->pInputAssemblyState;
    out->pTessellationState = in->pTessellationState;
    out->pViewportState = in->pViewportState;
    out->pRasterizationState = in->pRasterizationState;
    out->pMultisampleState = in->pMultisampleState;
    out->pDepthStencilState = in->pDepthStencilState;
    out->pColorBlendState = in->pColorBlendState;
    out->pDynamicState = in->pDynamicState;
    out->layout = in->layout;
    out->renderPass = in->renderPass;
    out->subpass = in->subpass;
    out->basePipelineHandle = in->basePipelineHandle;
    out->basePipelineIndex = in->basePipelineIndex;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkGraphicsPipelineCreateInfo_host *convert_VkGraphicsPipelineCreateInfo_array_win32_to_host(struct conversion_context *ctx, const VkGraphicsPipelineCreateInfo *in, uint32_t count)
{
    VkGraphicsPipelineCreateInfo_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkGraphicsPipelineCreateInfo_win32_to_host(ctx, &in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkImageViewCreateInfo_win32_to_host(const VkImageViewCreateInfo *in, VkImageViewCreateInfo_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->flags = in->flags;
    out->image = in->image;
    out->viewType = in->viewType;
    out->format = in->format;
    out->components = in->components;
    out->subresourceRange = in->subresourceRange;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkIndirectCommandsLayoutTokenNV_win32_to_host(const VkIndirectCommandsLayoutTokenNV *in, VkIndirectCommandsLayoutTokenNV_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->tokenType = in->tokenType;
    out->stream = in->stream;
    out->offset = in->offset;
    out->vertexBindingUnit = in->vertexBindingUnit;
    out->vertexDynamicStride = in->vertexDynamicStride;
    out->pushconstantPipelineLayout = in->pushconstantPipelineLayout;
    out->pushconstantShaderStageFlags = in->pushconstantShaderStageFlags;
    out->pushconstantOffset = in->pushconstantOffset;
    out->pushconstantSize = in->pushconstantSize;
    out->indirectStateFlags = in->indirectStateFlags;
    out->indexTypeCount = in->indexTypeCount;
    out->pIndexTypes = in->pIndexTypes;
    out->pIndexTypeValues = in->pIndexTypeValues;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkIndirectCommandsLayoutTokenNV_host *convert_VkIndirectCommandsLayoutTokenNV_array_win32_to_host(struct conversion_context *ctx, const VkIndirectCommandsLayoutTokenNV *in, uint32_t count)
{
    VkIndirectCommandsLayoutTokenNV_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkIndirectCommandsLayoutTokenNV_win32_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkIndirectCommandsLayoutCreateInfoNV_win32_to_host(struct conversion_context *ctx, const VkIndirectCommandsLayoutCreateInfoNV *in, VkIndirectCommandsLayoutCreateInfoNV_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->flags = in->flags;
    out->pipelineBindPoint = in->pipelineBindPoint;
    out->tokenCount = in->tokenCount;
    out->pTokens = convert_VkIndirectCommandsLayoutTokenNV_array_win32_to_host(ctx, in->pTokens, in->tokenCount);
    out->streamCount = in->streamCount;
    out->pStreamStrides = in->pStreamStrides;
}
#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)
static inline void convert_VkInstanceCreateInfo_win64_to_host(struct conversion_context *ctx, const VkInstanceCreateInfo *in, VkInstanceCreateInfo *out)
{
    const VkBaseInStructure *in_header;
    VkBaseOutStructure *out_header = (void *)out;

    if (!in) return;

    out->sType = in->sType;
    out->pNext = NULL;
    out->flags = in->flags;
    out->pApplicationInfo = in->pApplicationInfo;
    out->enabledLayerCount = in->enabledLayerCount;
    out->ppEnabledLayerNames = in->ppEnabledLayerNames;
    out->enabledExtensionCount = in->enabledExtensionCount;
    out->ppEnabledExtensionNames = in->ppEnabledExtensionNames;

    for (in_header = (void *)in->pNext; in_header; in_header = (void *)in_header->pNext)
    {
        switch (in_header->sType)
        {
        case VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO:
            break;
        case VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT:
        {
            VkDebugReportCallbackCreateInfoEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkDebugReportCallbackCreateInfoEXT *in_ext = (const VkDebugReportCallbackCreateInfoEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT;
            out_ext->pNext = NULL;
            out_ext->flags = in_ext->flags;
            out_ext->pfnCallback = in_ext->pfnCallback;
            out_ext->pUserData = in_ext->pUserData;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT:
        {
            VkValidationFlagsEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkValidationFlagsEXT *in_ext = (const VkValidationFlagsEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT;
            out_ext->pNext = NULL;
            out_ext->disabledValidationCheckCount = in_ext->disabledValidationCheckCount;
            out_ext->pDisabledValidationChecks = in_ext->pDisabledValidationChecks;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT:
        {
            VkValidationFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkValidationFeaturesEXT *in_ext = (const VkValidationFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->enabledValidationFeatureCount = in_ext->enabledValidationFeatureCount;
            out_ext->pEnabledValidationFeatures = in_ext->pEnabledValidationFeatures;
            out_ext->disabledValidationFeatureCount = in_ext->disabledValidationFeatureCount;
            out_ext->pDisabledValidationFeatures = in_ext->pDisabledValidationFeatures;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT:
        {
            VkDebugUtilsMessengerCreateInfoEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkDebugUtilsMessengerCreateInfoEXT *in_ext = (const VkDebugUtilsMessengerCreateInfoEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT;
            out_ext->pNext = NULL;
            out_ext->flags = in_ext->flags;
            out_ext->messageSeverity = in_ext->messageSeverity;
            out_ext->messageType = in_ext->messageType;
            out_ext->pfnUserCallback = in_ext->pfnUserCallback;
            out_ext->pUserData = in_ext->pUserData;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        default:
            FIXME("Unhandled sType %u.", in_header->sType);
            break;
        }
    }
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkInstanceCreateInfo_win32_to_host(struct conversion_context *ctx, const VkInstanceCreateInfo *in, VkInstanceCreateInfo *out)
{
    const VkBaseInStructure *in_header;
    VkBaseOutStructure *out_header = (void *)out;

    if (!in) return;

    out->sType = in->sType;
    out->pNext = NULL;
    out->flags = in->flags;
    out->pApplicationInfo = in->pApplicationInfo;
    out->enabledLayerCount = in->enabledLayerCount;
    out->ppEnabledLayerNames = in->ppEnabledLayerNames;
    out->enabledExtensionCount = in->enabledExtensionCount;
    out->ppEnabledExtensionNames = in->ppEnabledExtensionNames;

    for (in_header = UlongToPtr(in->pNext); in_header; in_header = UlongToPtr(in_header->pNext))
    {
        switch (in_header->sType)
        {
        case VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO:
            break;
        case VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT:
        {
            VkDebugReportCallbackCreateInfoEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkDebugReportCallbackCreateInfoEXT *in_ext = (const VkDebugReportCallbackCreateInfoEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT;
            out_ext->pNext = NULL;
            out_ext->flags = in_ext->flags;
            out_ext->pfnCallback = in_ext->pfnCallback;
            out_ext->pUserData = in_ext->pUserData;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT:
        {
            VkValidationFlagsEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkValidationFlagsEXT *in_ext = (const VkValidationFlagsEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT;
            out_ext->pNext = NULL;
            out_ext->disabledValidationCheckCount = in_ext->disabledValidationCheckCount;
            out_ext->pDisabledValidationChecks = in_ext->pDisabledValidationChecks;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT:
        {
            VkValidationFeaturesEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkValidationFeaturesEXT *in_ext = (const VkValidationFeaturesEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT;
            out_ext->pNext = NULL;
            out_ext->enabledValidationFeatureCount = in_ext->enabledValidationFeatureCount;
            out_ext->pEnabledValidationFeatures = in_ext->pEnabledValidationFeatures;
            out_ext->disabledValidationFeatureCount = in_ext->disabledValidationFeatureCount;
            out_ext->pDisabledValidationFeatures = in_ext->pDisabledValidationFeatures;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT:
        {
            VkDebugUtilsMessengerCreateInfoEXT *out_ext = conversion_context_alloc(ctx, sizeof(*out_ext));
            const VkDebugUtilsMessengerCreateInfoEXT *in_ext = (const VkDebugUtilsMessengerCreateInfoEXT *)in_header;
            out_ext->sType = VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT;
            out_ext->pNext = NULL;
            out_ext->flags = in_ext->flags;
            out_ext->messageSeverity = in_ext->messageSeverity;
            out_ext->messageType = in_ext->messageType;
            out_ext->pfnUserCallback = in_ext->pfnUserCallback;
            out_ext->pUserData = in_ext->pUserData;
            out_header->pNext = (void *)out_ext;
            out_header = (void *)out_ext;
            break;
        }
        default:
            FIXME("Unhandled sType %u.", in_header->sType);
            break;
        }
    }
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkMicromapCreateInfoEXT_win32_to_host(const VkMicromapCreateInfoEXT *in, VkMicromapCreateInfoEXT_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->createFlags = in->createFlags;
    out->buffer = in->buffer;
    out->offset = in->offset;
    out->size = in->size;
    out->type = in->type;
    out->deviceAddress = in->deviceAddress;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkRayTracingPipelineCreateInfoKHR_win32_to_host(struct conversion_context *ctx, const VkRayTracingPipelineCreateInfoKHR *in, VkRayTracingPipelineCreateInfoKHR_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->flags = in->flags;
    out->stageCount = in->stageCount;
    out->pStages = convert_VkPipelineShaderStageCreateInfo_array_win32_to_host(ctx, in->pStages, in->stageCount);
    out->groupCount = in->groupCount;
    out->pGroups = in->pGroups;
    out->maxPipelineRayRecursionDepth = in->maxPipelineRayRecursionDepth;
    out->pLibraryInfo = in->pLibraryInfo;
    out->pLibraryInterface = in->pLibraryInterface;
    out->pDynamicState = in->pDynamicState;
    out->layout = in->layout;
    out->basePipelineHandle = in->basePipelineHandle;
    out->basePipelineIndex = in->basePipelineIndex;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkRayTracingPipelineCreateInfoKHR_host *convert_VkRayTracingPipelineCreateInfoKHR_array_win32_to_host(struct conversion_context *ctx, const VkRayTracingPipelineCreateInfoKHR *in, uint32_t count)
{
    VkRayTracingPipelineCreateInfoKHR_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkRayTracingPipelineCreateInfoKHR_win32_to_host(ctx, &in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkRayTracingPipelineCreateInfoNV_win32_to_host(struct conversion_context *ctx, const VkRayTracingPipelineCreateInfoNV *in, VkRayTracingPipelineCreateInfoNV_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->flags = in->flags;
    out->stageCount = in->stageCount;
    out->pStages = convert_VkPipelineShaderStageCreateInfo_array_win32_to_host(ctx, in->pStages, in->stageCount);
    out->groupCount = in->groupCount;
    out->pGroups = in->pGroups;
    out->maxRecursionDepth = in->maxRecursionDepth;
    out->layout = in->layout;
    out->basePipelineHandle = in->basePipelineHandle;
    out->basePipelineIndex = in->basePipelineIndex;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkRayTracingPipelineCreateInfoNV_host *convert_VkRayTracingPipelineCreateInfoNV_array_win32_to_host(struct conversion_context *ctx, const VkRayTracingPipelineCreateInfoNV *in, uint32_t count)
{
    VkRayTracingPipelineCreateInfoNV_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkRayTracingPipelineCreateInfoNV_win32_to_host(ctx, &in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)
static inline void convert_VkSwapchainCreateInfoKHR_win64_to_host(const VkSwapchainCreateInfoKHR *in, VkSwapchainCreateInfoKHR *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->flags = in->flags;
    out->surface = wine_surface_from_handle(in->surface)->driver_surface;
    out->minImageCount = in->minImageCount;
    out->imageFormat = in->imageFormat;
    out->imageColorSpace = in->imageColorSpace;
    out->imageExtent = in->imageExtent;
    out->imageArrayLayers = in->imageArrayLayers;
    out->imageUsage = in->imageUsage;
    out->imageSharingMode = in->imageSharingMode;
    out->queueFamilyIndexCount = in->queueFamilyIndexCount;
    out->pQueueFamilyIndices = in->pQueueFamilyIndices;
    out->preTransform = in->preTransform;
    out->compositeAlpha = in->compositeAlpha;
    out->presentMode = in->presentMode;
    out->clipped = in->clipped;
    out->oldSwapchain = in->oldSwapchain;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkSwapchainCreateInfoKHR_win32_to_host(const VkSwapchainCreateInfoKHR *in, VkSwapchainCreateInfoKHR_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->flags = in->flags;
    out->surface = wine_surface_from_handle(in->surface)->driver_surface;
    out->minImageCount = in->minImageCount;
    out->imageFormat = in->imageFormat;
    out->imageColorSpace = in->imageColorSpace;
    out->imageExtent = in->imageExtent;
    out->imageArrayLayers = in->imageArrayLayers;
    out->imageUsage = in->imageUsage;
    out->imageSharingMode = in->imageSharingMode;
    out->queueFamilyIndexCount = in->queueFamilyIndexCount;
    out->pQueueFamilyIndices = in->pQueueFamilyIndices;
    out->preTransform = in->preTransform;
    out->compositeAlpha = in->compositeAlpha;
    out->presentMode = in->presentMode;
    out->clipped = in->clipped;
    out->oldSwapchain = in->oldSwapchain;
}
#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)
static inline void convert_VkDebugMarkerObjectNameInfoEXT_win64_to_host(const VkDebugMarkerObjectNameInfoEXT *in, VkDebugMarkerObjectNameInfoEXT *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->objectType = in->objectType;
    out->object = wine_vk_unwrap_handle(in->objectType, in->object);
    out->pObjectName = in->pObjectName;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkDebugMarkerObjectNameInfoEXT_win32_to_host(const VkDebugMarkerObjectNameInfoEXT *in, VkDebugMarkerObjectNameInfoEXT_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->objectType = in->objectType;
    out->object = wine_vk_unwrap_handle(in->objectType, in->object);
    out->pObjectName = in->pObjectName;
}
#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)
static inline void convert_VkDebugMarkerObjectTagInfoEXT_win64_to_host(const VkDebugMarkerObjectTagInfoEXT *in, VkDebugMarkerObjectTagInfoEXT *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->objectType = in->objectType;
    out->object = wine_vk_unwrap_handle(in->objectType, in->object);
    out->tagName = in->tagName;
    out->tagSize = in->tagSize;
    out->pTag = in->pTag;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkDebugMarkerObjectTagInfoEXT_win32_to_host(const VkDebugMarkerObjectTagInfoEXT *in, VkDebugMarkerObjectTagInfoEXT_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->objectType = in->objectType;
    out->object = wine_vk_unwrap_handle(in->objectType, in->object);
    out->tagName = in->tagName;
    out->tagSize = in->tagSize;
    out->pTag = in->pTag;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkMappedMemoryRange_win32_to_host(const VkMappedMemoryRange *in, VkMappedMemoryRange_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->memory = in->memory;
    out->offset = in->offset;
    out->size = in->size;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkMappedMemoryRange_host *convert_VkMappedMemoryRange_array_win32_to_host(struct conversion_context *ctx, const VkMappedMemoryRange *in, uint32_t count)
{
    VkMappedMemoryRange_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkMappedMemoryRange_win32_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkAccelerationStructureBuildSizesInfoKHR_win32_to_host(const VkAccelerationStructureBuildSizesInfoKHR *in, VkAccelerationStructureBuildSizesInfoKHR_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->accelerationStructureSize = in->accelerationStructureSize;
    out->updateScratchSize = in->updateScratchSize;
    out->buildScratchSize = in->buildScratchSize;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkAccelerationStructureBuildSizesInfoKHR_host_to_win32(const VkAccelerationStructureBuildSizesInfoKHR_host *in, VkAccelerationStructureBuildSizesInfoKHR *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->accelerationStructureSize = in->accelerationStructureSize;
    out->updateScratchSize = in->updateScratchSize;
    out->buildScratchSize = in->buildScratchSize;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkAccelerationStructureDeviceAddressInfoKHR_win32_to_host(const VkAccelerationStructureDeviceAddressInfoKHR *in, VkAccelerationStructureDeviceAddressInfoKHR_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->accelerationStructure = in->accelerationStructure;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkAccelerationStructureMemoryRequirementsInfoNV_win32_to_host(const VkAccelerationStructureMemoryRequirementsInfoNV *in, VkAccelerationStructureMemoryRequirementsInfoNV_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->type = in->type;
    out->accelerationStructure = in->accelerationStructure;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkMemoryRequirements_host_to_win32(const VkMemoryRequirements_host *in, VkMemoryRequirements *out)
{
    if (!in) return;

    out->size = in->size;
    out->alignment = in->alignment;
    out->memoryTypeBits = in->memoryTypeBits;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkMemoryRequirements2KHR_win32_to_host(const VkMemoryRequirements2KHR *in, VkMemoryRequirements2KHR_host *out)
{
    if (!in) return;

    out->pNext = in->pNext;
    out->sType = in->sType;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkMemoryRequirements2KHR_host_to_win32(const VkMemoryRequirements2KHR_host *in, VkMemoryRequirements2KHR *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    convert_VkMemoryRequirements_host_to_win32(&in->memoryRequirements, &out->memoryRequirements);
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkBufferDeviceAddressInfo_win32_to_host(const VkBufferDeviceAddressInfo *in, VkBufferDeviceAddressInfo_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->buffer = in->buffer;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkBufferMemoryRequirementsInfo2_win32_to_host(const VkBufferMemoryRequirementsInfo2 *in, VkBufferMemoryRequirementsInfo2_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->buffer = in->buffer;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkMemoryRequirements2_win32_to_host(const VkMemoryRequirements2 *in, VkMemoryRequirements2_host *out)
{
    if (!in) return;

    out->pNext = in->pNext;
    out->sType = in->sType;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkMemoryRequirements2_host_to_win32(const VkMemoryRequirements2_host *in, VkMemoryRequirements2 *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    convert_VkMemoryRequirements_host_to_win32(&in->memoryRequirements, &out->memoryRequirements);
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkDescriptorSetBindingReferenceVALVE_win32_to_host(const VkDescriptorSetBindingReferenceVALVE *in, VkDescriptorSetBindingReferenceVALVE_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->descriptorSetLayout = in->descriptorSetLayout;
    out->binding = in->binding;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkBufferCreateInfo_host *convert_VkBufferCreateInfo_array_win32_to_host(struct conversion_context *ctx, const VkBufferCreateInfo *in, uint32_t count)
{
    VkBufferCreateInfo_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkBufferCreateInfo_win32_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkDeviceBufferMemoryRequirements_win32_to_host(struct conversion_context *ctx, const VkDeviceBufferMemoryRequirements *in, VkDeviceBufferMemoryRequirements_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->pCreateInfo = convert_VkBufferCreateInfo_array_win32_to_host(ctx, in->pCreateInfo, 1);
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkDeviceFaultCountsEXT_win32_to_host(const VkDeviceFaultCountsEXT *in, VkDeviceFaultCountsEXT_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->addressInfoCount = in->addressInfoCount;
    out->vendorInfoCount = in->vendorInfoCount;
    out->vendorBinarySize = in->vendorBinarySize;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkDeviceFaultCountsEXT_host_to_win32(const VkDeviceFaultCountsEXT_host *in, VkDeviceFaultCountsEXT *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->addressInfoCount = in->addressInfoCount;
    out->vendorInfoCount = in->vendorInfoCount;
    out->vendorBinarySize = in->vendorBinarySize;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkDeviceFaultAddressInfoEXT_win32_to_host(const VkDeviceFaultAddressInfoEXT *in, VkDeviceFaultAddressInfoEXT_host *out)
{
    if (!in) return;

    out->addressType = in->addressType;
    out->reportedAddress = in->reportedAddress;
    out->addressPrecision = in->addressPrecision;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkDeviceFaultAddressInfoEXT_host *convert_VkDeviceFaultAddressInfoEXT_array_win32_to_host(struct conversion_context *ctx, const VkDeviceFaultAddressInfoEXT *in, uint32_t count)
{
    VkDeviceFaultAddressInfoEXT_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkDeviceFaultAddressInfoEXT_win32_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkDeviceFaultVendorInfoEXT_win32_to_host(const VkDeviceFaultVendorInfoEXT *in, VkDeviceFaultVendorInfoEXT_host *out)
{
    if (!in) return;

    memcpy(out->description, in->description, VK_MAX_DESCRIPTION_SIZE * sizeof(char));
    out->vendorFaultCode = in->vendorFaultCode;
    out->vendorFaultData = in->vendorFaultData;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkDeviceFaultVendorInfoEXT_host *convert_VkDeviceFaultVendorInfoEXT_array_win32_to_host(struct conversion_context *ctx, const VkDeviceFaultVendorInfoEXT *in, uint32_t count)
{
    VkDeviceFaultVendorInfoEXT_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkDeviceFaultVendorInfoEXT_win32_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkDeviceFaultInfoEXT_win32_to_host(struct conversion_context *ctx, const VkDeviceFaultInfoEXT *in, VkDeviceFaultInfoEXT_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    memcpy(out->description, in->description, VK_MAX_DESCRIPTION_SIZE * sizeof(char));
    out->pAddressInfos = convert_VkDeviceFaultAddressInfoEXT_array_win32_to_host(ctx, in->pAddressInfos, 1);
    out->pVendorInfos = convert_VkDeviceFaultVendorInfoEXT_array_win32_to_host(ctx, in->pVendorInfos, 1);
    out->pVendorBinaryData = in->pVendorBinaryData;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkDeviceMemoryOpaqueCaptureAddressInfo_win32_to_host(const VkDeviceMemoryOpaqueCaptureAddressInfo *in, VkDeviceMemoryOpaqueCaptureAddressInfo_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->memory = in->memory;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkGeneratedCommandsMemoryRequirementsInfoNV_win32_to_host(const VkGeneratedCommandsMemoryRequirementsInfoNV *in, VkGeneratedCommandsMemoryRequirementsInfoNV_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->pipelineBindPoint = in->pipelineBindPoint;
    out->pipeline = in->pipeline;
    out->indirectCommandsLayout = in->indirectCommandsLayout;
    out->maxSequencesCount = in->maxSequencesCount;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkImageMemoryRequirementsInfo2_win32_to_host(const VkImageMemoryRequirementsInfo2 *in, VkImageMemoryRequirementsInfo2_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->image = in->image;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkImageSparseMemoryRequirementsInfo2_win32_to_host(const VkImageSparseMemoryRequirementsInfo2 *in, VkImageSparseMemoryRequirementsInfo2_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->image = in->image;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkSubresourceLayout_host_to_win32(const VkSubresourceLayout_host *in, VkSubresourceLayout *out)
{
    if (!in) return;

    out->offset = in->offset;
    out->size = in->size;
    out->rowPitch = in->rowPitch;
    out->arrayPitch = in->arrayPitch;
    out->depthPitch = in->depthPitch;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkSubresourceLayout2EXT_win32_to_host(const VkSubresourceLayout2EXT *in, VkSubresourceLayout2EXT_host *out)
{
    if (!in) return;

    out->pNext = in->pNext;
    out->sType = in->sType;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkSubresourceLayout2EXT_host_to_win32(const VkSubresourceLayout2EXT_host *in, VkSubresourceLayout2EXT *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    convert_VkSubresourceLayout_host_to_win32(&in->subresourceLayout, &out->subresourceLayout);
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkImageViewAddressPropertiesNVX_win32_to_host(const VkImageViewAddressPropertiesNVX *in, VkImageViewAddressPropertiesNVX_host *out)
{
    if (!in) return;

    out->pNext = in->pNext;
    out->sType = in->sType;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkImageViewAddressPropertiesNVX_host_to_win32(const VkImageViewAddressPropertiesNVX_host *in, VkImageViewAddressPropertiesNVX *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->deviceAddress = in->deviceAddress;
    out->size = in->size;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkImageViewHandleInfoNVX_win32_to_host(const VkImageViewHandleInfoNVX *in, VkImageViewHandleInfoNVX_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->imageView = in->imageView;
    out->descriptorType = in->descriptorType;
    out->sampler = in->sampler;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkMicromapBuildSizesInfoEXT_win32_to_host(const VkMicromapBuildSizesInfoEXT *in, VkMicromapBuildSizesInfoEXT_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->micromapSize = in->micromapSize;
    out->buildScratchSize = in->buildScratchSize;
    out->discardable = in->discardable;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkMicromapBuildSizesInfoEXT_host_to_win32(const VkMicromapBuildSizesInfoEXT_host *in, VkMicromapBuildSizesInfoEXT *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->micromapSize = in->micromapSize;
    out->buildScratchSize = in->buildScratchSize;
    out->discardable = in->discardable;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkImageFormatProperties_host_to_win32(const VkImageFormatProperties_host *in, VkImageFormatProperties *out)
{
    if (!in) return;

    out->maxExtent = in->maxExtent;
    out->maxMipLevels = in->maxMipLevels;
    out->maxArrayLayers = in->maxArrayLayers;
    out->sampleCounts = in->sampleCounts;
    out->maxResourceSize = in->maxResourceSize;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkImageFormatProperties2_win32_to_host(const VkImageFormatProperties2 *in, VkImageFormatProperties2_host *out)
{
    if (!in) return;

    out->pNext = in->pNext;
    out->sType = in->sType;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkImageFormatProperties2_host_to_win32(const VkImageFormatProperties2_host *in, VkImageFormatProperties2 *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    convert_VkImageFormatProperties_host_to_win32(&in->imageFormatProperties, &out->imageFormatProperties);
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkMemoryHeap_host_to_win32(const VkMemoryHeap_host *in, VkMemoryHeap *out)
{
    if (!in) return;

    out->size = in->size;
    out->flags = in->flags;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkMemoryHeap_array_host_to_win32(const VkMemoryHeap_host *in, VkMemoryHeap *out, uint32_t count)
{
    unsigned int i;

    if (!in) return;

    for (i = 0; i < count; i++)
    {
        convert_VkMemoryHeap_host_to_win32(&in[i], &out[i]);
    }
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkPhysicalDeviceMemoryProperties_host_to_win32(const VkPhysicalDeviceMemoryProperties_host *in, VkPhysicalDeviceMemoryProperties *out)
{
    if (!in) return;

    out->memoryTypeCount = in->memoryTypeCount;
    memcpy(out->memoryTypes, in->memoryTypes, VK_MAX_MEMORY_TYPES * sizeof(VkMemoryType));
    out->memoryHeapCount = in->memoryHeapCount;
    convert_VkMemoryHeap_array_host_to_win32(in->memoryHeaps, out->memoryHeaps, VK_MAX_MEMORY_HEAPS);
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkPhysicalDeviceMemoryProperties2_win32_to_host(const VkPhysicalDeviceMemoryProperties2 *in, VkPhysicalDeviceMemoryProperties2_host *out)
{
    if (!in) return;

    out->pNext = in->pNext;
    out->sType = in->sType;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkPhysicalDeviceMemoryProperties2_host_to_win32(const VkPhysicalDeviceMemoryProperties2_host *in, VkPhysicalDeviceMemoryProperties2 *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    convert_VkPhysicalDeviceMemoryProperties_host_to_win32(&in->memoryProperties, &out->memoryProperties);
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkPhysicalDeviceLimits_host_to_win32(const VkPhysicalDeviceLimits_host *in, VkPhysicalDeviceLimits *out)
{
    if (!in) return;

    out->maxImageDimension1D = in->maxImageDimension1D;
    out->maxImageDimension2D = in->maxImageDimension2D;
    out->maxImageDimension3D = in->maxImageDimension3D;
    out->maxImageDimensionCube = in->maxImageDimensionCube;
    out->maxImageArrayLayers = in->maxImageArrayLayers;
    out->maxTexelBufferElements = in->maxTexelBufferElements;
    out->maxUniformBufferRange = in->maxUniformBufferRange;
    out->maxStorageBufferRange = in->maxStorageBufferRange;
    out->maxPushConstantsSize = in->maxPushConstantsSize;
    out->maxMemoryAllocationCount = in->maxMemoryAllocationCount;
    out->maxSamplerAllocationCount = in->maxSamplerAllocationCount;
    out->bufferImageGranularity = in->bufferImageGranularity;
    out->sparseAddressSpaceSize = in->sparseAddressSpaceSize;
    out->maxBoundDescriptorSets = in->maxBoundDescriptorSets;
    out->maxPerStageDescriptorSamplers = in->maxPerStageDescriptorSamplers;
    out->maxPerStageDescriptorUniformBuffers = in->maxPerStageDescriptorUniformBuffers;
    out->maxPerStageDescriptorStorageBuffers = in->maxPerStageDescriptorStorageBuffers;
    out->maxPerStageDescriptorSampledImages = in->maxPerStageDescriptorSampledImages;
    out->maxPerStageDescriptorStorageImages = in->maxPerStageDescriptorStorageImages;
    out->maxPerStageDescriptorInputAttachments = in->maxPerStageDescriptorInputAttachments;
    out->maxPerStageResources = in->maxPerStageResources;
    out->maxDescriptorSetSamplers = in->maxDescriptorSetSamplers;
    out->maxDescriptorSetUniformBuffers = in->maxDescriptorSetUniformBuffers;
    out->maxDescriptorSetUniformBuffersDynamic = in->maxDescriptorSetUniformBuffersDynamic;
    out->maxDescriptorSetStorageBuffers = in->maxDescriptorSetStorageBuffers;
    out->maxDescriptorSetStorageBuffersDynamic = in->maxDescriptorSetStorageBuffersDynamic;
    out->maxDescriptorSetSampledImages = in->maxDescriptorSetSampledImages;
    out->maxDescriptorSetStorageImages = in->maxDescriptorSetStorageImages;
    out->maxDescriptorSetInputAttachments = in->maxDescriptorSetInputAttachments;
    out->maxVertexInputAttributes = in->maxVertexInputAttributes;
    out->maxVertexInputBindings = in->maxVertexInputBindings;
    out->maxVertexInputAttributeOffset = in->maxVertexInputAttributeOffset;
    out->maxVertexInputBindingStride = in->maxVertexInputBindingStride;
    out->maxVertexOutputComponents = in->maxVertexOutputComponents;
    out->maxTessellationGenerationLevel = in->maxTessellationGenerationLevel;
    out->maxTessellationPatchSize = in->maxTessellationPatchSize;
    out->maxTessellationControlPerVertexInputComponents = in->maxTessellationControlPerVertexInputComponents;
    out->maxTessellationControlPerVertexOutputComponents = in->maxTessellationControlPerVertexOutputComponents;
    out->maxTessellationControlPerPatchOutputComponents = in->maxTessellationControlPerPatchOutputComponents;
    out->maxTessellationControlTotalOutputComponents = in->maxTessellationControlTotalOutputComponents;
    out->maxTessellationEvaluationInputComponents = in->maxTessellationEvaluationInputComponents;
    out->maxTessellationEvaluationOutputComponents = in->maxTessellationEvaluationOutputComponents;
    out->maxGeometryShaderInvocations = in->maxGeometryShaderInvocations;
    out->maxGeometryInputComponents = in->maxGeometryInputComponents;
    out->maxGeometryOutputComponents = in->maxGeometryOutputComponents;
    out->maxGeometryOutputVertices = in->maxGeometryOutputVertices;
    out->maxGeometryTotalOutputComponents = in->maxGeometryTotalOutputComponents;
    out->maxFragmentInputComponents = in->maxFragmentInputComponents;
    out->maxFragmentOutputAttachments = in->maxFragmentOutputAttachments;
    out->maxFragmentDualSrcAttachments = in->maxFragmentDualSrcAttachments;
    out->maxFragmentCombinedOutputResources = in->maxFragmentCombinedOutputResources;
    out->maxComputeSharedMemorySize = in->maxComputeSharedMemorySize;
    memcpy(out->maxComputeWorkGroupCount, in->maxComputeWorkGroupCount, 3 * sizeof(uint32_t));
    out->maxComputeWorkGroupInvocations = in->maxComputeWorkGroupInvocations;
    memcpy(out->maxComputeWorkGroupSize, in->maxComputeWorkGroupSize, 3 * sizeof(uint32_t));
    out->subPixelPrecisionBits = in->subPixelPrecisionBits;
    out->subTexelPrecisionBits = in->subTexelPrecisionBits;
    out->mipmapPrecisionBits = in->mipmapPrecisionBits;
    out->maxDrawIndexedIndexValue = in->maxDrawIndexedIndexValue;
    out->maxDrawIndirectCount = in->maxDrawIndirectCount;
    out->maxSamplerLodBias = in->maxSamplerLodBias;
    out->maxSamplerAnisotropy = in->maxSamplerAnisotropy;
    out->maxViewports = in->maxViewports;
    memcpy(out->maxViewportDimensions, in->maxViewportDimensions, 2 * sizeof(uint32_t));
    memcpy(out->viewportBoundsRange, in->viewportBoundsRange, 2 * sizeof(float));
    out->viewportSubPixelBits = in->viewportSubPixelBits;
    out->minMemoryMapAlignment = in->minMemoryMapAlignment;
    out->minTexelBufferOffsetAlignment = in->minTexelBufferOffsetAlignment;
    out->minUniformBufferOffsetAlignment = in->minUniformBufferOffsetAlignment;
    out->minStorageBufferOffsetAlignment = in->minStorageBufferOffsetAlignment;
    out->minTexelOffset = in->minTexelOffset;
    out->maxTexelOffset = in->maxTexelOffset;
    out->minTexelGatherOffset = in->minTexelGatherOffset;
    out->maxTexelGatherOffset = in->maxTexelGatherOffset;
    out->minInterpolationOffset = in->minInterpolationOffset;
    out->maxInterpolationOffset = in->maxInterpolationOffset;
    out->subPixelInterpolationOffsetBits = in->subPixelInterpolationOffsetBits;
    out->maxFramebufferWidth = in->maxFramebufferWidth;
    out->maxFramebufferHeight = in->maxFramebufferHeight;
    out->maxFramebufferLayers = in->maxFramebufferLayers;
    out->framebufferColorSampleCounts = in->framebufferColorSampleCounts;
    out->framebufferDepthSampleCounts = in->framebufferDepthSampleCounts;
    out->framebufferStencilSampleCounts = in->framebufferStencilSampleCounts;
    out->framebufferNoAttachmentsSampleCounts = in->framebufferNoAttachmentsSampleCounts;
    out->maxColorAttachments = in->maxColorAttachments;
    out->sampledImageColorSampleCounts = in->sampledImageColorSampleCounts;
    out->sampledImageIntegerSampleCounts = in->sampledImageIntegerSampleCounts;
    out->sampledImageDepthSampleCounts = in->sampledImageDepthSampleCounts;
    out->sampledImageStencilSampleCounts = in->sampledImageStencilSampleCounts;
    out->storageImageSampleCounts = in->storageImageSampleCounts;
    out->maxSampleMaskWords = in->maxSampleMaskWords;
    out->timestampComputeAndGraphics = in->timestampComputeAndGraphics;
    out->timestampPeriod = in->timestampPeriod;
    out->maxClipDistances = in->maxClipDistances;
    out->maxCullDistances = in->maxCullDistances;
    out->maxCombinedClipAndCullDistances = in->maxCombinedClipAndCullDistances;
    out->discreteQueuePriorities = in->discreteQueuePriorities;
    memcpy(out->pointSizeRange, in->pointSizeRange, 2 * sizeof(float));
    memcpy(out->lineWidthRange, in->lineWidthRange, 2 * sizeof(float));
    out->pointSizeGranularity = in->pointSizeGranularity;
    out->lineWidthGranularity = in->lineWidthGranularity;
    out->strictLines = in->strictLines;
    out->standardSampleLocations = in->standardSampleLocations;
    out->optimalBufferCopyOffsetAlignment = in->optimalBufferCopyOffsetAlignment;
    out->optimalBufferCopyRowPitchAlignment = in->optimalBufferCopyRowPitchAlignment;
    out->nonCoherentAtomSize = in->nonCoherentAtomSize;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkPhysicalDeviceProperties_host_to_win32(const VkPhysicalDeviceProperties_host *in, VkPhysicalDeviceProperties *out)
{
    if (!in) return;

    out->apiVersion = in->apiVersion;
    out->driverVersion = in->driverVersion;
    out->vendorID = in->vendorID;
    out->deviceID = in->deviceID;
    out->deviceType = in->deviceType;
    memcpy(out->deviceName, in->deviceName, VK_MAX_PHYSICAL_DEVICE_NAME_SIZE * sizeof(char));
    memcpy(out->pipelineCacheUUID, in->pipelineCacheUUID, VK_UUID_SIZE * sizeof(uint8_t));
    convert_VkPhysicalDeviceLimits_host_to_win32(&in->limits, &out->limits);
    out->sparseProperties = in->sparseProperties;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkPhysicalDeviceProperties2_win32_to_host(const VkPhysicalDeviceProperties2 *in, VkPhysicalDeviceProperties2_host *out)
{
    if (!in) return;

    out->pNext = in->pNext;
    out->sType = in->sType;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkPhysicalDeviceProperties2_host_to_win32(const VkPhysicalDeviceProperties2_host *in, VkPhysicalDeviceProperties2 *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    convert_VkPhysicalDeviceProperties_host_to_win32(&in->properties, &out->properties);
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkPhysicalDeviceSurfaceInfo2KHR_win32_to_unwrapped_host(const VkPhysicalDeviceSurfaceInfo2KHR *in, VkPhysicalDeviceSurfaceInfo2KHR_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->surface = in->surface;
}
#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)
static inline void convert_VkPhysicalDeviceSurfaceInfo2KHR_win64_to_host(const VkPhysicalDeviceSurfaceInfo2KHR *in, VkPhysicalDeviceSurfaceInfo2KHR *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->surface = wine_surface_from_handle(in->surface)->driver_surface;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkPhysicalDeviceSurfaceInfo2KHR_win32_to_host(const VkPhysicalDeviceSurfaceInfo2KHR *in, VkPhysicalDeviceSurfaceInfo2KHR_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->surface = wine_surface_from_handle(in->surface)->driver_surface;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkPipelineExecutableInfoKHR_win32_to_host(const VkPipelineExecutableInfoKHR *in, VkPipelineExecutableInfoKHR_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->pipeline = in->pipeline;
    out->executableIndex = in->executableIndex;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkPipelineInfoKHR_win32_to_host(const VkPipelineInfoKHR *in, VkPipelineInfoKHR_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->pipeline = in->pipeline;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkPipelineInfoEXT_win32_to_host(const VkPipelineInfoEXT *in, VkPipelineInfoEXT_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->pipeline = in->pipeline;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkSparseMemoryBind_win32_to_host(const VkSparseMemoryBind *in, VkSparseMemoryBind_host *out)
{
    if (!in) return;

    out->resourceOffset = in->resourceOffset;
    out->size = in->size;
    out->memory = in->memory;
    out->memoryOffset = in->memoryOffset;
    out->flags = in->flags;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkSparseMemoryBind_host *convert_VkSparseMemoryBind_array_win32_to_host(struct conversion_context *ctx, const VkSparseMemoryBind *in, uint32_t count)
{
    VkSparseMemoryBind_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkSparseMemoryBind_win32_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkSparseBufferMemoryBindInfo_win32_to_host(struct conversion_context *ctx, const VkSparseBufferMemoryBindInfo *in, VkSparseBufferMemoryBindInfo_host *out)
{
    if (!in) return;

    out->buffer = in->buffer;
    out->bindCount = in->bindCount;
    out->pBinds = convert_VkSparseMemoryBind_array_win32_to_host(ctx, in->pBinds, in->bindCount);
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkSparseBufferMemoryBindInfo_host *convert_VkSparseBufferMemoryBindInfo_array_win32_to_host(struct conversion_context *ctx, const VkSparseBufferMemoryBindInfo *in, uint32_t count)
{
    VkSparseBufferMemoryBindInfo_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkSparseBufferMemoryBindInfo_win32_to_host(ctx, &in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkSparseImageOpaqueMemoryBindInfo_win32_to_host(struct conversion_context *ctx, const VkSparseImageOpaqueMemoryBindInfo *in, VkSparseImageOpaqueMemoryBindInfo_host *out)
{
    if (!in) return;

    out->image = in->image;
    out->bindCount = in->bindCount;
    out->pBinds = convert_VkSparseMemoryBind_array_win32_to_host(ctx, in->pBinds, in->bindCount);
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkSparseImageOpaqueMemoryBindInfo_host *convert_VkSparseImageOpaqueMemoryBindInfo_array_win32_to_host(struct conversion_context *ctx, const VkSparseImageOpaqueMemoryBindInfo *in, uint32_t count)
{
    VkSparseImageOpaqueMemoryBindInfo_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkSparseImageOpaqueMemoryBindInfo_win32_to_host(ctx, &in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkSparseImageMemoryBind_win32_to_host(const VkSparseImageMemoryBind *in, VkSparseImageMemoryBind_host *out)
{
    if (!in) return;

    out->subresource = in->subresource;
    out->offset = in->offset;
    out->extent = in->extent;
    out->memory = in->memory;
    out->memoryOffset = in->memoryOffset;
    out->flags = in->flags;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkSparseImageMemoryBind_host *convert_VkSparseImageMemoryBind_array_win32_to_host(struct conversion_context *ctx, const VkSparseImageMemoryBind *in, uint32_t count)
{
    VkSparseImageMemoryBind_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkSparseImageMemoryBind_win32_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkSparseImageMemoryBindInfo_win32_to_host(struct conversion_context *ctx, const VkSparseImageMemoryBindInfo *in, VkSparseImageMemoryBindInfo_host *out)
{
    if (!in) return;

    out->image = in->image;
    out->bindCount = in->bindCount;
    out->pBinds = convert_VkSparseImageMemoryBind_array_win32_to_host(ctx, in->pBinds, in->bindCount);
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkSparseImageMemoryBindInfo_host *convert_VkSparseImageMemoryBindInfo_array_win32_to_host(struct conversion_context *ctx, const VkSparseImageMemoryBindInfo *in, uint32_t count)
{
    VkSparseImageMemoryBindInfo_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkSparseImageMemoryBindInfo_win32_to_host(ctx, &in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkBindSparseInfo_win32_to_host(struct conversion_context *ctx, const VkBindSparseInfo *in, VkBindSparseInfo_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->waitSemaphoreCount = in->waitSemaphoreCount;
    out->pWaitSemaphores = in->pWaitSemaphores;
    out->bufferBindCount = in->bufferBindCount;
    out->pBufferBinds = convert_VkSparseBufferMemoryBindInfo_array_win32_to_host(ctx, in->pBufferBinds, in->bufferBindCount);
    out->imageOpaqueBindCount = in->imageOpaqueBindCount;
    out->pImageOpaqueBinds = convert_VkSparseImageOpaqueMemoryBindInfo_array_win32_to_host(ctx, in->pImageOpaqueBinds, in->imageOpaqueBindCount);
    out->imageBindCount = in->imageBindCount;
    out->pImageBinds = convert_VkSparseImageMemoryBindInfo_array_win32_to_host(ctx, in->pImageBinds, in->imageBindCount);
    out->signalSemaphoreCount = in->signalSemaphoreCount;
    out->pSignalSemaphores = in->pSignalSemaphores;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkBindSparseInfo_host *convert_VkBindSparseInfo_array_win32_to_host(struct conversion_context *ctx, const VkBindSparseInfo *in, uint32_t count)
{
    VkBindSparseInfo_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkBindSparseInfo_win32_to_host(ctx, &in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)
static inline void convert_VkSubmitInfo_win64_to_host(struct conversion_context *ctx, const VkSubmitInfo *in, VkSubmitInfo *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->waitSemaphoreCount = in->waitSemaphoreCount;
    out->pWaitSemaphores = in->pWaitSemaphores;
    out->pWaitDstStageMask = in->pWaitDstStageMask;
    out->commandBufferCount = in->commandBufferCount;
    out->pCommandBuffers = convert_VkCommandBuffer_array_win64_to_host(ctx, in->pCommandBuffers, in->commandBufferCount);
    out->signalSemaphoreCount = in->signalSemaphoreCount;
    out->pSignalSemaphores = in->pSignalSemaphores;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkSubmitInfo_win32_to_host(struct conversion_context *ctx, const VkSubmitInfo *in, VkSubmitInfo *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->waitSemaphoreCount = in->waitSemaphoreCount;
    out->pWaitSemaphores = in->pWaitSemaphores;
    out->pWaitDstStageMask = in->pWaitDstStageMask;
    out->commandBufferCount = in->commandBufferCount;
    out->pCommandBuffers = convert_VkCommandBuffer_array_win32_to_host(ctx, in->pCommandBuffers, in->commandBufferCount);
    out->signalSemaphoreCount = in->signalSemaphoreCount;
    out->pSignalSemaphores = in->pSignalSemaphores;
}
#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)
static inline VkSubmitInfo *convert_VkSubmitInfo_array_win64_to_host(struct conversion_context *ctx, const VkSubmitInfo *in, uint32_t count)
{
    VkSubmitInfo *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkSubmitInfo_win64_to_host(ctx, &in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkSubmitInfo *convert_VkSubmitInfo_array_win32_to_host(struct conversion_context *ctx, const VkSubmitInfo *in, uint32_t count)
{
    VkSubmitInfo *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkSubmitInfo_win32_to_host(ctx, &in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkSemaphoreSubmitInfo_win32_to_host(const VkSemaphoreSubmitInfo *in, VkSemaphoreSubmitInfo_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->semaphore = in->semaphore;
    out->value = in->value;
    out->stageMask = in->stageMask;
    out->deviceIndex = in->deviceIndex;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkSemaphoreSubmitInfo_host *convert_VkSemaphoreSubmitInfo_array_win32_to_host(struct conversion_context *ctx, const VkSemaphoreSubmitInfo *in, uint32_t count)
{
    VkSemaphoreSubmitInfo_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkSemaphoreSubmitInfo_win32_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)
static inline void convert_VkCommandBufferSubmitInfo_win64_to_host(const VkCommandBufferSubmitInfo *in, VkCommandBufferSubmitInfo *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->commandBuffer = wine_cmd_buffer_from_handle(in->commandBuffer)->command_buffer;
    out->deviceMask = in->deviceMask;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkCommandBufferSubmitInfo_win32_to_host(const VkCommandBufferSubmitInfo *in, VkCommandBufferSubmitInfo *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->commandBuffer = wine_cmd_buffer_from_handle(in->commandBuffer)->command_buffer;
    out->deviceMask = in->deviceMask;
}
#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)
static inline VkCommandBufferSubmitInfo *convert_VkCommandBufferSubmitInfo_array_win64_to_host(struct conversion_context *ctx, const VkCommandBufferSubmitInfo *in, uint32_t count)
{
    VkCommandBufferSubmitInfo *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkCommandBufferSubmitInfo_win64_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkCommandBufferSubmitInfo *convert_VkCommandBufferSubmitInfo_array_win32_to_host(struct conversion_context *ctx, const VkCommandBufferSubmitInfo *in, uint32_t count)
{
    VkCommandBufferSubmitInfo *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkCommandBufferSubmitInfo_win32_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)
static inline void convert_VkSubmitInfo2_win64_to_host(struct conversion_context *ctx, const VkSubmitInfo2 *in, VkSubmitInfo2 *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->flags = in->flags;
    out->waitSemaphoreInfoCount = in->waitSemaphoreInfoCount;
    out->pWaitSemaphoreInfos = in->pWaitSemaphoreInfos;
    out->commandBufferInfoCount = in->commandBufferInfoCount;
    out->pCommandBufferInfos = convert_VkCommandBufferSubmitInfo_array_win64_to_host(ctx, in->pCommandBufferInfos, in->commandBufferInfoCount);
    out->signalSemaphoreInfoCount = in->signalSemaphoreInfoCount;
    out->pSignalSemaphoreInfos = in->pSignalSemaphoreInfos;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkSubmitInfo2_win32_to_host(struct conversion_context *ctx, const VkSubmitInfo2 *in, VkSubmitInfo2_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->flags = in->flags;
    out->waitSemaphoreInfoCount = in->waitSemaphoreInfoCount;
    out->pWaitSemaphoreInfos = convert_VkSemaphoreSubmitInfo_array_win32_to_host(ctx, in->pWaitSemaphoreInfos, in->waitSemaphoreInfoCount);
    out->commandBufferInfoCount = in->commandBufferInfoCount;
    out->pCommandBufferInfos = convert_VkCommandBufferSubmitInfo_array_win32_to_host(ctx, in->pCommandBufferInfos, in->commandBufferInfoCount);
    out->signalSemaphoreInfoCount = in->signalSemaphoreInfoCount;
    out->pSignalSemaphoreInfos = convert_VkSemaphoreSubmitInfo_array_win32_to_host(ctx, in->pSignalSemaphoreInfos, in->signalSemaphoreInfoCount);
}
#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)
static inline VkSubmitInfo2 *convert_VkSubmitInfo2_array_win64_to_host(struct conversion_context *ctx, const VkSubmitInfo2 *in, uint32_t count)
{
    VkSubmitInfo2 *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkSubmitInfo2_win64_to_host(ctx, &in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkSubmitInfo2_host *convert_VkSubmitInfo2_array_win32_to_host(struct conversion_context *ctx, const VkSubmitInfo2 *in, uint32_t count)
{
    VkSubmitInfo2_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkSubmitInfo2_win32_to_host(ctx, &in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)
static inline void convert_VkDebugUtilsObjectNameInfoEXT_win64_to_host(const VkDebugUtilsObjectNameInfoEXT *in, VkDebugUtilsObjectNameInfoEXT *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->objectType = in->objectType;
    out->objectHandle = wine_vk_unwrap_handle(in->objectType, in->objectHandle);
    out->pObjectName = in->pObjectName;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkDebugUtilsObjectNameInfoEXT_win32_to_host(const VkDebugUtilsObjectNameInfoEXT *in, VkDebugUtilsObjectNameInfoEXT_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->objectType = in->objectType;
    out->objectHandle = wine_vk_unwrap_handle(in->objectType, in->objectHandle);
    out->pObjectName = in->pObjectName;
}
#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)
static inline void convert_VkDebugUtilsObjectTagInfoEXT_win64_to_host(const VkDebugUtilsObjectTagInfoEXT *in, VkDebugUtilsObjectTagInfoEXT *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->objectType = in->objectType;
    out->objectHandle = wine_vk_unwrap_handle(in->objectType, in->objectHandle);
    out->tagName = in->tagName;
    out->tagSize = in->tagSize;
    out->pTag = in->pTag;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkDebugUtilsObjectTagInfoEXT_win32_to_host(const VkDebugUtilsObjectTagInfoEXT *in, VkDebugUtilsObjectTagInfoEXT_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->objectType = in->objectType;
    out->objectHandle = wine_vk_unwrap_handle(in->objectType, in->objectHandle);
    out->tagName = in->tagName;
    out->tagSize = in->tagSize;
    out->pTag = in->pTag;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkSemaphoreSignalInfo_win32_to_host(const VkSemaphoreSignalInfo *in, VkSemaphoreSignalInfo_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->semaphore = in->semaphore;
    out->value = in->value;
}
#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)
static inline VkDebugUtilsObjectNameInfoEXT *convert_VkDebugUtilsObjectNameInfoEXT_array_win64_to_host(struct conversion_context *ctx, const VkDebugUtilsObjectNameInfoEXT *in, uint32_t count)
{
    VkDebugUtilsObjectNameInfoEXT *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkDebugUtilsObjectNameInfoEXT_win64_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkDebugUtilsObjectNameInfoEXT_host *convert_VkDebugUtilsObjectNameInfoEXT_array_win32_to_host(struct conversion_context *ctx, const VkDebugUtilsObjectNameInfoEXT *in, uint32_t count)
{
    VkDebugUtilsObjectNameInfoEXT_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkDebugUtilsObjectNameInfoEXT_win32_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)
static inline void convert_VkDebugUtilsMessengerCallbackDataEXT_win64_to_host(struct conversion_context *ctx, const VkDebugUtilsMessengerCallbackDataEXT *in, VkDebugUtilsMessengerCallbackDataEXT *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->flags = in->flags;
    out->pMessageIdName = in->pMessageIdName;
    out->messageIdNumber = in->messageIdNumber;
    out->pMessage = in->pMessage;
    out->queueLabelCount = in->queueLabelCount;
    out->pQueueLabels = in->pQueueLabels;
    out->cmdBufLabelCount = in->cmdBufLabelCount;
    out->pCmdBufLabels = in->pCmdBufLabels;
    out->objectCount = in->objectCount;
    out->pObjects = convert_VkDebugUtilsObjectNameInfoEXT_array_win64_to_host(ctx, in->pObjects, in->objectCount);
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkDebugUtilsMessengerCallbackDataEXT_win32_to_host(struct conversion_context *ctx, const VkDebugUtilsMessengerCallbackDataEXT *in, VkDebugUtilsMessengerCallbackDataEXT_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->flags = in->flags;
    out->pMessageIdName = in->pMessageIdName;
    out->messageIdNumber = in->messageIdNumber;
    out->pMessage = in->pMessage;
    out->queueLabelCount = in->queueLabelCount;
    out->pQueueLabels = in->pQueueLabels;
    out->cmdBufLabelCount = in->cmdBufLabelCount;
    out->pCmdBufLabels = in->pCmdBufLabels;
    out->objectCount = in->objectCount;
    out->pObjects = convert_VkDebugUtilsObjectNameInfoEXT_array_win32_to_host(ctx, in->pObjects, in->objectCount);
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_VkCopyDescriptorSet_win32_to_host(const VkCopyDescriptorSet *in, VkCopyDescriptorSet_host *out)
{
    if (!in) return;

    out->sType = in->sType;
    out->pNext = in->pNext;
    out->srcSet = in->srcSet;
    out->srcBinding = in->srcBinding;
    out->srcArrayElement = in->srcArrayElement;
    out->dstSet = in->dstSet;
    out->dstBinding = in->dstBinding;
    out->dstArrayElement = in->dstArrayElement;
    out->descriptorCount = in->descriptorCount;
}
#endif /* USE_STRUCT_CONVERSION */

#if defined(USE_STRUCT_CONVERSION)
static inline VkCopyDescriptorSet_host *convert_VkCopyDescriptorSet_array_win32_to_host(struct conversion_context *ctx, const VkCopyDescriptorSet *in, uint32_t count)
{
    VkCopyDescriptorSet_host *out;
    unsigned int i;

    if (!in || !count) return NULL;

    out = conversion_context_alloc(ctx, count * sizeof(*out));
    for (i = 0; i < count; i++)
    {
        convert_VkCopyDescriptorSet_win32_to_host(&in[i], &out[i]);
    }

    return out;
}
#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkAcquireNextImage2KHR(void *args)
{
    struct vkAcquireNextImage2KHR_params *params = args;

    TRACE("%p, %p, %p\n", params->device, params->pAcquireInfo, params->pImageIndex);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkAcquireNextImage2KHR(wine_device_from_handle(params->device)->device, params->pAcquireInfo, params->pImageIndex);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkAcquireNextImage2KHR(void *args)
{
    struct vkAcquireNextImage2KHR_params *params = args;
    VkAcquireNextImageInfoKHR_host pAcquireInfo_host;

    TRACE("%p, %p, %p\n", params->device, params->pAcquireInfo, params->pImageIndex);

    convert_VkAcquireNextImageInfoKHR_win32_to_host(params->pAcquireInfo, &pAcquireInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkAcquireNextImage2KHR(wine_device_from_handle(params->device)->device, &pAcquireInfo_host, params->pImageIndex);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkAcquireNextImageKHR(void *args)
{
    struct vkAcquireNextImageKHR_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->swapchain), wine_dbgstr_longlong(params->timeout), wine_dbgstr_longlong(params->semaphore), wine_dbgstr_longlong(params->fence), params->pImageIndex);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkAcquireNextImageKHR(wine_device_from_handle(params->device)->device, params->swapchain, params->timeout, params->semaphore, params->fence, params->pImageIndex);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkAcquireNextImageKHR(void *args)
{
    struct vkAcquireNextImageKHR_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->swapchain), wine_dbgstr_longlong(params->timeout), wine_dbgstr_longlong(params->semaphore), wine_dbgstr_longlong(params->fence), params->pImageIndex);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkAcquireNextImageKHR(wine_device_from_handle(params->device)->device, params->swapchain, params->timeout, params->semaphore, params->fence, params->pImageIndex);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkAcquirePerformanceConfigurationINTEL(void *args)
{
    struct vkAcquirePerformanceConfigurationINTEL_params *params = args;

    TRACE("%p, %p, %p\n", params->device, params->pAcquireInfo, params->pConfiguration);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkAcquirePerformanceConfigurationINTEL(wine_device_from_handle(params->device)->device, params->pAcquireInfo, params->pConfiguration);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkAcquirePerformanceConfigurationINTEL(void *args)
{
    struct vkAcquirePerformanceConfigurationINTEL_params *params = args;

    TRACE("%p, %p, %p\n", params->device, params->pAcquireInfo, params->pConfiguration);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkAcquirePerformanceConfigurationINTEL(wine_device_from_handle(params->device)->device, params->pAcquireInfo, params->pConfiguration);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkAcquireProfilingLockKHR(void *args)
{
    struct vkAcquireProfilingLockKHR_params *params = args;

    TRACE("%p, %p\n", params->device, params->pInfo);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkAcquireProfilingLockKHR(wine_device_from_handle(params->device)->device, params->pInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkAcquireProfilingLockKHR(void *args)
{
    struct vkAcquireProfilingLockKHR_params *params = args;
    VkAcquireProfilingLockInfoKHR_host pInfo_host;

    TRACE("%p, %p\n", params->device, params->pInfo);

    convert_VkAcquireProfilingLockInfoKHR_win32_to_host(params->pInfo, &pInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkAcquireProfilingLockKHR(wine_device_from_handle(params->device)->device, &pInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkAllocateCommandBuffers(void *args)
{
    struct vkAllocateCommandBuffers_params *params = args;

    TRACE("%p, %p, %p\n", params->device, params->pAllocateInfo, params->pCommandBuffers);

    params->result = wine_vkAllocateCommandBuffers(params->device, params->pAllocateInfo, params->pCommandBuffers);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkAllocateCommandBuffers(void *args)
{
    struct vkAllocateCommandBuffers_params *params = args;
    VkCommandBufferAllocateInfo_host pAllocateInfo_host;

    TRACE("%p, %p, %p\n", params->device, params->pAllocateInfo, params->pCommandBuffers);

    convert_VkCommandBufferAllocateInfo_win32_to_unwrapped_host(params->pAllocateInfo, &pAllocateInfo_host);
    params->result = wine_vkAllocateCommandBuffers(params->device, &pAllocateInfo_host, params->pCommandBuffers);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkAllocateDescriptorSets(void *args)
{
    struct vkAllocateDescriptorSets_params *params = args;

    TRACE("%p, %p, %p\n", params->device, params->pAllocateInfo, params->pDescriptorSets);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkAllocateDescriptorSets(wine_device_from_handle(params->device)->device, params->pAllocateInfo, params->pDescriptorSets);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkAllocateDescriptorSets(void *args)
{
    struct vkAllocateDescriptorSets_params *params = args;
    VkDescriptorSetAllocateInfo_host pAllocateInfo_host;

    TRACE("%p, %p, %p\n", params->device, params->pAllocateInfo, params->pDescriptorSets);

    convert_VkDescriptorSetAllocateInfo_win32_to_host(params->pAllocateInfo, &pAllocateInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkAllocateDescriptorSets(wine_device_from_handle(params->device)->device, &pAllocateInfo_host, params->pDescriptorSets);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkAllocateMemory(void *args)
{
    struct vkAllocateMemory_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pAllocateInfo, params->pAllocator, params->pMemory);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkAllocateMemory(wine_device_from_handle(params->device)->device, params->pAllocateInfo, NULL, params->pMemory);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkAllocateMemory(void *args)
{
    struct vkAllocateMemory_params *params = args;
    VkMemoryAllocateInfo_host pAllocateInfo_host;

    TRACE("%p, %p, %p, %p\n", params->device, params->pAllocateInfo, params->pAllocator, params->pMemory);

    convert_VkMemoryAllocateInfo_win32_to_host(params->pAllocateInfo, &pAllocateInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkAllocateMemory(wine_device_from_handle(params->device)->device, &pAllocateInfo_host, NULL, params->pMemory);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkBeginCommandBuffer(void *args)
{
    struct vkBeginCommandBuffer_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pBeginInfo);

    params->result = wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkBeginCommandBuffer(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pBeginInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkBeginCommandBuffer(void *args)
{
    struct vkBeginCommandBuffer_params *params = args;
    VkCommandBufferBeginInfo_host pBeginInfo_host;
    struct conversion_context ctx;

    TRACE("%p, %p\n", params->commandBuffer, params->pBeginInfo);

    init_conversion_context(&ctx);
    convert_VkCommandBufferBeginInfo_win32_to_host(&ctx, params->pBeginInfo, &pBeginInfo_host);
    params->result = wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkBeginCommandBuffer(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pBeginInfo_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkBindAccelerationStructureMemoryNV(void *args)
{
    struct vkBindAccelerationStructureMemoryNV_params *params = args;

    TRACE("%p, %u, %p\n", params->device, params->bindInfoCount, params->pBindInfos);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkBindAccelerationStructureMemoryNV(wine_device_from_handle(params->device)->device, params->bindInfoCount, params->pBindInfos);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkBindAccelerationStructureMemoryNV(void *args)
{
    struct vkBindAccelerationStructureMemoryNV_params *params = args;
    VkBindAccelerationStructureMemoryInfoNV_host *pBindInfos_host;
    struct conversion_context ctx;

    TRACE("%p, %u, %p\n", params->device, params->bindInfoCount, params->pBindInfos);

    init_conversion_context(&ctx);
    pBindInfos_host = convert_VkBindAccelerationStructureMemoryInfoNV_array_win32_to_host(&ctx, params->pBindInfos, params->bindInfoCount);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkBindAccelerationStructureMemoryNV(wine_device_from_handle(params->device)->device, params->bindInfoCount, pBindInfos_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkBindBufferMemory(void *args)
{
    struct vkBindBufferMemory_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s\n", params->device, wine_dbgstr_longlong(params->buffer), wine_dbgstr_longlong(params->memory), wine_dbgstr_longlong(params->memoryOffset));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkBindBufferMemory(wine_device_from_handle(params->device)->device, params->buffer, params->memory, params->memoryOffset);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkBindBufferMemory(void *args)
{
    struct vkBindBufferMemory_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s\n", params->device, wine_dbgstr_longlong(params->buffer), wine_dbgstr_longlong(params->memory), wine_dbgstr_longlong(params->memoryOffset));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkBindBufferMemory(wine_device_from_handle(params->device)->device, params->buffer, params->memory, params->memoryOffset);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkBindBufferMemory2(void *args)
{
    struct vkBindBufferMemory2_params *params = args;

    TRACE("%p, %u, %p\n", params->device, params->bindInfoCount, params->pBindInfos);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkBindBufferMemory2(wine_device_from_handle(params->device)->device, params->bindInfoCount, params->pBindInfos);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkBindBufferMemory2(void *args)
{
    struct vkBindBufferMemory2_params *params = args;
    VkBindBufferMemoryInfo_host *pBindInfos_host;
    struct conversion_context ctx;

    TRACE("%p, %u, %p\n", params->device, params->bindInfoCount, params->pBindInfos);

    init_conversion_context(&ctx);
    pBindInfos_host = convert_VkBindBufferMemoryInfo_array_win32_to_host(&ctx, params->pBindInfos, params->bindInfoCount);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkBindBufferMemory2(wine_device_from_handle(params->device)->device, params->bindInfoCount, pBindInfos_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkBindBufferMemory2KHR(void *args)
{
    struct vkBindBufferMemory2KHR_params *params = args;

    TRACE("%p, %u, %p\n", params->device, params->bindInfoCount, params->pBindInfos);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkBindBufferMemory2KHR(wine_device_from_handle(params->device)->device, params->bindInfoCount, params->pBindInfos);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkBindBufferMemory2KHR(void *args)
{
    struct vkBindBufferMemory2KHR_params *params = args;
    VkBindBufferMemoryInfo_host *pBindInfos_host;
    struct conversion_context ctx;

    TRACE("%p, %u, %p\n", params->device, params->bindInfoCount, params->pBindInfos);

    init_conversion_context(&ctx);
    pBindInfos_host = convert_VkBindBufferMemoryInfo_array_win32_to_host(&ctx, params->pBindInfos, params->bindInfoCount);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkBindBufferMemory2KHR(wine_device_from_handle(params->device)->device, params->bindInfoCount, pBindInfos_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkBindImageMemory(void *args)
{
    struct vkBindImageMemory_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s\n", params->device, wine_dbgstr_longlong(params->image), wine_dbgstr_longlong(params->memory), wine_dbgstr_longlong(params->memoryOffset));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkBindImageMemory(wine_device_from_handle(params->device)->device, params->image, params->memory, params->memoryOffset);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkBindImageMemory(void *args)
{
    struct vkBindImageMemory_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s\n", params->device, wine_dbgstr_longlong(params->image), wine_dbgstr_longlong(params->memory), wine_dbgstr_longlong(params->memoryOffset));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkBindImageMemory(wine_device_from_handle(params->device)->device, params->image, params->memory, params->memoryOffset);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkBindImageMemory2(void *args)
{
    struct vkBindImageMemory2_params *params = args;

    TRACE("%p, %u, %p\n", params->device, params->bindInfoCount, params->pBindInfos);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkBindImageMemory2(wine_device_from_handle(params->device)->device, params->bindInfoCount, params->pBindInfos);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkBindImageMemory2(void *args)
{
    struct vkBindImageMemory2_params *params = args;
    VkBindImageMemoryInfo_host *pBindInfos_host;
    struct conversion_context ctx;

    TRACE("%p, %u, %p\n", params->device, params->bindInfoCount, params->pBindInfos);

    init_conversion_context(&ctx);
    pBindInfos_host = convert_VkBindImageMemoryInfo_array_win32_to_host(&ctx, params->pBindInfos, params->bindInfoCount);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkBindImageMemory2(wine_device_from_handle(params->device)->device, params->bindInfoCount, pBindInfos_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkBindImageMemory2KHR(void *args)
{
    struct vkBindImageMemory2KHR_params *params = args;

    TRACE("%p, %u, %p\n", params->device, params->bindInfoCount, params->pBindInfos);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkBindImageMemory2KHR(wine_device_from_handle(params->device)->device, params->bindInfoCount, params->pBindInfos);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkBindImageMemory2KHR(void *args)
{
    struct vkBindImageMemory2KHR_params *params = args;
    VkBindImageMemoryInfo_host *pBindInfos_host;
    struct conversion_context ctx;

    TRACE("%p, %u, %p\n", params->device, params->bindInfoCount, params->pBindInfos);

    init_conversion_context(&ctx);
    pBindInfos_host = convert_VkBindImageMemoryInfo_array_win32_to_host(&ctx, params->pBindInfos, params->bindInfoCount);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkBindImageMemory2KHR(wine_device_from_handle(params->device)->device, params->bindInfoCount, pBindInfos_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkBindOpticalFlowSessionImageNV(void *args)
{
    struct vkBindOpticalFlowSessionImageNV_params *params = args;

    TRACE("%p, 0x%s, %#x, 0x%s, %#x\n", params->device, wine_dbgstr_longlong(params->session), params->bindingPoint, wine_dbgstr_longlong(params->view), params->layout);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkBindOpticalFlowSessionImageNV(wine_device_from_handle(params->device)->device, params->session, params->bindingPoint, params->view, params->layout);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkBindOpticalFlowSessionImageNV(void *args)
{
    struct vkBindOpticalFlowSessionImageNV_params *params = args;

    TRACE("%p, 0x%s, %#x, 0x%s, %#x\n", params->device, wine_dbgstr_longlong(params->session), params->bindingPoint, wine_dbgstr_longlong(params->view), params->layout);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkBindOpticalFlowSessionImageNV(wine_device_from_handle(params->device)->device, params->session, params->bindingPoint, params->view, params->layout);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkBuildAccelerationStructuresKHR(void *args)
{
    struct vkBuildAccelerationStructuresKHR_params *params = args;

    TRACE("%p, 0x%s, %u, %p, %p\n", params->device, wine_dbgstr_longlong(params->deferredOperation), params->infoCount, params->pInfos, params->ppBuildRangeInfos);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkBuildAccelerationStructuresKHR(wine_device_from_handle(params->device)->device, params->deferredOperation, params->infoCount, params->pInfos, params->ppBuildRangeInfos);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkBuildAccelerationStructuresKHR(void *args)
{
    struct vkBuildAccelerationStructuresKHR_params *params = args;
    VkAccelerationStructureBuildGeometryInfoKHR_host *pInfos_host;
    struct conversion_context ctx;

    TRACE("%p, 0x%s, %u, %p, %p\n", params->device, wine_dbgstr_longlong(params->deferredOperation), params->infoCount, params->pInfos, params->ppBuildRangeInfos);

    init_conversion_context(&ctx);
    pInfos_host = convert_VkAccelerationStructureBuildGeometryInfoKHR_array_win32_to_host(&ctx, params->pInfos, params->infoCount);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkBuildAccelerationStructuresKHR(wine_device_from_handle(params->device)->device, params->deferredOperation, params->infoCount, pInfos_host, params->ppBuildRangeInfos);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkBuildMicromapsEXT(void *args)
{
    struct vkBuildMicromapsEXT_params *params = args;

    TRACE("%p, 0x%s, %u, %p\n", params->device, wine_dbgstr_longlong(params->deferredOperation), params->infoCount, params->pInfos);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkBuildMicromapsEXT(wine_device_from_handle(params->device)->device, params->deferredOperation, params->infoCount, params->pInfos);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkBuildMicromapsEXT(void *args)
{
    struct vkBuildMicromapsEXT_params *params = args;
    VkMicromapBuildInfoEXT_host *pInfos_host;
    struct conversion_context ctx;

    TRACE("%p, 0x%s, %u, %p\n", params->device, wine_dbgstr_longlong(params->deferredOperation), params->infoCount, params->pInfos);

    init_conversion_context(&ctx);
    pInfos_host = convert_VkMicromapBuildInfoEXT_array_win32_to_host(&ctx, params->pInfos, params->infoCount);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkBuildMicromapsEXT(wine_device_from_handle(params->device)->device, params->deferredOperation, params->infoCount, pInfos_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdBeginConditionalRenderingEXT(void *args)
{
    struct vkCmdBeginConditionalRenderingEXT_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pConditionalRenderingBegin);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBeginConditionalRenderingEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pConditionalRenderingBegin);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdBeginConditionalRenderingEXT(void *args)
{
    struct vkCmdBeginConditionalRenderingEXT_params *params = args;
    VkConditionalRenderingBeginInfoEXT_host pConditionalRenderingBegin_host;

    TRACE("%p, %p\n", params->commandBuffer, params->pConditionalRenderingBegin);

    convert_VkConditionalRenderingBeginInfoEXT_win32_to_host(params->pConditionalRenderingBegin, &pConditionalRenderingBegin_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBeginConditionalRenderingEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pConditionalRenderingBegin_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdBeginDebugUtilsLabelEXT(void *args)
{
    struct vkCmdBeginDebugUtilsLabelEXT_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pLabelInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBeginDebugUtilsLabelEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pLabelInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdBeginDebugUtilsLabelEXT(void *args)
{
    struct vkCmdBeginDebugUtilsLabelEXT_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pLabelInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBeginDebugUtilsLabelEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pLabelInfo);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdBeginQuery(void *args)
{
    struct vkCmdBeginQuery_params *params = args;

    TRACE("%p, 0x%s, %u, %#x\n", params->commandBuffer, wine_dbgstr_longlong(params->queryPool), params->query, params->flags);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBeginQuery(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->queryPool, params->query, params->flags);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdBeginQuery(void *args)
{
    struct vkCmdBeginQuery_params *params = args;

    TRACE("%p, 0x%s, %u, %#x\n", params->commandBuffer, wine_dbgstr_longlong(params->queryPool), params->query, params->flags);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBeginQuery(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->queryPool, params->query, params->flags);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdBeginQueryIndexedEXT(void *args)
{
    struct vkCmdBeginQueryIndexedEXT_params *params = args;

    TRACE("%p, 0x%s, %u, %#x, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->queryPool), params->query, params->flags, params->index);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBeginQueryIndexedEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->queryPool, params->query, params->flags, params->index);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdBeginQueryIndexedEXT(void *args)
{
    struct vkCmdBeginQueryIndexedEXT_params *params = args;

    TRACE("%p, 0x%s, %u, %#x, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->queryPool), params->query, params->flags, params->index);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBeginQueryIndexedEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->queryPool, params->query, params->flags, params->index);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdBeginRenderPass(void *args)
{
    struct vkCmdBeginRenderPass_params *params = args;

    TRACE("%p, %p, %#x\n", params->commandBuffer, params->pRenderPassBegin, params->contents);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBeginRenderPass(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pRenderPassBegin, params->contents);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdBeginRenderPass(void *args)
{
    struct vkCmdBeginRenderPass_params *params = args;
    VkRenderPassBeginInfo_host pRenderPassBegin_host;

    TRACE("%p, %p, %#x\n", params->commandBuffer, params->pRenderPassBegin, params->contents);

    convert_VkRenderPassBeginInfo_win32_to_host(params->pRenderPassBegin, &pRenderPassBegin_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBeginRenderPass(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pRenderPassBegin_host, params->contents);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdBeginRenderPass2(void *args)
{
    struct vkCmdBeginRenderPass2_params *params = args;

    TRACE("%p, %p, %p\n", params->commandBuffer, params->pRenderPassBegin, params->pSubpassBeginInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBeginRenderPass2(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pRenderPassBegin, params->pSubpassBeginInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdBeginRenderPass2(void *args)
{
    struct vkCmdBeginRenderPass2_params *params = args;
    VkRenderPassBeginInfo_host pRenderPassBegin_host;

    TRACE("%p, %p, %p\n", params->commandBuffer, params->pRenderPassBegin, params->pSubpassBeginInfo);

    convert_VkRenderPassBeginInfo_win32_to_host(params->pRenderPassBegin, &pRenderPassBegin_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBeginRenderPass2(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pRenderPassBegin_host, params->pSubpassBeginInfo);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdBeginRenderPass2KHR(void *args)
{
    struct vkCmdBeginRenderPass2KHR_params *params = args;

    TRACE("%p, %p, %p\n", params->commandBuffer, params->pRenderPassBegin, params->pSubpassBeginInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBeginRenderPass2KHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pRenderPassBegin, params->pSubpassBeginInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdBeginRenderPass2KHR(void *args)
{
    struct vkCmdBeginRenderPass2KHR_params *params = args;
    VkRenderPassBeginInfo_host pRenderPassBegin_host;

    TRACE("%p, %p, %p\n", params->commandBuffer, params->pRenderPassBegin, params->pSubpassBeginInfo);

    convert_VkRenderPassBeginInfo_win32_to_host(params->pRenderPassBegin, &pRenderPassBegin_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBeginRenderPass2KHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pRenderPassBegin_host, params->pSubpassBeginInfo);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdBeginRendering(void *args)
{
    struct vkCmdBeginRendering_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pRenderingInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBeginRendering(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pRenderingInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdBeginRendering(void *args)
{
    struct vkCmdBeginRendering_params *params = args;
    VkRenderingInfo_host pRenderingInfo_host;
    struct conversion_context ctx;

    TRACE("%p, %p\n", params->commandBuffer, params->pRenderingInfo);

    init_conversion_context(&ctx);
    convert_VkRenderingInfo_win32_to_host(&ctx, params->pRenderingInfo, &pRenderingInfo_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBeginRendering(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pRenderingInfo_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdBeginRenderingKHR(void *args)
{
    struct vkCmdBeginRenderingKHR_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pRenderingInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBeginRenderingKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pRenderingInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdBeginRenderingKHR(void *args)
{
    struct vkCmdBeginRenderingKHR_params *params = args;
    VkRenderingInfo_host pRenderingInfo_host;
    struct conversion_context ctx;

    TRACE("%p, %p\n", params->commandBuffer, params->pRenderingInfo);

    init_conversion_context(&ctx);
    convert_VkRenderingInfo_win32_to_host(&ctx, params->pRenderingInfo, &pRenderingInfo_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBeginRenderingKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pRenderingInfo_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdBeginTransformFeedbackEXT(void *args)
{
    struct vkCmdBeginTransformFeedbackEXT_params *params = args;

    TRACE("%p, %u, %u, %p, %p\n", params->commandBuffer, params->firstCounterBuffer, params->counterBufferCount, params->pCounterBuffers, params->pCounterBufferOffsets);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBeginTransformFeedbackEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstCounterBuffer, params->counterBufferCount, params->pCounterBuffers, params->pCounterBufferOffsets);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdBeginTransformFeedbackEXT(void *args)
{
    struct vkCmdBeginTransformFeedbackEXT_params *params = args;

    TRACE("%p, %u, %u, %p, %p\n", params->commandBuffer, params->firstCounterBuffer, params->counterBufferCount, params->pCounterBuffers, params->pCounterBufferOffsets);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBeginTransformFeedbackEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstCounterBuffer, params->counterBufferCount, params->pCounterBuffers, params->pCounterBufferOffsets);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdBindDescriptorSets(void *args)
{
    struct vkCmdBindDescriptorSets_params *params = args;

    TRACE("%p, %#x, 0x%s, %u, %u, %p, %u, %p\n", params->commandBuffer, params->pipelineBindPoint, wine_dbgstr_longlong(params->layout), params->firstSet, params->descriptorSetCount, params->pDescriptorSets, params->dynamicOffsetCount, params->pDynamicOffsets);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBindDescriptorSets(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pipelineBindPoint, params->layout, params->firstSet, params->descriptorSetCount, params->pDescriptorSets, params->dynamicOffsetCount, params->pDynamicOffsets);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdBindDescriptorSets(void *args)
{
    struct vkCmdBindDescriptorSets_params *params = args;

    TRACE("%p, %#x, 0x%s, %u, %u, %p, %u, %p\n", params->commandBuffer, params->pipelineBindPoint, wine_dbgstr_longlong(params->layout), params->firstSet, params->descriptorSetCount, params->pDescriptorSets, params->dynamicOffsetCount, params->pDynamicOffsets);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBindDescriptorSets(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pipelineBindPoint, params->layout, params->firstSet, params->descriptorSetCount, params->pDescriptorSets, params->dynamicOffsetCount, params->pDynamicOffsets);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdBindIndexBuffer(void *args)
{
    struct vkCmdBindIndexBuffer_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %#x\n", params->commandBuffer, wine_dbgstr_longlong(params->buffer), wine_dbgstr_longlong(params->offset), params->indexType);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBindIndexBuffer(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->buffer, params->offset, params->indexType);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdBindIndexBuffer(void *args)
{
    struct vkCmdBindIndexBuffer_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %#x\n", params->commandBuffer, wine_dbgstr_longlong(params->buffer), wine_dbgstr_longlong(params->offset), params->indexType);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBindIndexBuffer(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->buffer, params->offset, params->indexType);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdBindInvocationMaskHUAWEI(void *args)
{
    struct vkCmdBindInvocationMaskHUAWEI_params *params = args;

    TRACE("%p, 0x%s, %#x\n", params->commandBuffer, wine_dbgstr_longlong(params->imageView), params->imageLayout);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBindInvocationMaskHUAWEI(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->imageView, params->imageLayout);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdBindInvocationMaskHUAWEI(void *args)
{
    struct vkCmdBindInvocationMaskHUAWEI_params *params = args;

    TRACE("%p, 0x%s, %#x\n", params->commandBuffer, wine_dbgstr_longlong(params->imageView), params->imageLayout);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBindInvocationMaskHUAWEI(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->imageView, params->imageLayout);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdBindPipeline(void *args)
{
    struct vkCmdBindPipeline_params *params = args;

    TRACE("%p, %#x, 0x%s\n", params->commandBuffer, params->pipelineBindPoint, wine_dbgstr_longlong(params->pipeline));

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBindPipeline(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pipelineBindPoint, params->pipeline);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdBindPipeline(void *args)
{
    struct vkCmdBindPipeline_params *params = args;

    TRACE("%p, %#x, 0x%s\n", params->commandBuffer, params->pipelineBindPoint, wine_dbgstr_longlong(params->pipeline));

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBindPipeline(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pipelineBindPoint, params->pipeline);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdBindPipelineShaderGroupNV(void *args)
{
    struct vkCmdBindPipelineShaderGroupNV_params *params = args;

    TRACE("%p, %#x, 0x%s, %u\n", params->commandBuffer, params->pipelineBindPoint, wine_dbgstr_longlong(params->pipeline), params->groupIndex);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBindPipelineShaderGroupNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pipelineBindPoint, params->pipeline, params->groupIndex);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdBindPipelineShaderGroupNV(void *args)
{
    struct vkCmdBindPipelineShaderGroupNV_params *params = args;

    TRACE("%p, %#x, 0x%s, %u\n", params->commandBuffer, params->pipelineBindPoint, wine_dbgstr_longlong(params->pipeline), params->groupIndex);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBindPipelineShaderGroupNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pipelineBindPoint, params->pipeline, params->groupIndex);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdBindShadingRateImageNV(void *args)
{
    struct vkCmdBindShadingRateImageNV_params *params = args;

    TRACE("%p, 0x%s, %#x\n", params->commandBuffer, wine_dbgstr_longlong(params->imageView), params->imageLayout);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBindShadingRateImageNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->imageView, params->imageLayout);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdBindShadingRateImageNV(void *args)
{
    struct vkCmdBindShadingRateImageNV_params *params = args;

    TRACE("%p, 0x%s, %#x\n", params->commandBuffer, wine_dbgstr_longlong(params->imageView), params->imageLayout);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBindShadingRateImageNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->imageView, params->imageLayout);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdBindTransformFeedbackBuffersEXT(void *args)
{
    struct vkCmdBindTransformFeedbackBuffersEXT_params *params = args;

    TRACE("%p, %u, %u, %p, %p, %p\n", params->commandBuffer, params->firstBinding, params->bindingCount, params->pBuffers, params->pOffsets, params->pSizes);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBindTransformFeedbackBuffersEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstBinding, params->bindingCount, params->pBuffers, params->pOffsets, params->pSizes);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdBindTransformFeedbackBuffersEXT(void *args)
{
    struct vkCmdBindTransformFeedbackBuffersEXT_params *params = args;

    TRACE("%p, %u, %u, %p, %p, %p\n", params->commandBuffer, params->firstBinding, params->bindingCount, params->pBuffers, params->pOffsets, params->pSizes);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBindTransformFeedbackBuffersEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstBinding, params->bindingCount, params->pBuffers, params->pOffsets, params->pSizes);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdBindVertexBuffers(void *args)
{
    struct vkCmdBindVertexBuffers_params *params = args;

    TRACE("%p, %u, %u, %p, %p\n", params->commandBuffer, params->firstBinding, params->bindingCount, params->pBuffers, params->pOffsets);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBindVertexBuffers(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstBinding, params->bindingCount, params->pBuffers, params->pOffsets);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdBindVertexBuffers(void *args)
{
    struct vkCmdBindVertexBuffers_params *params = args;

    TRACE("%p, %u, %u, %p, %p\n", params->commandBuffer, params->firstBinding, params->bindingCount, params->pBuffers, params->pOffsets);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBindVertexBuffers(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstBinding, params->bindingCount, params->pBuffers, params->pOffsets);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdBindVertexBuffers2(void *args)
{
    struct vkCmdBindVertexBuffers2_params *params = args;

    TRACE("%p, %u, %u, %p, %p, %p, %p\n", params->commandBuffer, params->firstBinding, params->bindingCount, params->pBuffers, params->pOffsets, params->pSizes, params->pStrides);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBindVertexBuffers2(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstBinding, params->bindingCount, params->pBuffers, params->pOffsets, params->pSizes, params->pStrides);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdBindVertexBuffers2(void *args)
{
    struct vkCmdBindVertexBuffers2_params *params = args;

    TRACE("%p, %u, %u, %p, %p, %p, %p\n", params->commandBuffer, params->firstBinding, params->bindingCount, params->pBuffers, params->pOffsets, params->pSizes, params->pStrides);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBindVertexBuffers2(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstBinding, params->bindingCount, params->pBuffers, params->pOffsets, params->pSizes, params->pStrides);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdBindVertexBuffers2EXT(void *args)
{
    struct vkCmdBindVertexBuffers2EXT_params *params = args;

    TRACE("%p, %u, %u, %p, %p, %p, %p\n", params->commandBuffer, params->firstBinding, params->bindingCount, params->pBuffers, params->pOffsets, params->pSizes, params->pStrides);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBindVertexBuffers2EXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstBinding, params->bindingCount, params->pBuffers, params->pOffsets, params->pSizes, params->pStrides);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdBindVertexBuffers2EXT(void *args)
{
    struct vkCmdBindVertexBuffers2EXT_params *params = args;

    TRACE("%p, %u, %u, %p, %p, %p, %p\n", params->commandBuffer, params->firstBinding, params->bindingCount, params->pBuffers, params->pOffsets, params->pSizes, params->pStrides);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBindVertexBuffers2EXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstBinding, params->bindingCount, params->pBuffers, params->pOffsets, params->pSizes, params->pStrides);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdBlitImage(void *args)
{
    struct vkCmdBlitImage_params *params = args;

    TRACE("%p, 0x%s, %#x, 0x%s, %#x, %u, %p, %#x\n", params->commandBuffer, wine_dbgstr_longlong(params->srcImage), params->srcImageLayout, wine_dbgstr_longlong(params->dstImage), params->dstImageLayout, params->regionCount, params->pRegions, params->filter);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBlitImage(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->srcImage, params->srcImageLayout, params->dstImage, params->dstImageLayout, params->regionCount, params->pRegions, params->filter);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdBlitImage(void *args)
{
    struct vkCmdBlitImage_params *params = args;

    TRACE("%p, 0x%s, %#x, 0x%s, %#x, %u, %p, %#x\n", params->commandBuffer, wine_dbgstr_longlong(params->srcImage), params->srcImageLayout, wine_dbgstr_longlong(params->dstImage), params->dstImageLayout, params->regionCount, params->pRegions, params->filter);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBlitImage(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->srcImage, params->srcImageLayout, params->dstImage, params->dstImageLayout, params->regionCount, params->pRegions, params->filter);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdBlitImage2(void *args)
{
    struct vkCmdBlitImage2_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pBlitImageInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBlitImage2(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pBlitImageInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdBlitImage2(void *args)
{
    struct vkCmdBlitImage2_params *params = args;
    VkBlitImageInfo2_host pBlitImageInfo_host;

    TRACE("%p, %p\n", params->commandBuffer, params->pBlitImageInfo);

    convert_VkBlitImageInfo2_win32_to_host(params->pBlitImageInfo, &pBlitImageInfo_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBlitImage2(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pBlitImageInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdBlitImage2KHR(void *args)
{
    struct vkCmdBlitImage2KHR_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pBlitImageInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBlitImage2KHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pBlitImageInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdBlitImage2KHR(void *args)
{
    struct vkCmdBlitImage2KHR_params *params = args;
    VkBlitImageInfo2_host pBlitImageInfo_host;

    TRACE("%p, %p\n", params->commandBuffer, params->pBlitImageInfo);

    convert_VkBlitImageInfo2_win32_to_host(params->pBlitImageInfo, &pBlitImageInfo_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBlitImage2KHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pBlitImageInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdBuildAccelerationStructureNV(void *args)
{
    struct vkCmdBuildAccelerationStructureNV_params *params = args;

    TRACE("%p, %p, 0x%s, 0x%s, %u, 0x%s, 0x%s, 0x%s, 0x%s\n", params->commandBuffer, params->pInfo, wine_dbgstr_longlong(params->instanceData), wine_dbgstr_longlong(params->instanceOffset), params->update, wine_dbgstr_longlong(params->dst), wine_dbgstr_longlong(params->src), wine_dbgstr_longlong(params->scratch), wine_dbgstr_longlong(params->scratchOffset));

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBuildAccelerationStructureNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pInfo, params->instanceData, params->instanceOffset, params->update, params->dst, params->src, params->scratch, params->scratchOffset);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdBuildAccelerationStructureNV(void *args)
{
    struct vkCmdBuildAccelerationStructureNV_params *params = args;
    VkAccelerationStructureInfoNV_host pInfo_host;
    struct conversion_context ctx;

    TRACE("%p, %p, 0x%s, 0x%s, %u, 0x%s, 0x%s, 0x%s, 0x%s\n", params->commandBuffer, params->pInfo, wine_dbgstr_longlong(params->instanceData), wine_dbgstr_longlong(params->instanceOffset), params->update, wine_dbgstr_longlong(params->dst), wine_dbgstr_longlong(params->src), wine_dbgstr_longlong(params->scratch), wine_dbgstr_longlong(params->scratchOffset));

    init_conversion_context(&ctx);
    convert_VkAccelerationStructureInfoNV_win32_to_host(&ctx, params->pInfo, &pInfo_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBuildAccelerationStructureNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pInfo_host, params->instanceData, params->instanceOffset, params->update, params->dst, params->src, params->scratch, params->scratchOffset);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdBuildAccelerationStructuresIndirectKHR(void *args)
{
    struct vkCmdBuildAccelerationStructuresIndirectKHR_params *params = args;

    TRACE("%p, %u, %p, %p, %p, %p\n", params->commandBuffer, params->infoCount, params->pInfos, params->pIndirectDeviceAddresses, params->pIndirectStrides, params->ppMaxPrimitiveCounts);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBuildAccelerationStructuresIndirectKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->infoCount, params->pInfos, params->pIndirectDeviceAddresses, params->pIndirectStrides, params->ppMaxPrimitiveCounts);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdBuildAccelerationStructuresIndirectKHR(void *args)
{
    struct vkCmdBuildAccelerationStructuresIndirectKHR_params *params = args;
    VkAccelerationStructureBuildGeometryInfoKHR_host *pInfos_host;
    struct conversion_context ctx;

    TRACE("%p, %u, %p, %p, %p, %p\n", params->commandBuffer, params->infoCount, params->pInfos, params->pIndirectDeviceAddresses, params->pIndirectStrides, params->ppMaxPrimitiveCounts);

    init_conversion_context(&ctx);
    pInfos_host = convert_VkAccelerationStructureBuildGeometryInfoKHR_array_win32_to_host(&ctx, params->pInfos, params->infoCount);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBuildAccelerationStructuresIndirectKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->infoCount, pInfos_host, params->pIndirectDeviceAddresses, params->pIndirectStrides, params->ppMaxPrimitiveCounts);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdBuildAccelerationStructuresKHR(void *args)
{
    struct vkCmdBuildAccelerationStructuresKHR_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->commandBuffer, params->infoCount, params->pInfos, params->ppBuildRangeInfos);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBuildAccelerationStructuresKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->infoCount, params->pInfos, params->ppBuildRangeInfos);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdBuildAccelerationStructuresKHR(void *args)
{
    struct vkCmdBuildAccelerationStructuresKHR_params *params = args;
    VkAccelerationStructureBuildGeometryInfoKHR_host *pInfos_host;
    struct conversion_context ctx;

    TRACE("%p, %u, %p, %p\n", params->commandBuffer, params->infoCount, params->pInfos, params->ppBuildRangeInfos);

    init_conversion_context(&ctx);
    pInfos_host = convert_VkAccelerationStructureBuildGeometryInfoKHR_array_win32_to_host(&ctx, params->pInfos, params->infoCount);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBuildAccelerationStructuresKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->infoCount, pInfos_host, params->ppBuildRangeInfos);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdBuildMicromapsEXT(void *args)
{
    struct vkCmdBuildMicromapsEXT_params *params = args;

    TRACE("%p, %u, %p\n", params->commandBuffer, params->infoCount, params->pInfos);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBuildMicromapsEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->infoCount, params->pInfos);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdBuildMicromapsEXT(void *args)
{
    struct vkCmdBuildMicromapsEXT_params *params = args;
    VkMicromapBuildInfoEXT_host *pInfos_host;
    struct conversion_context ctx;

    TRACE("%p, %u, %p\n", params->commandBuffer, params->infoCount, params->pInfos);

    init_conversion_context(&ctx);
    pInfos_host = convert_VkMicromapBuildInfoEXT_array_win32_to_host(&ctx, params->pInfos, params->infoCount);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdBuildMicromapsEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->infoCount, pInfos_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdClearAttachments(void *args)
{
    struct vkCmdClearAttachments_params *params = args;

    TRACE("%p, %u, %p, %u, %p\n", params->commandBuffer, params->attachmentCount, params->pAttachments, params->rectCount, params->pRects);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdClearAttachments(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->attachmentCount, params->pAttachments, params->rectCount, params->pRects);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdClearAttachments(void *args)
{
    struct vkCmdClearAttachments_params *params = args;

    TRACE("%p, %u, %p, %u, %p\n", params->commandBuffer, params->attachmentCount, params->pAttachments, params->rectCount, params->pRects);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdClearAttachments(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->attachmentCount, params->pAttachments, params->rectCount, params->pRects);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdClearColorImage(void *args)
{
    struct vkCmdClearColorImage_params *params = args;

    TRACE("%p, 0x%s, %#x, %p, %u, %p\n", params->commandBuffer, wine_dbgstr_longlong(params->image), params->imageLayout, params->pColor, params->rangeCount, params->pRanges);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdClearColorImage(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->image, params->imageLayout, params->pColor, params->rangeCount, params->pRanges);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdClearColorImage(void *args)
{
    struct vkCmdClearColorImage_params *params = args;

    TRACE("%p, 0x%s, %#x, %p, %u, %p\n", params->commandBuffer, wine_dbgstr_longlong(params->image), params->imageLayout, params->pColor, params->rangeCount, params->pRanges);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdClearColorImage(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->image, params->imageLayout, params->pColor, params->rangeCount, params->pRanges);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdClearDepthStencilImage(void *args)
{
    struct vkCmdClearDepthStencilImage_params *params = args;

    TRACE("%p, 0x%s, %#x, %p, %u, %p\n", params->commandBuffer, wine_dbgstr_longlong(params->image), params->imageLayout, params->pDepthStencil, params->rangeCount, params->pRanges);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdClearDepthStencilImage(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->image, params->imageLayout, params->pDepthStencil, params->rangeCount, params->pRanges);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdClearDepthStencilImage(void *args)
{
    struct vkCmdClearDepthStencilImage_params *params = args;

    TRACE("%p, 0x%s, %#x, %p, %u, %p\n", params->commandBuffer, wine_dbgstr_longlong(params->image), params->imageLayout, params->pDepthStencil, params->rangeCount, params->pRanges);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdClearDepthStencilImage(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->image, params->imageLayout, params->pDepthStencil, params->rangeCount, params->pRanges);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdCopyAccelerationStructureKHR(void *args)
{
    struct vkCmdCopyAccelerationStructureKHR_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyAccelerationStructureKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdCopyAccelerationStructureKHR(void *args)
{
    struct vkCmdCopyAccelerationStructureKHR_params *params = args;
    VkCopyAccelerationStructureInfoKHR_host pInfo_host;

    TRACE("%p, %p\n", params->commandBuffer, params->pInfo);

    convert_VkCopyAccelerationStructureInfoKHR_win32_to_host(params->pInfo, &pInfo_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyAccelerationStructureKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdCopyAccelerationStructureNV(void *args)
{
    struct vkCmdCopyAccelerationStructureNV_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %#x\n", params->commandBuffer, wine_dbgstr_longlong(params->dst), wine_dbgstr_longlong(params->src), params->mode);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyAccelerationStructureNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->dst, params->src, params->mode);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdCopyAccelerationStructureNV(void *args)
{
    struct vkCmdCopyAccelerationStructureNV_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %#x\n", params->commandBuffer, wine_dbgstr_longlong(params->dst), wine_dbgstr_longlong(params->src), params->mode);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyAccelerationStructureNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->dst, params->src, params->mode);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdCopyAccelerationStructureToMemoryKHR(void *args)
{
    struct vkCmdCopyAccelerationStructureToMemoryKHR_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyAccelerationStructureToMemoryKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdCopyAccelerationStructureToMemoryKHR(void *args)
{
    struct vkCmdCopyAccelerationStructureToMemoryKHR_params *params = args;
    VkCopyAccelerationStructureToMemoryInfoKHR_host pInfo_host;

    TRACE("%p, %p\n", params->commandBuffer, params->pInfo);

    convert_VkCopyAccelerationStructureToMemoryInfoKHR_win32_to_host(params->pInfo, &pInfo_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyAccelerationStructureToMemoryKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdCopyBuffer(void *args)
{
    struct vkCmdCopyBuffer_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %u, %p\n", params->commandBuffer, wine_dbgstr_longlong(params->srcBuffer), wine_dbgstr_longlong(params->dstBuffer), params->regionCount, params->pRegions);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyBuffer(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->srcBuffer, params->dstBuffer, params->regionCount, params->pRegions);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdCopyBuffer(void *args)
{
    struct vkCmdCopyBuffer_params *params = args;
    VkBufferCopy_host *pRegions_host;
    struct conversion_context ctx;

    TRACE("%p, 0x%s, 0x%s, %u, %p\n", params->commandBuffer, wine_dbgstr_longlong(params->srcBuffer), wine_dbgstr_longlong(params->dstBuffer), params->regionCount, params->pRegions);

    init_conversion_context(&ctx);
    pRegions_host = convert_VkBufferCopy_array_win32_to_host(&ctx, params->pRegions, params->regionCount);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyBuffer(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->srcBuffer, params->dstBuffer, params->regionCount, pRegions_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdCopyBuffer2(void *args)
{
    struct vkCmdCopyBuffer2_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pCopyBufferInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyBuffer2(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pCopyBufferInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdCopyBuffer2(void *args)
{
    struct vkCmdCopyBuffer2_params *params = args;
    VkCopyBufferInfo2_host pCopyBufferInfo_host;
    struct conversion_context ctx;

    TRACE("%p, %p\n", params->commandBuffer, params->pCopyBufferInfo);

    init_conversion_context(&ctx);
    convert_VkCopyBufferInfo2_win32_to_host(&ctx, params->pCopyBufferInfo, &pCopyBufferInfo_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyBuffer2(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pCopyBufferInfo_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdCopyBuffer2KHR(void *args)
{
    struct vkCmdCopyBuffer2KHR_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pCopyBufferInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyBuffer2KHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pCopyBufferInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdCopyBuffer2KHR(void *args)
{
    struct vkCmdCopyBuffer2KHR_params *params = args;
    VkCopyBufferInfo2_host pCopyBufferInfo_host;
    struct conversion_context ctx;

    TRACE("%p, %p\n", params->commandBuffer, params->pCopyBufferInfo);

    init_conversion_context(&ctx);
    convert_VkCopyBufferInfo2_win32_to_host(&ctx, params->pCopyBufferInfo, &pCopyBufferInfo_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyBuffer2KHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pCopyBufferInfo_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdCopyBufferToImage(void *args)
{
    struct vkCmdCopyBufferToImage_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %#x, %u, %p\n", params->commandBuffer, wine_dbgstr_longlong(params->srcBuffer), wine_dbgstr_longlong(params->dstImage), params->dstImageLayout, params->regionCount, params->pRegions);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyBufferToImage(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->srcBuffer, params->dstImage, params->dstImageLayout, params->regionCount, params->pRegions);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdCopyBufferToImage(void *args)
{
    struct vkCmdCopyBufferToImage_params *params = args;
    VkBufferImageCopy_host *pRegions_host;
    struct conversion_context ctx;

    TRACE("%p, 0x%s, 0x%s, %#x, %u, %p\n", params->commandBuffer, wine_dbgstr_longlong(params->srcBuffer), wine_dbgstr_longlong(params->dstImage), params->dstImageLayout, params->regionCount, params->pRegions);

    init_conversion_context(&ctx);
    pRegions_host = convert_VkBufferImageCopy_array_win32_to_host(&ctx, params->pRegions, params->regionCount);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyBufferToImage(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->srcBuffer, params->dstImage, params->dstImageLayout, params->regionCount, pRegions_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdCopyBufferToImage2(void *args)
{
    struct vkCmdCopyBufferToImage2_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pCopyBufferToImageInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyBufferToImage2(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pCopyBufferToImageInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdCopyBufferToImage2(void *args)
{
    struct vkCmdCopyBufferToImage2_params *params = args;
    VkCopyBufferToImageInfo2_host pCopyBufferToImageInfo_host;
    struct conversion_context ctx;

    TRACE("%p, %p\n", params->commandBuffer, params->pCopyBufferToImageInfo);

    init_conversion_context(&ctx);
    convert_VkCopyBufferToImageInfo2_win32_to_host(&ctx, params->pCopyBufferToImageInfo, &pCopyBufferToImageInfo_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyBufferToImage2(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pCopyBufferToImageInfo_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdCopyBufferToImage2KHR(void *args)
{
    struct vkCmdCopyBufferToImage2KHR_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pCopyBufferToImageInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyBufferToImage2KHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pCopyBufferToImageInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdCopyBufferToImage2KHR(void *args)
{
    struct vkCmdCopyBufferToImage2KHR_params *params = args;
    VkCopyBufferToImageInfo2_host pCopyBufferToImageInfo_host;
    struct conversion_context ctx;

    TRACE("%p, %p\n", params->commandBuffer, params->pCopyBufferToImageInfo);

    init_conversion_context(&ctx);
    convert_VkCopyBufferToImageInfo2_win32_to_host(&ctx, params->pCopyBufferToImageInfo, &pCopyBufferToImageInfo_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyBufferToImage2KHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pCopyBufferToImageInfo_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdCopyImage(void *args)
{
    struct vkCmdCopyImage_params *params = args;

    TRACE("%p, 0x%s, %#x, 0x%s, %#x, %u, %p\n", params->commandBuffer, wine_dbgstr_longlong(params->srcImage), params->srcImageLayout, wine_dbgstr_longlong(params->dstImage), params->dstImageLayout, params->regionCount, params->pRegions);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyImage(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->srcImage, params->srcImageLayout, params->dstImage, params->dstImageLayout, params->regionCount, params->pRegions);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdCopyImage(void *args)
{
    struct vkCmdCopyImage_params *params = args;

    TRACE("%p, 0x%s, %#x, 0x%s, %#x, %u, %p\n", params->commandBuffer, wine_dbgstr_longlong(params->srcImage), params->srcImageLayout, wine_dbgstr_longlong(params->dstImage), params->dstImageLayout, params->regionCount, params->pRegions);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyImage(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->srcImage, params->srcImageLayout, params->dstImage, params->dstImageLayout, params->regionCount, params->pRegions);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdCopyImage2(void *args)
{
    struct vkCmdCopyImage2_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pCopyImageInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyImage2(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pCopyImageInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdCopyImage2(void *args)
{
    struct vkCmdCopyImage2_params *params = args;
    VkCopyImageInfo2_host pCopyImageInfo_host;

    TRACE("%p, %p\n", params->commandBuffer, params->pCopyImageInfo);

    convert_VkCopyImageInfo2_win32_to_host(params->pCopyImageInfo, &pCopyImageInfo_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyImage2(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pCopyImageInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdCopyImage2KHR(void *args)
{
    struct vkCmdCopyImage2KHR_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pCopyImageInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyImage2KHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pCopyImageInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdCopyImage2KHR(void *args)
{
    struct vkCmdCopyImage2KHR_params *params = args;
    VkCopyImageInfo2_host pCopyImageInfo_host;

    TRACE("%p, %p\n", params->commandBuffer, params->pCopyImageInfo);

    convert_VkCopyImageInfo2_win32_to_host(params->pCopyImageInfo, &pCopyImageInfo_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyImage2KHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pCopyImageInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdCopyImageToBuffer(void *args)
{
    struct vkCmdCopyImageToBuffer_params *params = args;

    TRACE("%p, 0x%s, %#x, 0x%s, %u, %p\n", params->commandBuffer, wine_dbgstr_longlong(params->srcImage), params->srcImageLayout, wine_dbgstr_longlong(params->dstBuffer), params->regionCount, params->pRegions);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyImageToBuffer(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->srcImage, params->srcImageLayout, params->dstBuffer, params->regionCount, params->pRegions);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdCopyImageToBuffer(void *args)
{
    struct vkCmdCopyImageToBuffer_params *params = args;
    VkBufferImageCopy_host *pRegions_host;
    struct conversion_context ctx;

    TRACE("%p, 0x%s, %#x, 0x%s, %u, %p\n", params->commandBuffer, wine_dbgstr_longlong(params->srcImage), params->srcImageLayout, wine_dbgstr_longlong(params->dstBuffer), params->regionCount, params->pRegions);

    init_conversion_context(&ctx);
    pRegions_host = convert_VkBufferImageCopy_array_win32_to_host(&ctx, params->pRegions, params->regionCount);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyImageToBuffer(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->srcImage, params->srcImageLayout, params->dstBuffer, params->regionCount, pRegions_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdCopyImageToBuffer2(void *args)
{
    struct vkCmdCopyImageToBuffer2_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pCopyImageToBufferInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyImageToBuffer2(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pCopyImageToBufferInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdCopyImageToBuffer2(void *args)
{
    struct vkCmdCopyImageToBuffer2_params *params = args;
    VkCopyImageToBufferInfo2_host pCopyImageToBufferInfo_host;
    struct conversion_context ctx;

    TRACE("%p, %p\n", params->commandBuffer, params->pCopyImageToBufferInfo);

    init_conversion_context(&ctx);
    convert_VkCopyImageToBufferInfo2_win32_to_host(&ctx, params->pCopyImageToBufferInfo, &pCopyImageToBufferInfo_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyImageToBuffer2(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pCopyImageToBufferInfo_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdCopyImageToBuffer2KHR(void *args)
{
    struct vkCmdCopyImageToBuffer2KHR_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pCopyImageToBufferInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyImageToBuffer2KHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pCopyImageToBufferInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdCopyImageToBuffer2KHR(void *args)
{
    struct vkCmdCopyImageToBuffer2KHR_params *params = args;
    VkCopyImageToBufferInfo2_host pCopyImageToBufferInfo_host;
    struct conversion_context ctx;

    TRACE("%p, %p\n", params->commandBuffer, params->pCopyImageToBufferInfo);

    init_conversion_context(&ctx);
    convert_VkCopyImageToBufferInfo2_win32_to_host(&ctx, params->pCopyImageToBufferInfo, &pCopyImageToBufferInfo_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyImageToBuffer2KHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pCopyImageToBufferInfo_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdCopyMemoryIndirectNV(void *args)
{
    struct vkCmdCopyMemoryIndirectNV_params *params = args;

    TRACE("%p, 0x%s, %u, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->copyBufferAddress), params->copyCount, params->stride);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyMemoryIndirectNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->copyBufferAddress, params->copyCount, params->stride);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdCopyMemoryIndirectNV(void *args)
{
    struct vkCmdCopyMemoryIndirectNV_params *params = args;

    TRACE("%p, 0x%s, %u, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->copyBufferAddress), params->copyCount, params->stride);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyMemoryIndirectNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->copyBufferAddress, params->copyCount, params->stride);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdCopyMemoryToAccelerationStructureKHR(void *args)
{
    struct vkCmdCopyMemoryToAccelerationStructureKHR_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyMemoryToAccelerationStructureKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdCopyMemoryToAccelerationStructureKHR(void *args)
{
    struct vkCmdCopyMemoryToAccelerationStructureKHR_params *params = args;
    VkCopyMemoryToAccelerationStructureInfoKHR_host pInfo_host;

    TRACE("%p, %p\n", params->commandBuffer, params->pInfo);

    convert_VkCopyMemoryToAccelerationStructureInfoKHR_win32_to_host(params->pInfo, &pInfo_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyMemoryToAccelerationStructureKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdCopyMemoryToImageIndirectNV(void *args)
{
    struct vkCmdCopyMemoryToImageIndirectNV_params *params = args;

    TRACE("%p, 0x%s, %u, %u, 0x%s, %#x, %p\n", params->commandBuffer, wine_dbgstr_longlong(params->copyBufferAddress), params->copyCount, params->stride, wine_dbgstr_longlong(params->dstImage), params->dstImageLayout, params->pImageSubresources);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyMemoryToImageIndirectNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->copyBufferAddress, params->copyCount, params->stride, params->dstImage, params->dstImageLayout, params->pImageSubresources);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdCopyMemoryToImageIndirectNV(void *args)
{
    struct vkCmdCopyMemoryToImageIndirectNV_params *params = args;

    TRACE("%p, 0x%s, %u, %u, 0x%s, %#x, %p\n", params->commandBuffer, wine_dbgstr_longlong(params->copyBufferAddress), params->copyCount, params->stride, wine_dbgstr_longlong(params->dstImage), params->dstImageLayout, params->pImageSubresources);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyMemoryToImageIndirectNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->copyBufferAddress, params->copyCount, params->stride, params->dstImage, params->dstImageLayout, params->pImageSubresources);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdCopyMemoryToMicromapEXT(void *args)
{
    struct vkCmdCopyMemoryToMicromapEXT_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyMemoryToMicromapEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdCopyMemoryToMicromapEXT(void *args)
{
    struct vkCmdCopyMemoryToMicromapEXT_params *params = args;
    VkCopyMemoryToMicromapInfoEXT_host pInfo_host;

    TRACE("%p, %p\n", params->commandBuffer, params->pInfo);

    convert_VkCopyMemoryToMicromapInfoEXT_win32_to_host(params->pInfo, &pInfo_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyMemoryToMicromapEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdCopyMicromapEXT(void *args)
{
    struct vkCmdCopyMicromapEXT_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyMicromapEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdCopyMicromapEXT(void *args)
{
    struct vkCmdCopyMicromapEXT_params *params = args;
    VkCopyMicromapInfoEXT_host pInfo_host;

    TRACE("%p, %p\n", params->commandBuffer, params->pInfo);

    convert_VkCopyMicromapInfoEXT_win32_to_host(params->pInfo, &pInfo_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyMicromapEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdCopyMicromapToMemoryEXT(void *args)
{
    struct vkCmdCopyMicromapToMemoryEXT_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyMicromapToMemoryEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdCopyMicromapToMemoryEXT(void *args)
{
    struct vkCmdCopyMicromapToMemoryEXT_params *params = args;
    VkCopyMicromapToMemoryInfoEXT_host pInfo_host;

    TRACE("%p, %p\n", params->commandBuffer, params->pInfo);

    convert_VkCopyMicromapToMemoryInfoEXT_win32_to_host(params->pInfo, &pInfo_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyMicromapToMemoryEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdCopyQueryPoolResults(void *args)
{
    struct vkCmdCopyQueryPoolResults_params *params = args;

    TRACE("%p, 0x%s, %u, %u, 0x%s, 0x%s, 0x%s, %#x\n", params->commandBuffer, wine_dbgstr_longlong(params->queryPool), params->firstQuery, params->queryCount, wine_dbgstr_longlong(params->dstBuffer), wine_dbgstr_longlong(params->dstOffset), wine_dbgstr_longlong(params->stride), params->flags);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyQueryPoolResults(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->queryPool, params->firstQuery, params->queryCount, params->dstBuffer, params->dstOffset, params->stride, params->flags);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdCopyQueryPoolResults(void *args)
{
    struct vkCmdCopyQueryPoolResults_params *params = args;

    TRACE("%p, 0x%s, %u, %u, 0x%s, 0x%s, 0x%s, %#x\n", params->commandBuffer, wine_dbgstr_longlong(params->queryPool), params->firstQuery, params->queryCount, wine_dbgstr_longlong(params->dstBuffer), wine_dbgstr_longlong(params->dstOffset), wine_dbgstr_longlong(params->stride), params->flags);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCopyQueryPoolResults(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->queryPool, params->firstQuery, params->queryCount, params->dstBuffer, params->dstOffset, params->stride, params->flags);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdCuLaunchKernelNVX(void *args)
{
    struct vkCmdCuLaunchKernelNVX_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pLaunchInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCuLaunchKernelNVX(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pLaunchInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdCuLaunchKernelNVX(void *args)
{
    struct vkCmdCuLaunchKernelNVX_params *params = args;
    VkCuLaunchInfoNVX_host pLaunchInfo_host;

    TRACE("%p, %p\n", params->commandBuffer, params->pLaunchInfo);

    convert_VkCuLaunchInfoNVX_win32_to_host(params->pLaunchInfo, &pLaunchInfo_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdCuLaunchKernelNVX(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pLaunchInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdDebugMarkerBeginEXT(void *args)
{
    struct vkCmdDebugMarkerBeginEXT_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pMarkerInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDebugMarkerBeginEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pMarkerInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdDebugMarkerBeginEXT(void *args)
{
    struct vkCmdDebugMarkerBeginEXT_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pMarkerInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDebugMarkerBeginEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pMarkerInfo);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdDebugMarkerEndEXT(void *args)
{
    struct vkCmdDebugMarkerEndEXT_params *params = args;

    TRACE("%p\n", params->commandBuffer);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDebugMarkerEndEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdDebugMarkerEndEXT(void *args)
{
    struct vkCmdDebugMarkerEndEXT_params *params = args;

    TRACE("%p\n", params->commandBuffer);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDebugMarkerEndEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdDebugMarkerInsertEXT(void *args)
{
    struct vkCmdDebugMarkerInsertEXT_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pMarkerInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDebugMarkerInsertEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pMarkerInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdDebugMarkerInsertEXT(void *args)
{
    struct vkCmdDebugMarkerInsertEXT_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pMarkerInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDebugMarkerInsertEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pMarkerInfo);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdDecompressMemoryIndirectCountNV(void *args)
{
    struct vkCmdDecompressMemoryIndirectCountNV_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->indirectCommandsAddress), wine_dbgstr_longlong(params->indirectCommandsCountAddress), params->stride);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDecompressMemoryIndirectCountNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->indirectCommandsAddress, params->indirectCommandsCountAddress, params->stride);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdDecompressMemoryIndirectCountNV(void *args)
{
    struct vkCmdDecompressMemoryIndirectCountNV_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->indirectCommandsAddress), wine_dbgstr_longlong(params->indirectCommandsCountAddress), params->stride);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDecompressMemoryIndirectCountNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->indirectCommandsAddress, params->indirectCommandsCountAddress, params->stride);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdDecompressMemoryNV(void *args)
{
    struct vkCmdDecompressMemoryNV_params *params = args;

    TRACE("%p, %u, %p\n", params->commandBuffer, params->decompressRegionCount, params->pDecompressMemoryRegions);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDecompressMemoryNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->decompressRegionCount, params->pDecompressMemoryRegions);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdDecompressMemoryNV(void *args)
{
    struct vkCmdDecompressMemoryNV_params *params = args;
    VkDecompressMemoryRegionNV_host *pDecompressMemoryRegions_host;
    struct conversion_context ctx;

    TRACE("%p, %u, %p\n", params->commandBuffer, params->decompressRegionCount, params->pDecompressMemoryRegions);

    init_conversion_context(&ctx);
    pDecompressMemoryRegions_host = convert_VkDecompressMemoryRegionNV_array_win32_to_host(&ctx, params->pDecompressMemoryRegions, params->decompressRegionCount);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDecompressMemoryNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->decompressRegionCount, pDecompressMemoryRegions_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdDispatch(void *args)
{
    struct vkCmdDispatch_params *params = args;

    TRACE("%p, %u, %u, %u\n", params->commandBuffer, params->groupCountX, params->groupCountY, params->groupCountZ);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDispatch(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->groupCountX, params->groupCountY, params->groupCountZ);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdDispatch(void *args)
{
    struct vkCmdDispatch_params *params = args;

    TRACE("%p, %u, %u, %u\n", params->commandBuffer, params->groupCountX, params->groupCountY, params->groupCountZ);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDispatch(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->groupCountX, params->groupCountY, params->groupCountZ);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdDispatchBase(void *args)
{
    struct vkCmdDispatchBase_params *params = args;

    TRACE("%p, %u, %u, %u, %u, %u, %u\n", params->commandBuffer, params->baseGroupX, params->baseGroupY, params->baseGroupZ, params->groupCountX, params->groupCountY, params->groupCountZ);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDispatchBase(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->baseGroupX, params->baseGroupY, params->baseGroupZ, params->groupCountX, params->groupCountY, params->groupCountZ);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdDispatchBase(void *args)
{
    struct vkCmdDispatchBase_params *params = args;

    TRACE("%p, %u, %u, %u, %u, %u, %u\n", params->commandBuffer, params->baseGroupX, params->baseGroupY, params->baseGroupZ, params->groupCountX, params->groupCountY, params->groupCountZ);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDispatchBase(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->baseGroupX, params->baseGroupY, params->baseGroupZ, params->groupCountX, params->groupCountY, params->groupCountZ);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdDispatchBaseKHR(void *args)
{
    struct vkCmdDispatchBaseKHR_params *params = args;

    TRACE("%p, %u, %u, %u, %u, %u, %u\n", params->commandBuffer, params->baseGroupX, params->baseGroupY, params->baseGroupZ, params->groupCountX, params->groupCountY, params->groupCountZ);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDispatchBaseKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->baseGroupX, params->baseGroupY, params->baseGroupZ, params->groupCountX, params->groupCountY, params->groupCountZ);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdDispatchBaseKHR(void *args)
{
    struct vkCmdDispatchBaseKHR_params *params = args;

    TRACE("%p, %u, %u, %u, %u, %u, %u\n", params->commandBuffer, params->baseGroupX, params->baseGroupY, params->baseGroupZ, params->groupCountX, params->groupCountY, params->groupCountZ);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDispatchBaseKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->baseGroupX, params->baseGroupY, params->baseGroupZ, params->groupCountX, params->groupCountY, params->groupCountZ);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdDispatchIndirect(void *args)
{
    struct vkCmdDispatchIndirect_params *params = args;

    TRACE("%p, 0x%s, 0x%s\n", params->commandBuffer, wine_dbgstr_longlong(params->buffer), wine_dbgstr_longlong(params->offset));

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDispatchIndirect(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->buffer, params->offset);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdDispatchIndirect(void *args)
{
    struct vkCmdDispatchIndirect_params *params = args;

    TRACE("%p, 0x%s, 0x%s\n", params->commandBuffer, wine_dbgstr_longlong(params->buffer), wine_dbgstr_longlong(params->offset));

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDispatchIndirect(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->buffer, params->offset);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdDraw(void *args)
{
    struct vkCmdDraw_params *params = args;

    TRACE("%p, %u, %u, %u, %u\n", params->commandBuffer, params->vertexCount, params->instanceCount, params->firstVertex, params->firstInstance);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDraw(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->vertexCount, params->instanceCount, params->firstVertex, params->firstInstance);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdDraw(void *args)
{
    struct vkCmdDraw_params *params = args;

    TRACE("%p, %u, %u, %u, %u\n", params->commandBuffer, params->vertexCount, params->instanceCount, params->firstVertex, params->firstInstance);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDraw(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->vertexCount, params->instanceCount, params->firstVertex, params->firstInstance);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdDrawIndexed(void *args)
{
    struct vkCmdDrawIndexed_params *params = args;

    TRACE("%p, %u, %u, %u, %d, %u\n", params->commandBuffer, params->indexCount, params->instanceCount, params->firstIndex, params->vertexOffset, params->firstInstance);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawIndexed(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->indexCount, params->instanceCount, params->firstIndex, params->vertexOffset, params->firstInstance);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdDrawIndexed(void *args)
{
    struct vkCmdDrawIndexed_params *params = args;

    TRACE("%p, %u, %u, %u, %d, %u\n", params->commandBuffer, params->indexCount, params->instanceCount, params->firstIndex, params->vertexOffset, params->firstInstance);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawIndexed(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->indexCount, params->instanceCount, params->firstIndex, params->vertexOffset, params->firstInstance);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdDrawIndexedIndirect(void *args)
{
    struct vkCmdDrawIndexedIndirect_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %u, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->buffer), wine_dbgstr_longlong(params->offset), params->drawCount, params->stride);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawIndexedIndirect(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->buffer, params->offset, params->drawCount, params->stride);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdDrawIndexedIndirect(void *args)
{
    struct vkCmdDrawIndexedIndirect_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %u, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->buffer), wine_dbgstr_longlong(params->offset), params->drawCount, params->stride);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawIndexedIndirect(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->buffer, params->offset, params->drawCount, params->stride);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdDrawIndexedIndirectCount(void *args)
{
    struct vkCmdDrawIndexedIndirectCount_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s, 0x%s, %u, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->buffer), wine_dbgstr_longlong(params->offset), wine_dbgstr_longlong(params->countBuffer), wine_dbgstr_longlong(params->countBufferOffset), params->maxDrawCount, params->stride);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawIndexedIndirectCount(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->buffer, params->offset, params->countBuffer, params->countBufferOffset, params->maxDrawCount, params->stride);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdDrawIndexedIndirectCount(void *args)
{
    struct vkCmdDrawIndexedIndirectCount_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s, 0x%s, %u, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->buffer), wine_dbgstr_longlong(params->offset), wine_dbgstr_longlong(params->countBuffer), wine_dbgstr_longlong(params->countBufferOffset), params->maxDrawCount, params->stride);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawIndexedIndirectCount(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->buffer, params->offset, params->countBuffer, params->countBufferOffset, params->maxDrawCount, params->stride);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdDrawIndexedIndirectCountAMD(void *args)
{
    struct vkCmdDrawIndexedIndirectCountAMD_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s, 0x%s, %u, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->buffer), wine_dbgstr_longlong(params->offset), wine_dbgstr_longlong(params->countBuffer), wine_dbgstr_longlong(params->countBufferOffset), params->maxDrawCount, params->stride);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawIndexedIndirectCountAMD(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->buffer, params->offset, params->countBuffer, params->countBufferOffset, params->maxDrawCount, params->stride);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdDrawIndexedIndirectCountAMD(void *args)
{
    struct vkCmdDrawIndexedIndirectCountAMD_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s, 0x%s, %u, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->buffer), wine_dbgstr_longlong(params->offset), wine_dbgstr_longlong(params->countBuffer), wine_dbgstr_longlong(params->countBufferOffset), params->maxDrawCount, params->stride);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawIndexedIndirectCountAMD(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->buffer, params->offset, params->countBuffer, params->countBufferOffset, params->maxDrawCount, params->stride);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdDrawIndexedIndirectCountKHR(void *args)
{
    struct vkCmdDrawIndexedIndirectCountKHR_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s, 0x%s, %u, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->buffer), wine_dbgstr_longlong(params->offset), wine_dbgstr_longlong(params->countBuffer), wine_dbgstr_longlong(params->countBufferOffset), params->maxDrawCount, params->stride);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawIndexedIndirectCountKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->buffer, params->offset, params->countBuffer, params->countBufferOffset, params->maxDrawCount, params->stride);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdDrawIndexedIndirectCountKHR(void *args)
{
    struct vkCmdDrawIndexedIndirectCountKHR_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s, 0x%s, %u, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->buffer), wine_dbgstr_longlong(params->offset), wine_dbgstr_longlong(params->countBuffer), wine_dbgstr_longlong(params->countBufferOffset), params->maxDrawCount, params->stride);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawIndexedIndirectCountKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->buffer, params->offset, params->countBuffer, params->countBufferOffset, params->maxDrawCount, params->stride);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdDrawIndirect(void *args)
{
    struct vkCmdDrawIndirect_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %u, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->buffer), wine_dbgstr_longlong(params->offset), params->drawCount, params->stride);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawIndirect(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->buffer, params->offset, params->drawCount, params->stride);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdDrawIndirect(void *args)
{
    struct vkCmdDrawIndirect_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %u, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->buffer), wine_dbgstr_longlong(params->offset), params->drawCount, params->stride);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawIndirect(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->buffer, params->offset, params->drawCount, params->stride);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdDrawIndirectByteCountEXT(void *args)
{
    struct vkCmdDrawIndirectByteCountEXT_params *params = args;

    TRACE("%p, %u, %u, 0x%s, 0x%s, %u, %u\n", params->commandBuffer, params->instanceCount, params->firstInstance, wine_dbgstr_longlong(params->counterBuffer), wine_dbgstr_longlong(params->counterBufferOffset), params->counterOffset, params->vertexStride);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawIndirectByteCountEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->instanceCount, params->firstInstance, params->counterBuffer, params->counterBufferOffset, params->counterOffset, params->vertexStride);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdDrawIndirectByteCountEXT(void *args)
{
    struct vkCmdDrawIndirectByteCountEXT_params *params = args;

    TRACE("%p, %u, %u, 0x%s, 0x%s, %u, %u\n", params->commandBuffer, params->instanceCount, params->firstInstance, wine_dbgstr_longlong(params->counterBuffer), wine_dbgstr_longlong(params->counterBufferOffset), params->counterOffset, params->vertexStride);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawIndirectByteCountEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->instanceCount, params->firstInstance, params->counterBuffer, params->counterBufferOffset, params->counterOffset, params->vertexStride);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdDrawIndirectCount(void *args)
{
    struct vkCmdDrawIndirectCount_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s, 0x%s, %u, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->buffer), wine_dbgstr_longlong(params->offset), wine_dbgstr_longlong(params->countBuffer), wine_dbgstr_longlong(params->countBufferOffset), params->maxDrawCount, params->stride);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawIndirectCount(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->buffer, params->offset, params->countBuffer, params->countBufferOffset, params->maxDrawCount, params->stride);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdDrawIndirectCount(void *args)
{
    struct vkCmdDrawIndirectCount_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s, 0x%s, %u, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->buffer), wine_dbgstr_longlong(params->offset), wine_dbgstr_longlong(params->countBuffer), wine_dbgstr_longlong(params->countBufferOffset), params->maxDrawCount, params->stride);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawIndirectCount(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->buffer, params->offset, params->countBuffer, params->countBufferOffset, params->maxDrawCount, params->stride);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdDrawIndirectCountAMD(void *args)
{
    struct vkCmdDrawIndirectCountAMD_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s, 0x%s, %u, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->buffer), wine_dbgstr_longlong(params->offset), wine_dbgstr_longlong(params->countBuffer), wine_dbgstr_longlong(params->countBufferOffset), params->maxDrawCount, params->stride);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawIndirectCountAMD(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->buffer, params->offset, params->countBuffer, params->countBufferOffset, params->maxDrawCount, params->stride);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdDrawIndirectCountAMD(void *args)
{
    struct vkCmdDrawIndirectCountAMD_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s, 0x%s, %u, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->buffer), wine_dbgstr_longlong(params->offset), wine_dbgstr_longlong(params->countBuffer), wine_dbgstr_longlong(params->countBufferOffset), params->maxDrawCount, params->stride);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawIndirectCountAMD(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->buffer, params->offset, params->countBuffer, params->countBufferOffset, params->maxDrawCount, params->stride);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdDrawIndirectCountKHR(void *args)
{
    struct vkCmdDrawIndirectCountKHR_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s, 0x%s, %u, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->buffer), wine_dbgstr_longlong(params->offset), wine_dbgstr_longlong(params->countBuffer), wine_dbgstr_longlong(params->countBufferOffset), params->maxDrawCount, params->stride);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawIndirectCountKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->buffer, params->offset, params->countBuffer, params->countBufferOffset, params->maxDrawCount, params->stride);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdDrawIndirectCountKHR(void *args)
{
    struct vkCmdDrawIndirectCountKHR_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s, 0x%s, %u, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->buffer), wine_dbgstr_longlong(params->offset), wine_dbgstr_longlong(params->countBuffer), wine_dbgstr_longlong(params->countBufferOffset), params->maxDrawCount, params->stride);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawIndirectCountKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->buffer, params->offset, params->countBuffer, params->countBufferOffset, params->maxDrawCount, params->stride);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdDrawMeshTasksEXT(void *args)
{
    struct vkCmdDrawMeshTasksEXT_params *params = args;

    TRACE("%p, %u, %u, %u\n", params->commandBuffer, params->groupCountX, params->groupCountY, params->groupCountZ);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawMeshTasksEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->groupCountX, params->groupCountY, params->groupCountZ);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdDrawMeshTasksEXT(void *args)
{
    struct vkCmdDrawMeshTasksEXT_params *params = args;

    TRACE("%p, %u, %u, %u\n", params->commandBuffer, params->groupCountX, params->groupCountY, params->groupCountZ);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawMeshTasksEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->groupCountX, params->groupCountY, params->groupCountZ);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdDrawMeshTasksIndirectCountEXT(void *args)
{
    struct vkCmdDrawMeshTasksIndirectCountEXT_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s, 0x%s, %u, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->buffer), wine_dbgstr_longlong(params->offset), wine_dbgstr_longlong(params->countBuffer), wine_dbgstr_longlong(params->countBufferOffset), params->maxDrawCount, params->stride);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawMeshTasksIndirectCountEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->buffer, params->offset, params->countBuffer, params->countBufferOffset, params->maxDrawCount, params->stride);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdDrawMeshTasksIndirectCountEXT(void *args)
{
    struct vkCmdDrawMeshTasksIndirectCountEXT_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s, 0x%s, %u, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->buffer), wine_dbgstr_longlong(params->offset), wine_dbgstr_longlong(params->countBuffer), wine_dbgstr_longlong(params->countBufferOffset), params->maxDrawCount, params->stride);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawMeshTasksIndirectCountEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->buffer, params->offset, params->countBuffer, params->countBufferOffset, params->maxDrawCount, params->stride);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdDrawMeshTasksIndirectCountNV(void *args)
{
    struct vkCmdDrawMeshTasksIndirectCountNV_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s, 0x%s, %u, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->buffer), wine_dbgstr_longlong(params->offset), wine_dbgstr_longlong(params->countBuffer), wine_dbgstr_longlong(params->countBufferOffset), params->maxDrawCount, params->stride);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawMeshTasksIndirectCountNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->buffer, params->offset, params->countBuffer, params->countBufferOffset, params->maxDrawCount, params->stride);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdDrawMeshTasksIndirectCountNV(void *args)
{
    struct vkCmdDrawMeshTasksIndirectCountNV_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s, 0x%s, %u, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->buffer), wine_dbgstr_longlong(params->offset), wine_dbgstr_longlong(params->countBuffer), wine_dbgstr_longlong(params->countBufferOffset), params->maxDrawCount, params->stride);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawMeshTasksIndirectCountNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->buffer, params->offset, params->countBuffer, params->countBufferOffset, params->maxDrawCount, params->stride);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdDrawMeshTasksIndirectEXT(void *args)
{
    struct vkCmdDrawMeshTasksIndirectEXT_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %u, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->buffer), wine_dbgstr_longlong(params->offset), params->drawCount, params->stride);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawMeshTasksIndirectEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->buffer, params->offset, params->drawCount, params->stride);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdDrawMeshTasksIndirectEXT(void *args)
{
    struct vkCmdDrawMeshTasksIndirectEXT_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %u, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->buffer), wine_dbgstr_longlong(params->offset), params->drawCount, params->stride);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawMeshTasksIndirectEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->buffer, params->offset, params->drawCount, params->stride);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdDrawMeshTasksIndirectNV(void *args)
{
    struct vkCmdDrawMeshTasksIndirectNV_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %u, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->buffer), wine_dbgstr_longlong(params->offset), params->drawCount, params->stride);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawMeshTasksIndirectNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->buffer, params->offset, params->drawCount, params->stride);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdDrawMeshTasksIndirectNV(void *args)
{
    struct vkCmdDrawMeshTasksIndirectNV_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %u, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->buffer), wine_dbgstr_longlong(params->offset), params->drawCount, params->stride);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawMeshTasksIndirectNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->buffer, params->offset, params->drawCount, params->stride);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdDrawMeshTasksNV(void *args)
{
    struct vkCmdDrawMeshTasksNV_params *params = args;

    TRACE("%p, %u, %u\n", params->commandBuffer, params->taskCount, params->firstTask);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawMeshTasksNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->taskCount, params->firstTask);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdDrawMeshTasksNV(void *args)
{
    struct vkCmdDrawMeshTasksNV_params *params = args;

    TRACE("%p, %u, %u\n", params->commandBuffer, params->taskCount, params->firstTask);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawMeshTasksNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->taskCount, params->firstTask);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdDrawMultiEXT(void *args)
{
    struct vkCmdDrawMultiEXT_params *params = args;

    TRACE("%p, %u, %p, %u, %u, %u\n", params->commandBuffer, params->drawCount, params->pVertexInfo, params->instanceCount, params->firstInstance, params->stride);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawMultiEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->drawCount, params->pVertexInfo, params->instanceCount, params->firstInstance, params->stride);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdDrawMultiEXT(void *args)
{
    struct vkCmdDrawMultiEXT_params *params = args;

    TRACE("%p, %u, %p, %u, %u, %u\n", params->commandBuffer, params->drawCount, params->pVertexInfo, params->instanceCount, params->firstInstance, params->stride);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawMultiEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->drawCount, params->pVertexInfo, params->instanceCount, params->firstInstance, params->stride);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdDrawMultiIndexedEXT(void *args)
{
    struct vkCmdDrawMultiIndexedEXT_params *params = args;

    TRACE("%p, %u, %p, %u, %u, %u, %p\n", params->commandBuffer, params->drawCount, params->pIndexInfo, params->instanceCount, params->firstInstance, params->stride, params->pVertexOffset);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawMultiIndexedEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->drawCount, params->pIndexInfo, params->instanceCount, params->firstInstance, params->stride, params->pVertexOffset);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdDrawMultiIndexedEXT(void *args)
{
    struct vkCmdDrawMultiIndexedEXT_params *params = args;

    TRACE("%p, %u, %p, %u, %u, %u, %p\n", params->commandBuffer, params->drawCount, params->pIndexInfo, params->instanceCount, params->firstInstance, params->stride, params->pVertexOffset);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdDrawMultiIndexedEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->drawCount, params->pIndexInfo, params->instanceCount, params->firstInstance, params->stride, params->pVertexOffset);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdEndConditionalRenderingEXT(void *args)
{
    struct vkCmdEndConditionalRenderingEXT_params *params = args;

    TRACE("%p\n", params->commandBuffer);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdEndConditionalRenderingEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdEndConditionalRenderingEXT(void *args)
{
    struct vkCmdEndConditionalRenderingEXT_params *params = args;

    TRACE("%p\n", params->commandBuffer);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdEndConditionalRenderingEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdEndDebugUtilsLabelEXT(void *args)
{
    struct vkCmdEndDebugUtilsLabelEXT_params *params = args;

    TRACE("%p\n", params->commandBuffer);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdEndDebugUtilsLabelEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdEndDebugUtilsLabelEXT(void *args)
{
    struct vkCmdEndDebugUtilsLabelEXT_params *params = args;

    TRACE("%p\n", params->commandBuffer);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdEndDebugUtilsLabelEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdEndQuery(void *args)
{
    struct vkCmdEndQuery_params *params = args;

    TRACE("%p, 0x%s, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->queryPool), params->query);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdEndQuery(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->queryPool, params->query);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdEndQuery(void *args)
{
    struct vkCmdEndQuery_params *params = args;

    TRACE("%p, 0x%s, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->queryPool), params->query);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdEndQuery(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->queryPool, params->query);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdEndQueryIndexedEXT(void *args)
{
    struct vkCmdEndQueryIndexedEXT_params *params = args;

    TRACE("%p, 0x%s, %u, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->queryPool), params->query, params->index);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdEndQueryIndexedEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->queryPool, params->query, params->index);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdEndQueryIndexedEXT(void *args)
{
    struct vkCmdEndQueryIndexedEXT_params *params = args;

    TRACE("%p, 0x%s, %u, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->queryPool), params->query, params->index);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdEndQueryIndexedEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->queryPool, params->query, params->index);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdEndRenderPass(void *args)
{
    struct vkCmdEndRenderPass_params *params = args;

    TRACE("%p\n", params->commandBuffer);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdEndRenderPass(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdEndRenderPass(void *args)
{
    struct vkCmdEndRenderPass_params *params = args;

    TRACE("%p\n", params->commandBuffer);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdEndRenderPass(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdEndRenderPass2(void *args)
{
    struct vkCmdEndRenderPass2_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pSubpassEndInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdEndRenderPass2(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pSubpassEndInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdEndRenderPass2(void *args)
{
    struct vkCmdEndRenderPass2_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pSubpassEndInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdEndRenderPass2(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pSubpassEndInfo);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdEndRenderPass2KHR(void *args)
{
    struct vkCmdEndRenderPass2KHR_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pSubpassEndInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdEndRenderPass2KHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pSubpassEndInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdEndRenderPass2KHR(void *args)
{
    struct vkCmdEndRenderPass2KHR_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pSubpassEndInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdEndRenderPass2KHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pSubpassEndInfo);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdEndRendering(void *args)
{
    struct vkCmdEndRendering_params *params = args;

    TRACE("%p\n", params->commandBuffer);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdEndRendering(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdEndRendering(void *args)
{
    struct vkCmdEndRendering_params *params = args;

    TRACE("%p\n", params->commandBuffer);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdEndRendering(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdEndRenderingKHR(void *args)
{
    struct vkCmdEndRenderingKHR_params *params = args;

    TRACE("%p\n", params->commandBuffer);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdEndRenderingKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdEndRenderingKHR(void *args)
{
    struct vkCmdEndRenderingKHR_params *params = args;

    TRACE("%p\n", params->commandBuffer);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdEndRenderingKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdEndTransformFeedbackEXT(void *args)
{
    struct vkCmdEndTransformFeedbackEXT_params *params = args;

    TRACE("%p, %u, %u, %p, %p\n", params->commandBuffer, params->firstCounterBuffer, params->counterBufferCount, params->pCounterBuffers, params->pCounterBufferOffsets);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdEndTransformFeedbackEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstCounterBuffer, params->counterBufferCount, params->pCounterBuffers, params->pCounterBufferOffsets);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdEndTransformFeedbackEXT(void *args)
{
    struct vkCmdEndTransformFeedbackEXT_params *params = args;

    TRACE("%p, %u, %u, %p, %p\n", params->commandBuffer, params->firstCounterBuffer, params->counterBufferCount, params->pCounterBuffers, params->pCounterBufferOffsets);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdEndTransformFeedbackEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstCounterBuffer, params->counterBufferCount, params->pCounterBuffers, params->pCounterBufferOffsets);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdExecuteCommands(void *args)
{
    struct vkCmdExecuteCommands_params *params = args;
    VkCommandBuffer *pCommandBuffers_host;
    struct conversion_context ctx;

    TRACE("%p, %u, %p\n", params->commandBuffer, params->commandBufferCount, params->pCommandBuffers);

    init_conversion_context(&ctx);
    pCommandBuffers_host = convert_VkCommandBuffer_array_win64_to_host(&ctx, params->pCommandBuffers, params->commandBufferCount);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdExecuteCommands(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->commandBufferCount, pCommandBuffers_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdExecuteCommands(void *args)
{
    struct vkCmdExecuteCommands_params *params = args;
    VkCommandBuffer *pCommandBuffers_host;
    struct conversion_context ctx;

    TRACE("%p, %u, %p\n", params->commandBuffer, params->commandBufferCount, params->pCommandBuffers);

    init_conversion_context(&ctx);
    pCommandBuffers_host = convert_VkCommandBuffer_array_win32_to_host(&ctx, params->pCommandBuffers, params->commandBufferCount);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdExecuteCommands(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->commandBufferCount, pCommandBuffers_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdExecuteGeneratedCommandsNV(void *args)
{
    struct vkCmdExecuteGeneratedCommandsNV_params *params = args;

    TRACE("%p, %u, %p\n", params->commandBuffer, params->isPreprocessed, params->pGeneratedCommandsInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdExecuteGeneratedCommandsNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->isPreprocessed, params->pGeneratedCommandsInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdExecuteGeneratedCommandsNV(void *args)
{
    struct vkCmdExecuteGeneratedCommandsNV_params *params = args;
    VkGeneratedCommandsInfoNV_host pGeneratedCommandsInfo_host;
    struct conversion_context ctx;

    TRACE("%p, %u, %p\n", params->commandBuffer, params->isPreprocessed, params->pGeneratedCommandsInfo);

    init_conversion_context(&ctx);
    convert_VkGeneratedCommandsInfoNV_win32_to_host(&ctx, params->pGeneratedCommandsInfo, &pGeneratedCommandsInfo_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdExecuteGeneratedCommandsNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->isPreprocessed, &pGeneratedCommandsInfo_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdFillBuffer(void *args)
{
    struct vkCmdFillBuffer_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->dstBuffer), wine_dbgstr_longlong(params->dstOffset), wine_dbgstr_longlong(params->size), params->data);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdFillBuffer(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->dstBuffer, params->dstOffset, params->size, params->data);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdFillBuffer(void *args)
{
    struct vkCmdFillBuffer_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->dstBuffer), wine_dbgstr_longlong(params->dstOffset), wine_dbgstr_longlong(params->size), params->data);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdFillBuffer(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->dstBuffer, params->dstOffset, params->size, params->data);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdInsertDebugUtilsLabelEXT(void *args)
{
    struct vkCmdInsertDebugUtilsLabelEXT_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pLabelInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdInsertDebugUtilsLabelEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pLabelInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdInsertDebugUtilsLabelEXT(void *args)
{
    struct vkCmdInsertDebugUtilsLabelEXT_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pLabelInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdInsertDebugUtilsLabelEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pLabelInfo);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdNextSubpass(void *args)
{
    struct vkCmdNextSubpass_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->contents);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdNextSubpass(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->contents);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdNextSubpass(void *args)
{
    struct vkCmdNextSubpass_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->contents);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdNextSubpass(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->contents);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdNextSubpass2(void *args)
{
    struct vkCmdNextSubpass2_params *params = args;

    TRACE("%p, %p, %p\n", params->commandBuffer, params->pSubpassBeginInfo, params->pSubpassEndInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdNextSubpass2(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pSubpassBeginInfo, params->pSubpassEndInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdNextSubpass2(void *args)
{
    struct vkCmdNextSubpass2_params *params = args;

    TRACE("%p, %p, %p\n", params->commandBuffer, params->pSubpassBeginInfo, params->pSubpassEndInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdNextSubpass2(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pSubpassBeginInfo, params->pSubpassEndInfo);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdNextSubpass2KHR(void *args)
{
    struct vkCmdNextSubpass2KHR_params *params = args;

    TRACE("%p, %p, %p\n", params->commandBuffer, params->pSubpassBeginInfo, params->pSubpassEndInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdNextSubpass2KHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pSubpassBeginInfo, params->pSubpassEndInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdNextSubpass2KHR(void *args)
{
    struct vkCmdNextSubpass2KHR_params *params = args;

    TRACE("%p, %p, %p\n", params->commandBuffer, params->pSubpassBeginInfo, params->pSubpassEndInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdNextSubpass2KHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pSubpassBeginInfo, params->pSubpassEndInfo);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdOpticalFlowExecuteNV(void *args)
{
    struct vkCmdOpticalFlowExecuteNV_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->commandBuffer, wine_dbgstr_longlong(params->session), params->pExecuteInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdOpticalFlowExecuteNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->session, params->pExecuteInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdOpticalFlowExecuteNV(void *args)
{
    struct vkCmdOpticalFlowExecuteNV_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->commandBuffer, wine_dbgstr_longlong(params->session), params->pExecuteInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdOpticalFlowExecuteNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->session, params->pExecuteInfo);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdPipelineBarrier(void *args)
{
    struct vkCmdPipelineBarrier_params *params = args;

    TRACE("%p, %#x, %#x, %#x, %u, %p, %u, %p, %u, %p\n", params->commandBuffer, params->srcStageMask, params->dstStageMask, params->dependencyFlags, params->memoryBarrierCount, params->pMemoryBarriers, params->bufferMemoryBarrierCount, params->pBufferMemoryBarriers, params->imageMemoryBarrierCount, params->pImageMemoryBarriers);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdPipelineBarrier(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->srcStageMask, params->dstStageMask, params->dependencyFlags, params->memoryBarrierCount, params->pMemoryBarriers, params->bufferMemoryBarrierCount, params->pBufferMemoryBarriers, params->imageMemoryBarrierCount, params->pImageMemoryBarriers);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdPipelineBarrier(void *args)
{
    struct vkCmdPipelineBarrier_params *params = args;
    VkBufferMemoryBarrier_host *pBufferMemoryBarriers_host;
    VkImageMemoryBarrier_host *pImageMemoryBarriers_host;
    struct conversion_context ctx;

    TRACE("%p, %#x, %#x, %#x, %u, %p, %u, %p, %u, %p\n", params->commandBuffer, params->srcStageMask, params->dstStageMask, params->dependencyFlags, params->memoryBarrierCount, params->pMemoryBarriers, params->bufferMemoryBarrierCount, params->pBufferMemoryBarriers, params->imageMemoryBarrierCount, params->pImageMemoryBarriers);

    init_conversion_context(&ctx);
    pBufferMemoryBarriers_host = convert_VkBufferMemoryBarrier_array_win32_to_host(&ctx, params->pBufferMemoryBarriers, params->bufferMemoryBarrierCount);
    pImageMemoryBarriers_host = convert_VkImageMemoryBarrier_array_win32_to_host(&ctx, params->pImageMemoryBarriers, params->imageMemoryBarrierCount);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdPipelineBarrier(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->srcStageMask, params->dstStageMask, params->dependencyFlags, params->memoryBarrierCount, params->pMemoryBarriers, params->bufferMemoryBarrierCount, pBufferMemoryBarriers_host, params->imageMemoryBarrierCount, pImageMemoryBarriers_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdPipelineBarrier2(void *args)
{
    struct vkCmdPipelineBarrier2_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pDependencyInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdPipelineBarrier2(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pDependencyInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdPipelineBarrier2(void *args)
{
    struct vkCmdPipelineBarrier2_params *params = args;
    VkDependencyInfo_host pDependencyInfo_host;
    struct conversion_context ctx;

    TRACE("%p, %p\n", params->commandBuffer, params->pDependencyInfo);

    init_conversion_context(&ctx);
    convert_VkDependencyInfo_win32_to_host(&ctx, params->pDependencyInfo, &pDependencyInfo_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdPipelineBarrier2(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pDependencyInfo_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdPipelineBarrier2KHR(void *args)
{
    struct vkCmdPipelineBarrier2KHR_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pDependencyInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdPipelineBarrier2KHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pDependencyInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdPipelineBarrier2KHR(void *args)
{
    struct vkCmdPipelineBarrier2KHR_params *params = args;
    VkDependencyInfo_host pDependencyInfo_host;
    struct conversion_context ctx;

    TRACE("%p, %p\n", params->commandBuffer, params->pDependencyInfo);

    init_conversion_context(&ctx);
    convert_VkDependencyInfo_win32_to_host(&ctx, params->pDependencyInfo, &pDependencyInfo_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdPipelineBarrier2KHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pDependencyInfo_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdPreprocessGeneratedCommandsNV(void *args)
{
    struct vkCmdPreprocessGeneratedCommandsNV_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pGeneratedCommandsInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdPreprocessGeneratedCommandsNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pGeneratedCommandsInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdPreprocessGeneratedCommandsNV(void *args)
{
    struct vkCmdPreprocessGeneratedCommandsNV_params *params = args;
    VkGeneratedCommandsInfoNV_host pGeneratedCommandsInfo_host;
    struct conversion_context ctx;

    TRACE("%p, %p\n", params->commandBuffer, params->pGeneratedCommandsInfo);

    init_conversion_context(&ctx);
    convert_VkGeneratedCommandsInfoNV_win32_to_host(&ctx, params->pGeneratedCommandsInfo, &pGeneratedCommandsInfo_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdPreprocessGeneratedCommandsNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pGeneratedCommandsInfo_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdPushConstants(void *args)
{
    struct vkCmdPushConstants_params *params = args;

    TRACE("%p, 0x%s, %#x, %u, %u, %p\n", params->commandBuffer, wine_dbgstr_longlong(params->layout), params->stageFlags, params->offset, params->size, params->pValues);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdPushConstants(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->layout, params->stageFlags, params->offset, params->size, params->pValues);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdPushConstants(void *args)
{
    struct vkCmdPushConstants_params *params = args;

    TRACE("%p, 0x%s, %#x, %u, %u, %p\n", params->commandBuffer, wine_dbgstr_longlong(params->layout), params->stageFlags, params->offset, params->size, params->pValues);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdPushConstants(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->layout, params->stageFlags, params->offset, params->size, params->pValues);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdPushDescriptorSetKHR(void *args)
{
    struct vkCmdPushDescriptorSetKHR_params *params = args;

    TRACE("%p, %#x, 0x%s, %u, %u, %p\n", params->commandBuffer, params->pipelineBindPoint, wine_dbgstr_longlong(params->layout), params->set, params->descriptorWriteCount, params->pDescriptorWrites);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdPushDescriptorSetKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pipelineBindPoint, params->layout, params->set, params->descriptorWriteCount, params->pDescriptorWrites);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdPushDescriptorSetKHR(void *args)
{
    struct vkCmdPushDescriptorSetKHR_params *params = args;
    VkWriteDescriptorSet_host *pDescriptorWrites_host;
    struct conversion_context ctx;

    TRACE("%p, %#x, 0x%s, %u, %u, %p\n", params->commandBuffer, params->pipelineBindPoint, wine_dbgstr_longlong(params->layout), params->set, params->descriptorWriteCount, params->pDescriptorWrites);

    init_conversion_context(&ctx);
    pDescriptorWrites_host = convert_VkWriteDescriptorSet_array_win32_to_host(&ctx, params->pDescriptorWrites, params->descriptorWriteCount);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdPushDescriptorSetKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pipelineBindPoint, params->layout, params->set, params->descriptorWriteCount, pDescriptorWrites_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdPushDescriptorSetWithTemplateKHR(void *args)
{
    struct vkCmdPushDescriptorSetWithTemplateKHR_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %u, %p\n", params->commandBuffer, wine_dbgstr_longlong(params->descriptorUpdateTemplate), wine_dbgstr_longlong(params->layout), params->set, params->pData);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdPushDescriptorSetWithTemplateKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->descriptorUpdateTemplate, params->layout, params->set, params->pData);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdPushDescriptorSetWithTemplateKHR(void *args)
{
    struct vkCmdPushDescriptorSetWithTemplateKHR_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %u, %p\n", params->commandBuffer, wine_dbgstr_longlong(params->descriptorUpdateTemplate), wine_dbgstr_longlong(params->layout), params->set, params->pData);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdPushDescriptorSetWithTemplateKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->descriptorUpdateTemplate, params->layout, params->set, params->pData);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdResetEvent(void *args)
{
    struct vkCmdResetEvent_params *params = args;

    TRACE("%p, 0x%s, %#x\n", params->commandBuffer, wine_dbgstr_longlong(params->event), params->stageMask);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdResetEvent(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->event, params->stageMask);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdResetEvent(void *args)
{
    struct vkCmdResetEvent_params *params = args;

    TRACE("%p, 0x%s, %#x\n", params->commandBuffer, wine_dbgstr_longlong(params->event), params->stageMask);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdResetEvent(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->event, params->stageMask);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdResetEvent2(void *args)
{
    struct vkCmdResetEvent2_params *params = args;

    TRACE("%p, 0x%s, 0x%s\n", params->commandBuffer, wine_dbgstr_longlong(params->event), wine_dbgstr_longlong(params->stageMask));

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdResetEvent2(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->event, params->stageMask);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdResetEvent2(void *args)
{
    struct vkCmdResetEvent2_params *params = args;

    TRACE("%p, 0x%s, 0x%s\n", params->commandBuffer, wine_dbgstr_longlong(params->event), wine_dbgstr_longlong(params->stageMask));

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdResetEvent2(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->event, params->stageMask);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdResetEvent2KHR(void *args)
{
    struct vkCmdResetEvent2KHR_params *params = args;

    TRACE("%p, 0x%s, 0x%s\n", params->commandBuffer, wine_dbgstr_longlong(params->event), wine_dbgstr_longlong(params->stageMask));

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdResetEvent2KHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->event, params->stageMask);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdResetEvent2KHR(void *args)
{
    struct vkCmdResetEvent2KHR_params *params = args;

    TRACE("%p, 0x%s, 0x%s\n", params->commandBuffer, wine_dbgstr_longlong(params->event), wine_dbgstr_longlong(params->stageMask));

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdResetEvent2KHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->event, params->stageMask);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdResetQueryPool(void *args)
{
    struct vkCmdResetQueryPool_params *params = args;

    TRACE("%p, 0x%s, %u, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->queryPool), params->firstQuery, params->queryCount);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdResetQueryPool(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->queryPool, params->firstQuery, params->queryCount);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdResetQueryPool(void *args)
{
    struct vkCmdResetQueryPool_params *params = args;

    TRACE("%p, 0x%s, %u, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->queryPool), params->firstQuery, params->queryCount);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdResetQueryPool(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->queryPool, params->firstQuery, params->queryCount);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdResolveImage(void *args)
{
    struct vkCmdResolveImage_params *params = args;

    TRACE("%p, 0x%s, %#x, 0x%s, %#x, %u, %p\n", params->commandBuffer, wine_dbgstr_longlong(params->srcImage), params->srcImageLayout, wine_dbgstr_longlong(params->dstImage), params->dstImageLayout, params->regionCount, params->pRegions);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdResolveImage(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->srcImage, params->srcImageLayout, params->dstImage, params->dstImageLayout, params->regionCount, params->pRegions);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdResolveImage(void *args)
{
    struct vkCmdResolveImage_params *params = args;

    TRACE("%p, 0x%s, %#x, 0x%s, %#x, %u, %p\n", params->commandBuffer, wine_dbgstr_longlong(params->srcImage), params->srcImageLayout, wine_dbgstr_longlong(params->dstImage), params->dstImageLayout, params->regionCount, params->pRegions);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdResolveImage(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->srcImage, params->srcImageLayout, params->dstImage, params->dstImageLayout, params->regionCount, params->pRegions);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdResolveImage2(void *args)
{
    struct vkCmdResolveImage2_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pResolveImageInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdResolveImage2(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pResolveImageInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdResolveImage2(void *args)
{
    struct vkCmdResolveImage2_params *params = args;
    VkResolveImageInfo2_host pResolveImageInfo_host;

    TRACE("%p, %p\n", params->commandBuffer, params->pResolveImageInfo);

    convert_VkResolveImageInfo2_win32_to_host(params->pResolveImageInfo, &pResolveImageInfo_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdResolveImage2(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pResolveImageInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdResolveImage2KHR(void *args)
{
    struct vkCmdResolveImage2KHR_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pResolveImageInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdResolveImage2KHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pResolveImageInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdResolveImage2KHR(void *args)
{
    struct vkCmdResolveImage2KHR_params *params = args;
    VkResolveImageInfo2_host pResolveImageInfo_host;

    TRACE("%p, %p\n", params->commandBuffer, params->pResolveImageInfo);

    convert_VkResolveImageInfo2_win32_to_host(params->pResolveImageInfo, &pResolveImageInfo_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdResolveImage2KHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pResolveImageInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetAlphaToCoverageEnableEXT(void *args)
{
    struct vkCmdSetAlphaToCoverageEnableEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->alphaToCoverageEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetAlphaToCoverageEnableEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->alphaToCoverageEnable);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetAlphaToCoverageEnableEXT(void *args)
{
    struct vkCmdSetAlphaToCoverageEnableEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->alphaToCoverageEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetAlphaToCoverageEnableEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->alphaToCoverageEnable);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetAlphaToOneEnableEXT(void *args)
{
    struct vkCmdSetAlphaToOneEnableEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->alphaToOneEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetAlphaToOneEnableEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->alphaToOneEnable);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetAlphaToOneEnableEXT(void *args)
{
    struct vkCmdSetAlphaToOneEnableEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->alphaToOneEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetAlphaToOneEnableEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->alphaToOneEnable);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetBlendConstants(void *args)
{
    struct vkCmdSetBlendConstants_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->blendConstants);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetBlendConstants(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->blendConstants);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetBlendConstants(void *args)
{
    struct vkCmdSetBlendConstants_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->blendConstants);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetBlendConstants(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->blendConstants);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetCheckpointNV(void *args)
{
    struct vkCmdSetCheckpointNV_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pCheckpointMarker);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetCheckpointNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pCheckpointMarker);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetCheckpointNV(void *args)
{
    struct vkCmdSetCheckpointNV_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pCheckpointMarker);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetCheckpointNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pCheckpointMarker);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetCoarseSampleOrderNV(void *args)
{
    struct vkCmdSetCoarseSampleOrderNV_params *params = args;

    TRACE("%p, %#x, %u, %p\n", params->commandBuffer, params->sampleOrderType, params->customSampleOrderCount, params->pCustomSampleOrders);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetCoarseSampleOrderNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->sampleOrderType, params->customSampleOrderCount, params->pCustomSampleOrders);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetCoarseSampleOrderNV(void *args)
{
    struct vkCmdSetCoarseSampleOrderNV_params *params = args;

    TRACE("%p, %#x, %u, %p\n", params->commandBuffer, params->sampleOrderType, params->customSampleOrderCount, params->pCustomSampleOrders);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetCoarseSampleOrderNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->sampleOrderType, params->customSampleOrderCount, params->pCustomSampleOrders);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetColorBlendAdvancedEXT(void *args)
{
    struct vkCmdSetColorBlendAdvancedEXT_params *params = args;

    TRACE("%p, %u, %u, %p\n", params->commandBuffer, params->firstAttachment, params->attachmentCount, params->pColorBlendAdvanced);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetColorBlendAdvancedEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstAttachment, params->attachmentCount, params->pColorBlendAdvanced);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetColorBlendAdvancedEXT(void *args)
{
    struct vkCmdSetColorBlendAdvancedEXT_params *params = args;

    TRACE("%p, %u, %u, %p\n", params->commandBuffer, params->firstAttachment, params->attachmentCount, params->pColorBlendAdvanced);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetColorBlendAdvancedEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstAttachment, params->attachmentCount, params->pColorBlendAdvanced);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetColorBlendEnableEXT(void *args)
{
    struct vkCmdSetColorBlendEnableEXT_params *params = args;

    TRACE("%p, %u, %u, %p\n", params->commandBuffer, params->firstAttachment, params->attachmentCount, params->pColorBlendEnables);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetColorBlendEnableEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstAttachment, params->attachmentCount, params->pColorBlendEnables);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetColorBlendEnableEXT(void *args)
{
    struct vkCmdSetColorBlendEnableEXT_params *params = args;

    TRACE("%p, %u, %u, %p\n", params->commandBuffer, params->firstAttachment, params->attachmentCount, params->pColorBlendEnables);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetColorBlendEnableEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstAttachment, params->attachmentCount, params->pColorBlendEnables);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetColorBlendEquationEXT(void *args)
{
    struct vkCmdSetColorBlendEquationEXT_params *params = args;

    TRACE("%p, %u, %u, %p\n", params->commandBuffer, params->firstAttachment, params->attachmentCount, params->pColorBlendEquations);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetColorBlendEquationEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstAttachment, params->attachmentCount, params->pColorBlendEquations);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetColorBlendEquationEXT(void *args)
{
    struct vkCmdSetColorBlendEquationEXT_params *params = args;

    TRACE("%p, %u, %u, %p\n", params->commandBuffer, params->firstAttachment, params->attachmentCount, params->pColorBlendEquations);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetColorBlendEquationEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstAttachment, params->attachmentCount, params->pColorBlendEquations);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetColorWriteEnableEXT(void *args)
{
    struct vkCmdSetColorWriteEnableEXT_params *params = args;

    TRACE("%p, %u, %p\n", params->commandBuffer, params->attachmentCount, params->pColorWriteEnables);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetColorWriteEnableEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->attachmentCount, params->pColorWriteEnables);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetColorWriteEnableEXT(void *args)
{
    struct vkCmdSetColorWriteEnableEXT_params *params = args;

    TRACE("%p, %u, %p\n", params->commandBuffer, params->attachmentCount, params->pColorWriteEnables);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetColorWriteEnableEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->attachmentCount, params->pColorWriteEnables);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetColorWriteMaskEXT(void *args)
{
    struct vkCmdSetColorWriteMaskEXT_params *params = args;

    TRACE("%p, %u, %u, %p\n", params->commandBuffer, params->firstAttachment, params->attachmentCount, params->pColorWriteMasks);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetColorWriteMaskEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstAttachment, params->attachmentCount, params->pColorWriteMasks);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetColorWriteMaskEXT(void *args)
{
    struct vkCmdSetColorWriteMaskEXT_params *params = args;

    TRACE("%p, %u, %u, %p\n", params->commandBuffer, params->firstAttachment, params->attachmentCount, params->pColorWriteMasks);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetColorWriteMaskEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstAttachment, params->attachmentCount, params->pColorWriteMasks);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetConservativeRasterizationModeEXT(void *args)
{
    struct vkCmdSetConservativeRasterizationModeEXT_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->conservativeRasterizationMode);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetConservativeRasterizationModeEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->conservativeRasterizationMode);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetConservativeRasterizationModeEXT(void *args)
{
    struct vkCmdSetConservativeRasterizationModeEXT_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->conservativeRasterizationMode);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetConservativeRasterizationModeEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->conservativeRasterizationMode);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetCoverageModulationModeNV(void *args)
{
    struct vkCmdSetCoverageModulationModeNV_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->coverageModulationMode);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetCoverageModulationModeNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->coverageModulationMode);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetCoverageModulationModeNV(void *args)
{
    struct vkCmdSetCoverageModulationModeNV_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->coverageModulationMode);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetCoverageModulationModeNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->coverageModulationMode);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetCoverageModulationTableEnableNV(void *args)
{
    struct vkCmdSetCoverageModulationTableEnableNV_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->coverageModulationTableEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetCoverageModulationTableEnableNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->coverageModulationTableEnable);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetCoverageModulationTableEnableNV(void *args)
{
    struct vkCmdSetCoverageModulationTableEnableNV_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->coverageModulationTableEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetCoverageModulationTableEnableNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->coverageModulationTableEnable);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetCoverageModulationTableNV(void *args)
{
    struct vkCmdSetCoverageModulationTableNV_params *params = args;

    TRACE("%p, %u, %p\n", params->commandBuffer, params->coverageModulationTableCount, params->pCoverageModulationTable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetCoverageModulationTableNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->coverageModulationTableCount, params->pCoverageModulationTable);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetCoverageModulationTableNV(void *args)
{
    struct vkCmdSetCoverageModulationTableNV_params *params = args;

    TRACE("%p, %u, %p\n", params->commandBuffer, params->coverageModulationTableCount, params->pCoverageModulationTable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetCoverageModulationTableNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->coverageModulationTableCount, params->pCoverageModulationTable);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetCoverageReductionModeNV(void *args)
{
    struct vkCmdSetCoverageReductionModeNV_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->coverageReductionMode);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetCoverageReductionModeNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->coverageReductionMode);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetCoverageReductionModeNV(void *args)
{
    struct vkCmdSetCoverageReductionModeNV_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->coverageReductionMode);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetCoverageReductionModeNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->coverageReductionMode);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetCoverageToColorEnableNV(void *args)
{
    struct vkCmdSetCoverageToColorEnableNV_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->coverageToColorEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetCoverageToColorEnableNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->coverageToColorEnable);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetCoverageToColorEnableNV(void *args)
{
    struct vkCmdSetCoverageToColorEnableNV_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->coverageToColorEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetCoverageToColorEnableNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->coverageToColorEnable);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetCoverageToColorLocationNV(void *args)
{
    struct vkCmdSetCoverageToColorLocationNV_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->coverageToColorLocation);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetCoverageToColorLocationNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->coverageToColorLocation);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetCoverageToColorLocationNV(void *args)
{
    struct vkCmdSetCoverageToColorLocationNV_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->coverageToColorLocation);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetCoverageToColorLocationNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->coverageToColorLocation);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetCullMode(void *args)
{
    struct vkCmdSetCullMode_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->cullMode);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetCullMode(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->cullMode);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetCullMode(void *args)
{
    struct vkCmdSetCullMode_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->cullMode);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetCullMode(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->cullMode);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetCullModeEXT(void *args)
{
    struct vkCmdSetCullModeEXT_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->cullMode);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetCullModeEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->cullMode);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetCullModeEXT(void *args)
{
    struct vkCmdSetCullModeEXT_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->cullMode);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetCullModeEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->cullMode);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetDepthBias(void *args)
{
    struct vkCmdSetDepthBias_params *params = args;

    TRACE("%p, %f, %f, %f\n", params->commandBuffer, params->depthBiasConstantFactor, params->depthBiasClamp, params->depthBiasSlopeFactor);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDepthBias(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->depthBiasConstantFactor, params->depthBiasClamp, params->depthBiasSlopeFactor);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetDepthBias(void *args)
{
    struct vkCmdSetDepthBias_params *params = args;

    TRACE("%p, %f, %f, %f\n", params->commandBuffer, params->depthBiasConstantFactor, params->depthBiasClamp, params->depthBiasSlopeFactor);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDepthBias(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->depthBiasConstantFactor, params->depthBiasClamp, params->depthBiasSlopeFactor);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetDepthBiasEnable(void *args)
{
    struct vkCmdSetDepthBiasEnable_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->depthBiasEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDepthBiasEnable(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->depthBiasEnable);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetDepthBiasEnable(void *args)
{
    struct vkCmdSetDepthBiasEnable_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->depthBiasEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDepthBiasEnable(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->depthBiasEnable);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetDepthBiasEnableEXT(void *args)
{
    struct vkCmdSetDepthBiasEnableEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->depthBiasEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDepthBiasEnableEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->depthBiasEnable);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetDepthBiasEnableEXT(void *args)
{
    struct vkCmdSetDepthBiasEnableEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->depthBiasEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDepthBiasEnableEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->depthBiasEnable);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetDepthBounds(void *args)
{
    struct vkCmdSetDepthBounds_params *params = args;

    TRACE("%p, %f, %f\n", params->commandBuffer, params->minDepthBounds, params->maxDepthBounds);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDepthBounds(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->minDepthBounds, params->maxDepthBounds);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetDepthBounds(void *args)
{
    struct vkCmdSetDepthBounds_params *params = args;

    TRACE("%p, %f, %f\n", params->commandBuffer, params->minDepthBounds, params->maxDepthBounds);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDepthBounds(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->minDepthBounds, params->maxDepthBounds);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetDepthBoundsTestEnable(void *args)
{
    struct vkCmdSetDepthBoundsTestEnable_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->depthBoundsTestEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDepthBoundsTestEnable(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->depthBoundsTestEnable);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetDepthBoundsTestEnable(void *args)
{
    struct vkCmdSetDepthBoundsTestEnable_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->depthBoundsTestEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDepthBoundsTestEnable(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->depthBoundsTestEnable);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetDepthBoundsTestEnableEXT(void *args)
{
    struct vkCmdSetDepthBoundsTestEnableEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->depthBoundsTestEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDepthBoundsTestEnableEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->depthBoundsTestEnable);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetDepthBoundsTestEnableEXT(void *args)
{
    struct vkCmdSetDepthBoundsTestEnableEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->depthBoundsTestEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDepthBoundsTestEnableEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->depthBoundsTestEnable);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetDepthClampEnableEXT(void *args)
{
    struct vkCmdSetDepthClampEnableEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->depthClampEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDepthClampEnableEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->depthClampEnable);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetDepthClampEnableEXT(void *args)
{
    struct vkCmdSetDepthClampEnableEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->depthClampEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDepthClampEnableEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->depthClampEnable);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetDepthClipEnableEXT(void *args)
{
    struct vkCmdSetDepthClipEnableEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->depthClipEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDepthClipEnableEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->depthClipEnable);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetDepthClipEnableEXT(void *args)
{
    struct vkCmdSetDepthClipEnableEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->depthClipEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDepthClipEnableEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->depthClipEnable);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetDepthClipNegativeOneToOneEXT(void *args)
{
    struct vkCmdSetDepthClipNegativeOneToOneEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->negativeOneToOne);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDepthClipNegativeOneToOneEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->negativeOneToOne);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetDepthClipNegativeOneToOneEXT(void *args)
{
    struct vkCmdSetDepthClipNegativeOneToOneEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->negativeOneToOne);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDepthClipNegativeOneToOneEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->negativeOneToOne);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetDepthCompareOp(void *args)
{
    struct vkCmdSetDepthCompareOp_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->depthCompareOp);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDepthCompareOp(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->depthCompareOp);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetDepthCompareOp(void *args)
{
    struct vkCmdSetDepthCompareOp_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->depthCompareOp);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDepthCompareOp(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->depthCompareOp);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetDepthCompareOpEXT(void *args)
{
    struct vkCmdSetDepthCompareOpEXT_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->depthCompareOp);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDepthCompareOpEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->depthCompareOp);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetDepthCompareOpEXT(void *args)
{
    struct vkCmdSetDepthCompareOpEXT_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->depthCompareOp);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDepthCompareOpEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->depthCompareOp);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetDepthTestEnable(void *args)
{
    struct vkCmdSetDepthTestEnable_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->depthTestEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDepthTestEnable(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->depthTestEnable);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetDepthTestEnable(void *args)
{
    struct vkCmdSetDepthTestEnable_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->depthTestEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDepthTestEnable(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->depthTestEnable);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetDepthTestEnableEXT(void *args)
{
    struct vkCmdSetDepthTestEnableEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->depthTestEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDepthTestEnableEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->depthTestEnable);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetDepthTestEnableEXT(void *args)
{
    struct vkCmdSetDepthTestEnableEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->depthTestEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDepthTestEnableEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->depthTestEnable);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetDepthWriteEnable(void *args)
{
    struct vkCmdSetDepthWriteEnable_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->depthWriteEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDepthWriteEnable(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->depthWriteEnable);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetDepthWriteEnable(void *args)
{
    struct vkCmdSetDepthWriteEnable_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->depthWriteEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDepthWriteEnable(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->depthWriteEnable);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetDepthWriteEnableEXT(void *args)
{
    struct vkCmdSetDepthWriteEnableEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->depthWriteEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDepthWriteEnableEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->depthWriteEnable);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetDepthWriteEnableEXT(void *args)
{
    struct vkCmdSetDepthWriteEnableEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->depthWriteEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDepthWriteEnableEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->depthWriteEnable);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetDeviceMask(void *args)
{
    struct vkCmdSetDeviceMask_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->deviceMask);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDeviceMask(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->deviceMask);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetDeviceMask(void *args)
{
    struct vkCmdSetDeviceMask_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->deviceMask);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDeviceMask(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->deviceMask);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetDeviceMaskKHR(void *args)
{
    struct vkCmdSetDeviceMaskKHR_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->deviceMask);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDeviceMaskKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->deviceMask);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetDeviceMaskKHR(void *args)
{
    struct vkCmdSetDeviceMaskKHR_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->deviceMask);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDeviceMaskKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->deviceMask);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetDiscardRectangleEXT(void *args)
{
    struct vkCmdSetDiscardRectangleEXT_params *params = args;

    TRACE("%p, %u, %u, %p\n", params->commandBuffer, params->firstDiscardRectangle, params->discardRectangleCount, params->pDiscardRectangles);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDiscardRectangleEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstDiscardRectangle, params->discardRectangleCount, params->pDiscardRectangles);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetDiscardRectangleEXT(void *args)
{
    struct vkCmdSetDiscardRectangleEXT_params *params = args;

    TRACE("%p, %u, %u, %p\n", params->commandBuffer, params->firstDiscardRectangle, params->discardRectangleCount, params->pDiscardRectangles);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetDiscardRectangleEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstDiscardRectangle, params->discardRectangleCount, params->pDiscardRectangles);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetEvent(void *args)
{
    struct vkCmdSetEvent_params *params = args;

    TRACE("%p, 0x%s, %#x\n", params->commandBuffer, wine_dbgstr_longlong(params->event), params->stageMask);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetEvent(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->event, params->stageMask);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetEvent(void *args)
{
    struct vkCmdSetEvent_params *params = args;

    TRACE("%p, 0x%s, %#x\n", params->commandBuffer, wine_dbgstr_longlong(params->event), params->stageMask);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetEvent(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->event, params->stageMask);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetEvent2(void *args)
{
    struct vkCmdSetEvent2_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->commandBuffer, wine_dbgstr_longlong(params->event), params->pDependencyInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetEvent2(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->event, params->pDependencyInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetEvent2(void *args)
{
    struct vkCmdSetEvent2_params *params = args;
    VkDependencyInfo_host pDependencyInfo_host;
    struct conversion_context ctx;

    TRACE("%p, 0x%s, %p\n", params->commandBuffer, wine_dbgstr_longlong(params->event), params->pDependencyInfo);

    init_conversion_context(&ctx);
    convert_VkDependencyInfo_win32_to_host(&ctx, params->pDependencyInfo, &pDependencyInfo_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetEvent2(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->event, &pDependencyInfo_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetEvent2KHR(void *args)
{
    struct vkCmdSetEvent2KHR_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->commandBuffer, wine_dbgstr_longlong(params->event), params->pDependencyInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetEvent2KHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->event, params->pDependencyInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetEvent2KHR(void *args)
{
    struct vkCmdSetEvent2KHR_params *params = args;
    VkDependencyInfo_host pDependencyInfo_host;
    struct conversion_context ctx;

    TRACE("%p, 0x%s, %p\n", params->commandBuffer, wine_dbgstr_longlong(params->event), params->pDependencyInfo);

    init_conversion_context(&ctx);
    convert_VkDependencyInfo_win32_to_host(&ctx, params->pDependencyInfo, &pDependencyInfo_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetEvent2KHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->event, &pDependencyInfo_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetExclusiveScissorNV(void *args)
{
    struct vkCmdSetExclusiveScissorNV_params *params = args;

    TRACE("%p, %u, %u, %p\n", params->commandBuffer, params->firstExclusiveScissor, params->exclusiveScissorCount, params->pExclusiveScissors);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetExclusiveScissorNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstExclusiveScissor, params->exclusiveScissorCount, params->pExclusiveScissors);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetExclusiveScissorNV(void *args)
{
    struct vkCmdSetExclusiveScissorNV_params *params = args;

    TRACE("%p, %u, %u, %p\n", params->commandBuffer, params->firstExclusiveScissor, params->exclusiveScissorCount, params->pExclusiveScissors);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetExclusiveScissorNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstExclusiveScissor, params->exclusiveScissorCount, params->pExclusiveScissors);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetExtraPrimitiveOverestimationSizeEXT(void *args)
{
    struct vkCmdSetExtraPrimitiveOverestimationSizeEXT_params *params = args;

    TRACE("%p, %f\n", params->commandBuffer, params->extraPrimitiveOverestimationSize);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetExtraPrimitiveOverestimationSizeEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->extraPrimitiveOverestimationSize);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetExtraPrimitiveOverestimationSizeEXT(void *args)
{
    struct vkCmdSetExtraPrimitiveOverestimationSizeEXT_params *params = args;

    TRACE("%p, %f\n", params->commandBuffer, params->extraPrimitiveOverestimationSize);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetExtraPrimitiveOverestimationSizeEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->extraPrimitiveOverestimationSize);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetFragmentShadingRateEnumNV(void *args)
{
    struct vkCmdSetFragmentShadingRateEnumNV_params *params = args;

    TRACE("%p, %#x, %p\n", params->commandBuffer, params->shadingRate, params->combinerOps);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetFragmentShadingRateEnumNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->shadingRate, params->combinerOps);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetFragmentShadingRateEnumNV(void *args)
{
    struct vkCmdSetFragmentShadingRateEnumNV_params *params = args;

    TRACE("%p, %#x, %p\n", params->commandBuffer, params->shadingRate, params->combinerOps);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetFragmentShadingRateEnumNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->shadingRate, params->combinerOps);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetFragmentShadingRateKHR(void *args)
{
    struct vkCmdSetFragmentShadingRateKHR_params *params = args;

    TRACE("%p, %p, %p\n", params->commandBuffer, params->pFragmentSize, params->combinerOps);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetFragmentShadingRateKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pFragmentSize, params->combinerOps);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetFragmentShadingRateKHR(void *args)
{
    struct vkCmdSetFragmentShadingRateKHR_params *params = args;

    TRACE("%p, %p, %p\n", params->commandBuffer, params->pFragmentSize, params->combinerOps);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetFragmentShadingRateKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pFragmentSize, params->combinerOps);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetFrontFace(void *args)
{
    struct vkCmdSetFrontFace_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->frontFace);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetFrontFace(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->frontFace);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetFrontFace(void *args)
{
    struct vkCmdSetFrontFace_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->frontFace);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetFrontFace(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->frontFace);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetFrontFaceEXT(void *args)
{
    struct vkCmdSetFrontFaceEXT_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->frontFace);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetFrontFaceEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->frontFace);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetFrontFaceEXT(void *args)
{
    struct vkCmdSetFrontFaceEXT_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->frontFace);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetFrontFaceEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->frontFace);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetLineRasterizationModeEXT(void *args)
{
    struct vkCmdSetLineRasterizationModeEXT_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->lineRasterizationMode);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetLineRasterizationModeEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->lineRasterizationMode);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetLineRasterizationModeEXT(void *args)
{
    struct vkCmdSetLineRasterizationModeEXT_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->lineRasterizationMode);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetLineRasterizationModeEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->lineRasterizationMode);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetLineStippleEXT(void *args)
{
    struct vkCmdSetLineStippleEXT_params *params = args;

    TRACE("%p, %u, %u\n", params->commandBuffer, params->lineStippleFactor, params->lineStipplePattern);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetLineStippleEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->lineStippleFactor, params->lineStipplePattern);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetLineStippleEXT(void *args)
{
    struct vkCmdSetLineStippleEXT_params *params = args;

    TRACE("%p, %u, %u\n", params->commandBuffer, params->lineStippleFactor, params->lineStipplePattern);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetLineStippleEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->lineStippleFactor, params->lineStipplePattern);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetLineStippleEnableEXT(void *args)
{
    struct vkCmdSetLineStippleEnableEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->stippledLineEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetLineStippleEnableEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->stippledLineEnable);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetLineStippleEnableEXT(void *args)
{
    struct vkCmdSetLineStippleEnableEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->stippledLineEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetLineStippleEnableEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->stippledLineEnable);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetLineWidth(void *args)
{
    struct vkCmdSetLineWidth_params *params = args;

    TRACE("%p, %f\n", params->commandBuffer, params->lineWidth);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetLineWidth(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->lineWidth);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetLineWidth(void *args)
{
    struct vkCmdSetLineWidth_params *params = args;

    TRACE("%p, %f\n", params->commandBuffer, params->lineWidth);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetLineWidth(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->lineWidth);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetLogicOpEXT(void *args)
{
    struct vkCmdSetLogicOpEXT_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->logicOp);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetLogicOpEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->logicOp);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetLogicOpEXT(void *args)
{
    struct vkCmdSetLogicOpEXT_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->logicOp);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetLogicOpEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->logicOp);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetLogicOpEnableEXT(void *args)
{
    struct vkCmdSetLogicOpEnableEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->logicOpEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetLogicOpEnableEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->logicOpEnable);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetLogicOpEnableEXT(void *args)
{
    struct vkCmdSetLogicOpEnableEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->logicOpEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetLogicOpEnableEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->logicOpEnable);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetPatchControlPointsEXT(void *args)
{
    struct vkCmdSetPatchControlPointsEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->patchControlPoints);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetPatchControlPointsEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->patchControlPoints);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetPatchControlPointsEXT(void *args)
{
    struct vkCmdSetPatchControlPointsEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->patchControlPoints);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetPatchControlPointsEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->patchControlPoints);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetPerformanceMarkerINTEL(void *args)
{
    struct vkCmdSetPerformanceMarkerINTEL_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pMarkerInfo);

    params->result = wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetPerformanceMarkerINTEL(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pMarkerInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetPerformanceMarkerINTEL(void *args)
{
    struct vkCmdSetPerformanceMarkerINTEL_params *params = args;
    VkPerformanceMarkerInfoINTEL_host pMarkerInfo_host;

    TRACE("%p, %p\n", params->commandBuffer, params->pMarkerInfo);

    convert_VkPerformanceMarkerInfoINTEL_win32_to_host(params->pMarkerInfo, &pMarkerInfo_host);
    params->result = wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetPerformanceMarkerINTEL(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pMarkerInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetPerformanceOverrideINTEL(void *args)
{
    struct vkCmdSetPerformanceOverrideINTEL_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pOverrideInfo);

    params->result = wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetPerformanceOverrideINTEL(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pOverrideInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetPerformanceOverrideINTEL(void *args)
{
    struct vkCmdSetPerformanceOverrideINTEL_params *params = args;
    VkPerformanceOverrideInfoINTEL_host pOverrideInfo_host;

    TRACE("%p, %p\n", params->commandBuffer, params->pOverrideInfo);

    convert_VkPerformanceOverrideInfoINTEL_win32_to_host(params->pOverrideInfo, &pOverrideInfo_host);
    params->result = wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetPerformanceOverrideINTEL(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pOverrideInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetPerformanceStreamMarkerINTEL(void *args)
{
    struct vkCmdSetPerformanceStreamMarkerINTEL_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pMarkerInfo);

    params->result = wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetPerformanceStreamMarkerINTEL(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pMarkerInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetPerformanceStreamMarkerINTEL(void *args)
{
    struct vkCmdSetPerformanceStreamMarkerINTEL_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pMarkerInfo);

    params->result = wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetPerformanceStreamMarkerINTEL(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pMarkerInfo);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetPolygonModeEXT(void *args)
{
    struct vkCmdSetPolygonModeEXT_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->polygonMode);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetPolygonModeEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->polygonMode);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetPolygonModeEXT(void *args)
{
    struct vkCmdSetPolygonModeEXT_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->polygonMode);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetPolygonModeEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->polygonMode);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetPrimitiveRestartEnable(void *args)
{
    struct vkCmdSetPrimitiveRestartEnable_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->primitiveRestartEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetPrimitiveRestartEnable(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->primitiveRestartEnable);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetPrimitiveRestartEnable(void *args)
{
    struct vkCmdSetPrimitiveRestartEnable_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->primitiveRestartEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetPrimitiveRestartEnable(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->primitiveRestartEnable);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetPrimitiveRestartEnableEXT(void *args)
{
    struct vkCmdSetPrimitiveRestartEnableEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->primitiveRestartEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetPrimitiveRestartEnableEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->primitiveRestartEnable);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetPrimitiveRestartEnableEXT(void *args)
{
    struct vkCmdSetPrimitiveRestartEnableEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->primitiveRestartEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetPrimitiveRestartEnableEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->primitiveRestartEnable);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetPrimitiveTopology(void *args)
{
    struct vkCmdSetPrimitiveTopology_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->primitiveTopology);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetPrimitiveTopology(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->primitiveTopology);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetPrimitiveTopology(void *args)
{
    struct vkCmdSetPrimitiveTopology_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->primitiveTopology);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetPrimitiveTopology(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->primitiveTopology);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetPrimitiveTopologyEXT(void *args)
{
    struct vkCmdSetPrimitiveTopologyEXT_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->primitiveTopology);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetPrimitiveTopologyEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->primitiveTopology);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetPrimitiveTopologyEXT(void *args)
{
    struct vkCmdSetPrimitiveTopologyEXT_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->primitiveTopology);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetPrimitiveTopologyEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->primitiveTopology);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetProvokingVertexModeEXT(void *args)
{
    struct vkCmdSetProvokingVertexModeEXT_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->provokingVertexMode);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetProvokingVertexModeEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->provokingVertexMode);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetProvokingVertexModeEXT(void *args)
{
    struct vkCmdSetProvokingVertexModeEXT_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->provokingVertexMode);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetProvokingVertexModeEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->provokingVertexMode);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetRasterizationSamplesEXT(void *args)
{
    struct vkCmdSetRasterizationSamplesEXT_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->rasterizationSamples);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetRasterizationSamplesEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->rasterizationSamples);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetRasterizationSamplesEXT(void *args)
{
    struct vkCmdSetRasterizationSamplesEXT_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->rasterizationSamples);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetRasterizationSamplesEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->rasterizationSamples);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetRasterizationStreamEXT(void *args)
{
    struct vkCmdSetRasterizationStreamEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->rasterizationStream);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetRasterizationStreamEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->rasterizationStream);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetRasterizationStreamEXT(void *args)
{
    struct vkCmdSetRasterizationStreamEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->rasterizationStream);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetRasterizationStreamEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->rasterizationStream);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetRasterizerDiscardEnable(void *args)
{
    struct vkCmdSetRasterizerDiscardEnable_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->rasterizerDiscardEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetRasterizerDiscardEnable(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->rasterizerDiscardEnable);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetRasterizerDiscardEnable(void *args)
{
    struct vkCmdSetRasterizerDiscardEnable_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->rasterizerDiscardEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetRasterizerDiscardEnable(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->rasterizerDiscardEnable);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetRasterizerDiscardEnableEXT(void *args)
{
    struct vkCmdSetRasterizerDiscardEnableEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->rasterizerDiscardEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetRasterizerDiscardEnableEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->rasterizerDiscardEnable);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetRasterizerDiscardEnableEXT(void *args)
{
    struct vkCmdSetRasterizerDiscardEnableEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->rasterizerDiscardEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetRasterizerDiscardEnableEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->rasterizerDiscardEnable);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetRayTracingPipelineStackSizeKHR(void *args)
{
    struct vkCmdSetRayTracingPipelineStackSizeKHR_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->pipelineStackSize);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetRayTracingPipelineStackSizeKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pipelineStackSize);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetRayTracingPipelineStackSizeKHR(void *args)
{
    struct vkCmdSetRayTracingPipelineStackSizeKHR_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->pipelineStackSize);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetRayTracingPipelineStackSizeKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pipelineStackSize);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetRepresentativeFragmentTestEnableNV(void *args)
{
    struct vkCmdSetRepresentativeFragmentTestEnableNV_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->representativeFragmentTestEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetRepresentativeFragmentTestEnableNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->representativeFragmentTestEnable);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetRepresentativeFragmentTestEnableNV(void *args)
{
    struct vkCmdSetRepresentativeFragmentTestEnableNV_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->representativeFragmentTestEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetRepresentativeFragmentTestEnableNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->representativeFragmentTestEnable);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetSampleLocationsEXT(void *args)
{
    struct vkCmdSetSampleLocationsEXT_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pSampleLocationsInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetSampleLocationsEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pSampleLocationsInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetSampleLocationsEXT(void *args)
{
    struct vkCmdSetSampleLocationsEXT_params *params = args;

    TRACE("%p, %p\n", params->commandBuffer, params->pSampleLocationsInfo);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetSampleLocationsEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pSampleLocationsInfo);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetSampleLocationsEnableEXT(void *args)
{
    struct vkCmdSetSampleLocationsEnableEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->sampleLocationsEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetSampleLocationsEnableEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->sampleLocationsEnable);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetSampleLocationsEnableEXT(void *args)
{
    struct vkCmdSetSampleLocationsEnableEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->sampleLocationsEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetSampleLocationsEnableEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->sampleLocationsEnable);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetSampleMaskEXT(void *args)
{
    struct vkCmdSetSampleMaskEXT_params *params = args;

    TRACE("%p, %#x, %p\n", params->commandBuffer, params->samples, params->pSampleMask);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetSampleMaskEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->samples, params->pSampleMask);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetSampleMaskEXT(void *args)
{
    struct vkCmdSetSampleMaskEXT_params *params = args;

    TRACE("%p, %#x, %p\n", params->commandBuffer, params->samples, params->pSampleMask);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetSampleMaskEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->samples, params->pSampleMask);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetScissor(void *args)
{
    struct vkCmdSetScissor_params *params = args;

    TRACE("%p, %u, %u, %p\n", params->commandBuffer, params->firstScissor, params->scissorCount, params->pScissors);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetScissor(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstScissor, params->scissorCount, params->pScissors);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetScissor(void *args)
{
    struct vkCmdSetScissor_params *params = args;

    TRACE("%p, %u, %u, %p\n", params->commandBuffer, params->firstScissor, params->scissorCount, params->pScissors);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetScissor(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstScissor, params->scissorCount, params->pScissors);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetScissorWithCount(void *args)
{
    struct vkCmdSetScissorWithCount_params *params = args;

    TRACE("%p, %u, %p\n", params->commandBuffer, params->scissorCount, params->pScissors);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetScissorWithCount(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->scissorCount, params->pScissors);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetScissorWithCount(void *args)
{
    struct vkCmdSetScissorWithCount_params *params = args;

    TRACE("%p, %u, %p\n", params->commandBuffer, params->scissorCount, params->pScissors);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetScissorWithCount(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->scissorCount, params->pScissors);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetScissorWithCountEXT(void *args)
{
    struct vkCmdSetScissorWithCountEXT_params *params = args;

    TRACE("%p, %u, %p\n", params->commandBuffer, params->scissorCount, params->pScissors);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetScissorWithCountEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->scissorCount, params->pScissors);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetScissorWithCountEXT(void *args)
{
    struct vkCmdSetScissorWithCountEXT_params *params = args;

    TRACE("%p, %u, %p\n", params->commandBuffer, params->scissorCount, params->pScissors);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetScissorWithCountEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->scissorCount, params->pScissors);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetShadingRateImageEnableNV(void *args)
{
    struct vkCmdSetShadingRateImageEnableNV_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->shadingRateImageEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetShadingRateImageEnableNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->shadingRateImageEnable);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetShadingRateImageEnableNV(void *args)
{
    struct vkCmdSetShadingRateImageEnableNV_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->shadingRateImageEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetShadingRateImageEnableNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->shadingRateImageEnable);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetStencilCompareMask(void *args)
{
    struct vkCmdSetStencilCompareMask_params *params = args;

    TRACE("%p, %#x, %u\n", params->commandBuffer, params->faceMask, params->compareMask);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetStencilCompareMask(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->faceMask, params->compareMask);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetStencilCompareMask(void *args)
{
    struct vkCmdSetStencilCompareMask_params *params = args;

    TRACE("%p, %#x, %u\n", params->commandBuffer, params->faceMask, params->compareMask);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetStencilCompareMask(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->faceMask, params->compareMask);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetStencilOp(void *args)
{
    struct vkCmdSetStencilOp_params *params = args;

    TRACE("%p, %#x, %#x, %#x, %#x, %#x\n", params->commandBuffer, params->faceMask, params->failOp, params->passOp, params->depthFailOp, params->compareOp);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetStencilOp(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->faceMask, params->failOp, params->passOp, params->depthFailOp, params->compareOp);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetStencilOp(void *args)
{
    struct vkCmdSetStencilOp_params *params = args;

    TRACE("%p, %#x, %#x, %#x, %#x, %#x\n", params->commandBuffer, params->faceMask, params->failOp, params->passOp, params->depthFailOp, params->compareOp);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetStencilOp(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->faceMask, params->failOp, params->passOp, params->depthFailOp, params->compareOp);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetStencilOpEXT(void *args)
{
    struct vkCmdSetStencilOpEXT_params *params = args;

    TRACE("%p, %#x, %#x, %#x, %#x, %#x\n", params->commandBuffer, params->faceMask, params->failOp, params->passOp, params->depthFailOp, params->compareOp);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetStencilOpEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->faceMask, params->failOp, params->passOp, params->depthFailOp, params->compareOp);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetStencilOpEXT(void *args)
{
    struct vkCmdSetStencilOpEXT_params *params = args;

    TRACE("%p, %#x, %#x, %#x, %#x, %#x\n", params->commandBuffer, params->faceMask, params->failOp, params->passOp, params->depthFailOp, params->compareOp);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetStencilOpEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->faceMask, params->failOp, params->passOp, params->depthFailOp, params->compareOp);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetStencilReference(void *args)
{
    struct vkCmdSetStencilReference_params *params = args;

    TRACE("%p, %#x, %u\n", params->commandBuffer, params->faceMask, params->reference);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetStencilReference(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->faceMask, params->reference);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetStencilReference(void *args)
{
    struct vkCmdSetStencilReference_params *params = args;

    TRACE("%p, %#x, %u\n", params->commandBuffer, params->faceMask, params->reference);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetStencilReference(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->faceMask, params->reference);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetStencilTestEnable(void *args)
{
    struct vkCmdSetStencilTestEnable_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->stencilTestEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetStencilTestEnable(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->stencilTestEnable);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetStencilTestEnable(void *args)
{
    struct vkCmdSetStencilTestEnable_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->stencilTestEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetStencilTestEnable(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->stencilTestEnable);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetStencilTestEnableEXT(void *args)
{
    struct vkCmdSetStencilTestEnableEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->stencilTestEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetStencilTestEnableEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->stencilTestEnable);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetStencilTestEnableEXT(void *args)
{
    struct vkCmdSetStencilTestEnableEXT_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->stencilTestEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetStencilTestEnableEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->stencilTestEnable);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetStencilWriteMask(void *args)
{
    struct vkCmdSetStencilWriteMask_params *params = args;

    TRACE("%p, %#x, %u\n", params->commandBuffer, params->faceMask, params->writeMask);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetStencilWriteMask(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->faceMask, params->writeMask);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetStencilWriteMask(void *args)
{
    struct vkCmdSetStencilWriteMask_params *params = args;

    TRACE("%p, %#x, %u\n", params->commandBuffer, params->faceMask, params->writeMask);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetStencilWriteMask(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->faceMask, params->writeMask);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetTessellationDomainOriginEXT(void *args)
{
    struct vkCmdSetTessellationDomainOriginEXT_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->domainOrigin);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetTessellationDomainOriginEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->domainOrigin);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetTessellationDomainOriginEXT(void *args)
{
    struct vkCmdSetTessellationDomainOriginEXT_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->domainOrigin);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetTessellationDomainOriginEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->domainOrigin);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetVertexInputEXT(void *args)
{
    struct vkCmdSetVertexInputEXT_params *params = args;

    TRACE("%p, %u, %p, %u, %p\n", params->commandBuffer, params->vertexBindingDescriptionCount, params->pVertexBindingDescriptions, params->vertexAttributeDescriptionCount, params->pVertexAttributeDescriptions);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetVertexInputEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->vertexBindingDescriptionCount, params->pVertexBindingDescriptions, params->vertexAttributeDescriptionCount, params->pVertexAttributeDescriptions);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetVertexInputEXT(void *args)
{
    struct vkCmdSetVertexInputEXT_params *params = args;

    TRACE("%p, %u, %p, %u, %p\n", params->commandBuffer, params->vertexBindingDescriptionCount, params->pVertexBindingDescriptions, params->vertexAttributeDescriptionCount, params->pVertexAttributeDescriptions);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetVertexInputEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->vertexBindingDescriptionCount, params->pVertexBindingDescriptions, params->vertexAttributeDescriptionCount, params->pVertexAttributeDescriptions);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetViewport(void *args)
{
    struct vkCmdSetViewport_params *params = args;

    TRACE("%p, %u, %u, %p\n", params->commandBuffer, params->firstViewport, params->viewportCount, params->pViewports);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetViewport(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstViewport, params->viewportCount, params->pViewports);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetViewport(void *args)
{
    struct vkCmdSetViewport_params *params = args;

    TRACE("%p, %u, %u, %p\n", params->commandBuffer, params->firstViewport, params->viewportCount, params->pViewports);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetViewport(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstViewport, params->viewportCount, params->pViewports);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetViewportShadingRatePaletteNV(void *args)
{
    struct vkCmdSetViewportShadingRatePaletteNV_params *params = args;

    TRACE("%p, %u, %u, %p\n", params->commandBuffer, params->firstViewport, params->viewportCount, params->pShadingRatePalettes);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetViewportShadingRatePaletteNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstViewport, params->viewportCount, params->pShadingRatePalettes);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetViewportShadingRatePaletteNV(void *args)
{
    struct vkCmdSetViewportShadingRatePaletteNV_params *params = args;

    TRACE("%p, %u, %u, %p\n", params->commandBuffer, params->firstViewport, params->viewportCount, params->pShadingRatePalettes);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetViewportShadingRatePaletteNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstViewport, params->viewportCount, params->pShadingRatePalettes);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetViewportSwizzleNV(void *args)
{
    struct vkCmdSetViewportSwizzleNV_params *params = args;

    TRACE("%p, %u, %u, %p\n", params->commandBuffer, params->firstViewport, params->viewportCount, params->pViewportSwizzles);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetViewportSwizzleNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstViewport, params->viewportCount, params->pViewportSwizzles);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetViewportSwizzleNV(void *args)
{
    struct vkCmdSetViewportSwizzleNV_params *params = args;

    TRACE("%p, %u, %u, %p\n", params->commandBuffer, params->firstViewport, params->viewportCount, params->pViewportSwizzles);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetViewportSwizzleNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstViewport, params->viewportCount, params->pViewportSwizzles);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetViewportWScalingEnableNV(void *args)
{
    struct vkCmdSetViewportWScalingEnableNV_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->viewportWScalingEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetViewportWScalingEnableNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->viewportWScalingEnable);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetViewportWScalingEnableNV(void *args)
{
    struct vkCmdSetViewportWScalingEnableNV_params *params = args;

    TRACE("%p, %u\n", params->commandBuffer, params->viewportWScalingEnable);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetViewportWScalingEnableNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->viewportWScalingEnable);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetViewportWScalingNV(void *args)
{
    struct vkCmdSetViewportWScalingNV_params *params = args;

    TRACE("%p, %u, %u, %p\n", params->commandBuffer, params->firstViewport, params->viewportCount, params->pViewportWScalings);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetViewportWScalingNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstViewport, params->viewportCount, params->pViewportWScalings);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetViewportWScalingNV(void *args)
{
    struct vkCmdSetViewportWScalingNV_params *params = args;

    TRACE("%p, %u, %u, %p\n", params->commandBuffer, params->firstViewport, params->viewportCount, params->pViewportWScalings);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetViewportWScalingNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->firstViewport, params->viewportCount, params->pViewportWScalings);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetViewportWithCount(void *args)
{
    struct vkCmdSetViewportWithCount_params *params = args;

    TRACE("%p, %u, %p\n", params->commandBuffer, params->viewportCount, params->pViewports);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetViewportWithCount(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->viewportCount, params->pViewports);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetViewportWithCount(void *args)
{
    struct vkCmdSetViewportWithCount_params *params = args;

    TRACE("%p, %u, %p\n", params->commandBuffer, params->viewportCount, params->pViewports);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetViewportWithCount(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->viewportCount, params->pViewports);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSetViewportWithCountEXT(void *args)
{
    struct vkCmdSetViewportWithCountEXT_params *params = args;

    TRACE("%p, %u, %p\n", params->commandBuffer, params->viewportCount, params->pViewports);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetViewportWithCountEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->viewportCount, params->pViewports);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSetViewportWithCountEXT(void *args)
{
    struct vkCmdSetViewportWithCountEXT_params *params = args;

    TRACE("%p, %u, %p\n", params->commandBuffer, params->viewportCount, params->pViewports);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSetViewportWithCountEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->viewportCount, params->pViewports);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdSubpassShadingHUAWEI(void *args)
{
    struct vkCmdSubpassShadingHUAWEI_params *params = args;

    TRACE("%p\n", params->commandBuffer);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSubpassShadingHUAWEI(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdSubpassShadingHUAWEI(void *args)
{
    struct vkCmdSubpassShadingHUAWEI_params *params = args;

    TRACE("%p\n", params->commandBuffer);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdSubpassShadingHUAWEI(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdTraceRaysIndirect2KHR(void *args)
{
    struct vkCmdTraceRaysIndirect2KHR_params *params = args;

    TRACE("%p, 0x%s\n", params->commandBuffer, wine_dbgstr_longlong(params->indirectDeviceAddress));

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdTraceRaysIndirect2KHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->indirectDeviceAddress);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdTraceRaysIndirect2KHR(void *args)
{
    struct vkCmdTraceRaysIndirect2KHR_params *params = args;

    TRACE("%p, 0x%s\n", params->commandBuffer, wine_dbgstr_longlong(params->indirectDeviceAddress));

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdTraceRaysIndirect2KHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->indirectDeviceAddress);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdTraceRaysIndirectKHR(void *args)
{
    struct vkCmdTraceRaysIndirectKHR_params *params = args;

    TRACE("%p, %p, %p, %p, %p, 0x%s\n", params->commandBuffer, params->pRaygenShaderBindingTable, params->pMissShaderBindingTable, params->pHitShaderBindingTable, params->pCallableShaderBindingTable, wine_dbgstr_longlong(params->indirectDeviceAddress));

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdTraceRaysIndirectKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pRaygenShaderBindingTable, params->pMissShaderBindingTable, params->pHitShaderBindingTable, params->pCallableShaderBindingTable, params->indirectDeviceAddress);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdTraceRaysIndirectKHR(void *args)
{
    struct vkCmdTraceRaysIndirectKHR_params *params = args;
    VkStridedDeviceAddressRegionKHR_host pRaygenShaderBindingTable_host;
    VkStridedDeviceAddressRegionKHR_host pMissShaderBindingTable_host;
    VkStridedDeviceAddressRegionKHR_host pHitShaderBindingTable_host;
    VkStridedDeviceAddressRegionKHR_host pCallableShaderBindingTable_host;

    TRACE("%p, %p, %p, %p, %p, 0x%s\n", params->commandBuffer, params->pRaygenShaderBindingTable, params->pMissShaderBindingTable, params->pHitShaderBindingTable, params->pCallableShaderBindingTable, wine_dbgstr_longlong(params->indirectDeviceAddress));

    convert_VkStridedDeviceAddressRegionKHR_win32_to_host(params->pRaygenShaderBindingTable, &pRaygenShaderBindingTable_host);
    convert_VkStridedDeviceAddressRegionKHR_win32_to_host(params->pMissShaderBindingTable, &pMissShaderBindingTable_host);
    convert_VkStridedDeviceAddressRegionKHR_win32_to_host(params->pHitShaderBindingTable, &pHitShaderBindingTable_host);
    convert_VkStridedDeviceAddressRegionKHR_win32_to_host(params->pCallableShaderBindingTable, &pCallableShaderBindingTable_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdTraceRaysIndirectKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pRaygenShaderBindingTable_host, &pMissShaderBindingTable_host, &pHitShaderBindingTable_host, &pCallableShaderBindingTable_host, params->indirectDeviceAddress);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdTraceRaysKHR(void *args)
{
    struct vkCmdTraceRaysKHR_params *params = args;

    TRACE("%p, %p, %p, %p, %p, %u, %u, %u\n", params->commandBuffer, params->pRaygenShaderBindingTable, params->pMissShaderBindingTable, params->pHitShaderBindingTable, params->pCallableShaderBindingTable, params->width, params->height, params->depth);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdTraceRaysKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pRaygenShaderBindingTable, params->pMissShaderBindingTable, params->pHitShaderBindingTable, params->pCallableShaderBindingTable, params->width, params->height, params->depth);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdTraceRaysKHR(void *args)
{
    struct vkCmdTraceRaysKHR_params *params = args;
    VkStridedDeviceAddressRegionKHR_host pRaygenShaderBindingTable_host;
    VkStridedDeviceAddressRegionKHR_host pMissShaderBindingTable_host;
    VkStridedDeviceAddressRegionKHR_host pHitShaderBindingTable_host;
    VkStridedDeviceAddressRegionKHR_host pCallableShaderBindingTable_host;

    TRACE("%p, %p, %p, %p, %p, %u, %u, %u\n", params->commandBuffer, params->pRaygenShaderBindingTable, params->pMissShaderBindingTable, params->pHitShaderBindingTable, params->pCallableShaderBindingTable, params->width, params->height, params->depth);

    convert_VkStridedDeviceAddressRegionKHR_win32_to_host(params->pRaygenShaderBindingTable, &pRaygenShaderBindingTable_host);
    convert_VkStridedDeviceAddressRegionKHR_win32_to_host(params->pMissShaderBindingTable, &pMissShaderBindingTable_host);
    convert_VkStridedDeviceAddressRegionKHR_win32_to_host(params->pHitShaderBindingTable, &pHitShaderBindingTable_host);
    convert_VkStridedDeviceAddressRegionKHR_win32_to_host(params->pCallableShaderBindingTable, &pCallableShaderBindingTable_host);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdTraceRaysKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, &pRaygenShaderBindingTable_host, &pMissShaderBindingTable_host, &pHitShaderBindingTable_host, &pCallableShaderBindingTable_host, params->width, params->height, params->depth);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdTraceRaysNV(void *args)
{
    struct vkCmdTraceRaysNV_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s, 0x%s, 0x%s, 0x%s, 0x%s, 0x%s, 0x%s, 0x%s, 0x%s, %u, %u, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->raygenShaderBindingTableBuffer), wine_dbgstr_longlong(params->raygenShaderBindingOffset), wine_dbgstr_longlong(params->missShaderBindingTableBuffer), wine_dbgstr_longlong(params->missShaderBindingOffset), wine_dbgstr_longlong(params->missShaderBindingStride), wine_dbgstr_longlong(params->hitShaderBindingTableBuffer), wine_dbgstr_longlong(params->hitShaderBindingOffset), wine_dbgstr_longlong(params->hitShaderBindingStride), wine_dbgstr_longlong(params->callableShaderBindingTableBuffer), wine_dbgstr_longlong(params->callableShaderBindingOffset), wine_dbgstr_longlong(params->callableShaderBindingStride), params->width, params->height, params->depth);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdTraceRaysNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->raygenShaderBindingTableBuffer, params->raygenShaderBindingOffset, params->missShaderBindingTableBuffer, params->missShaderBindingOffset, params->missShaderBindingStride, params->hitShaderBindingTableBuffer, params->hitShaderBindingOffset, params->hitShaderBindingStride, params->callableShaderBindingTableBuffer, params->callableShaderBindingOffset, params->callableShaderBindingStride, params->width, params->height, params->depth);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdTraceRaysNV(void *args)
{
    struct vkCmdTraceRaysNV_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s, 0x%s, 0x%s, 0x%s, 0x%s, 0x%s, 0x%s, 0x%s, 0x%s, %u, %u, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->raygenShaderBindingTableBuffer), wine_dbgstr_longlong(params->raygenShaderBindingOffset), wine_dbgstr_longlong(params->missShaderBindingTableBuffer), wine_dbgstr_longlong(params->missShaderBindingOffset), wine_dbgstr_longlong(params->missShaderBindingStride), wine_dbgstr_longlong(params->hitShaderBindingTableBuffer), wine_dbgstr_longlong(params->hitShaderBindingOffset), wine_dbgstr_longlong(params->hitShaderBindingStride), wine_dbgstr_longlong(params->callableShaderBindingTableBuffer), wine_dbgstr_longlong(params->callableShaderBindingOffset), wine_dbgstr_longlong(params->callableShaderBindingStride), params->width, params->height, params->depth);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdTraceRaysNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->raygenShaderBindingTableBuffer, params->raygenShaderBindingOffset, params->missShaderBindingTableBuffer, params->missShaderBindingOffset, params->missShaderBindingStride, params->hitShaderBindingTableBuffer, params->hitShaderBindingOffset, params->hitShaderBindingStride, params->callableShaderBindingTableBuffer, params->callableShaderBindingOffset, params->callableShaderBindingStride, params->width, params->height, params->depth);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdUpdateBuffer(void *args)
{
    struct vkCmdUpdateBuffer_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s, %p\n", params->commandBuffer, wine_dbgstr_longlong(params->dstBuffer), wine_dbgstr_longlong(params->dstOffset), wine_dbgstr_longlong(params->dataSize), params->pData);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdUpdateBuffer(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->dstBuffer, params->dstOffset, params->dataSize, params->pData);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdUpdateBuffer(void *args)
{
    struct vkCmdUpdateBuffer_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s, %p\n", params->commandBuffer, wine_dbgstr_longlong(params->dstBuffer), wine_dbgstr_longlong(params->dstOffset), wine_dbgstr_longlong(params->dataSize), params->pData);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdUpdateBuffer(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->dstBuffer, params->dstOffset, params->dataSize, params->pData);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdWaitEvents(void *args)
{
    struct vkCmdWaitEvents_params *params = args;

    TRACE("%p, %u, %p, %#x, %#x, %u, %p, %u, %p, %u, %p\n", params->commandBuffer, params->eventCount, params->pEvents, params->srcStageMask, params->dstStageMask, params->memoryBarrierCount, params->pMemoryBarriers, params->bufferMemoryBarrierCount, params->pBufferMemoryBarriers, params->imageMemoryBarrierCount, params->pImageMemoryBarriers);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdWaitEvents(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->eventCount, params->pEvents, params->srcStageMask, params->dstStageMask, params->memoryBarrierCount, params->pMemoryBarriers, params->bufferMemoryBarrierCount, params->pBufferMemoryBarriers, params->imageMemoryBarrierCount, params->pImageMemoryBarriers);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdWaitEvents(void *args)
{
    struct vkCmdWaitEvents_params *params = args;
    VkBufferMemoryBarrier_host *pBufferMemoryBarriers_host;
    VkImageMemoryBarrier_host *pImageMemoryBarriers_host;
    struct conversion_context ctx;

    TRACE("%p, %u, %p, %#x, %#x, %u, %p, %u, %p, %u, %p\n", params->commandBuffer, params->eventCount, params->pEvents, params->srcStageMask, params->dstStageMask, params->memoryBarrierCount, params->pMemoryBarriers, params->bufferMemoryBarrierCount, params->pBufferMemoryBarriers, params->imageMemoryBarrierCount, params->pImageMemoryBarriers);

    init_conversion_context(&ctx);
    pBufferMemoryBarriers_host = convert_VkBufferMemoryBarrier_array_win32_to_host(&ctx, params->pBufferMemoryBarriers, params->bufferMemoryBarrierCount);
    pImageMemoryBarriers_host = convert_VkImageMemoryBarrier_array_win32_to_host(&ctx, params->pImageMemoryBarriers, params->imageMemoryBarrierCount);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdWaitEvents(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->eventCount, params->pEvents, params->srcStageMask, params->dstStageMask, params->memoryBarrierCount, params->pMemoryBarriers, params->bufferMemoryBarrierCount, pBufferMemoryBarriers_host, params->imageMemoryBarrierCount, pImageMemoryBarriers_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdWaitEvents2(void *args)
{
    struct vkCmdWaitEvents2_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->commandBuffer, params->eventCount, params->pEvents, params->pDependencyInfos);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdWaitEvents2(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->eventCount, params->pEvents, params->pDependencyInfos);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdWaitEvents2(void *args)
{
    struct vkCmdWaitEvents2_params *params = args;
    VkDependencyInfo_host *pDependencyInfos_host;
    struct conversion_context ctx;

    TRACE("%p, %u, %p, %p\n", params->commandBuffer, params->eventCount, params->pEvents, params->pDependencyInfos);

    init_conversion_context(&ctx);
    pDependencyInfos_host = convert_VkDependencyInfo_array_win32_to_host(&ctx, params->pDependencyInfos, params->eventCount);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdWaitEvents2(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->eventCount, params->pEvents, pDependencyInfos_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdWaitEvents2KHR(void *args)
{
    struct vkCmdWaitEvents2KHR_params *params = args;

    TRACE("%p, %u, %p, %p\n", params->commandBuffer, params->eventCount, params->pEvents, params->pDependencyInfos);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdWaitEvents2KHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->eventCount, params->pEvents, params->pDependencyInfos);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdWaitEvents2KHR(void *args)
{
    struct vkCmdWaitEvents2KHR_params *params = args;
    VkDependencyInfo_host *pDependencyInfos_host;
    struct conversion_context ctx;

    TRACE("%p, %u, %p, %p\n", params->commandBuffer, params->eventCount, params->pEvents, params->pDependencyInfos);

    init_conversion_context(&ctx);
    pDependencyInfos_host = convert_VkDependencyInfo_array_win32_to_host(&ctx, params->pDependencyInfos, params->eventCount);
    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdWaitEvents2KHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->eventCount, params->pEvents, pDependencyInfos_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdWriteAccelerationStructuresPropertiesKHR(void *args)
{
    struct vkCmdWriteAccelerationStructuresPropertiesKHR_params *params = args;

    TRACE("%p, %u, %p, %#x, 0x%s, %u\n", params->commandBuffer, params->accelerationStructureCount, params->pAccelerationStructures, params->queryType, wine_dbgstr_longlong(params->queryPool), params->firstQuery);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdWriteAccelerationStructuresPropertiesKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->accelerationStructureCount, params->pAccelerationStructures, params->queryType, params->queryPool, params->firstQuery);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdWriteAccelerationStructuresPropertiesKHR(void *args)
{
    struct vkCmdWriteAccelerationStructuresPropertiesKHR_params *params = args;

    TRACE("%p, %u, %p, %#x, 0x%s, %u\n", params->commandBuffer, params->accelerationStructureCount, params->pAccelerationStructures, params->queryType, wine_dbgstr_longlong(params->queryPool), params->firstQuery);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdWriteAccelerationStructuresPropertiesKHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->accelerationStructureCount, params->pAccelerationStructures, params->queryType, params->queryPool, params->firstQuery);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdWriteAccelerationStructuresPropertiesNV(void *args)
{
    struct vkCmdWriteAccelerationStructuresPropertiesNV_params *params = args;

    TRACE("%p, %u, %p, %#x, 0x%s, %u\n", params->commandBuffer, params->accelerationStructureCount, params->pAccelerationStructures, params->queryType, wine_dbgstr_longlong(params->queryPool), params->firstQuery);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdWriteAccelerationStructuresPropertiesNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->accelerationStructureCount, params->pAccelerationStructures, params->queryType, params->queryPool, params->firstQuery);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdWriteAccelerationStructuresPropertiesNV(void *args)
{
    struct vkCmdWriteAccelerationStructuresPropertiesNV_params *params = args;

    TRACE("%p, %u, %p, %#x, 0x%s, %u\n", params->commandBuffer, params->accelerationStructureCount, params->pAccelerationStructures, params->queryType, wine_dbgstr_longlong(params->queryPool), params->firstQuery);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdWriteAccelerationStructuresPropertiesNV(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->accelerationStructureCount, params->pAccelerationStructures, params->queryType, params->queryPool, params->firstQuery);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdWriteBufferMarker2AMD(void *args)
{
    struct vkCmdWriteBufferMarker2AMD_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->stage), wine_dbgstr_longlong(params->dstBuffer), wine_dbgstr_longlong(params->dstOffset), params->marker);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdWriteBufferMarker2AMD(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->stage, params->dstBuffer, params->dstOffset, params->marker);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdWriteBufferMarker2AMD(void *args)
{
    struct vkCmdWriteBufferMarker2AMD_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->stage), wine_dbgstr_longlong(params->dstBuffer), wine_dbgstr_longlong(params->dstOffset), params->marker);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdWriteBufferMarker2AMD(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->stage, params->dstBuffer, params->dstOffset, params->marker);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdWriteBufferMarkerAMD(void *args)
{
    struct vkCmdWriteBufferMarkerAMD_params *params = args;

    TRACE("%p, %#x, 0x%s, 0x%s, %u\n", params->commandBuffer, params->pipelineStage, wine_dbgstr_longlong(params->dstBuffer), wine_dbgstr_longlong(params->dstOffset), params->marker);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdWriteBufferMarkerAMD(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pipelineStage, params->dstBuffer, params->dstOffset, params->marker);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdWriteBufferMarkerAMD(void *args)
{
    struct vkCmdWriteBufferMarkerAMD_params *params = args;

    TRACE("%p, %#x, 0x%s, 0x%s, %u\n", params->commandBuffer, params->pipelineStage, wine_dbgstr_longlong(params->dstBuffer), wine_dbgstr_longlong(params->dstOffset), params->marker);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdWriteBufferMarkerAMD(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pipelineStage, params->dstBuffer, params->dstOffset, params->marker);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdWriteMicromapsPropertiesEXT(void *args)
{
    struct vkCmdWriteMicromapsPropertiesEXT_params *params = args;

    TRACE("%p, %u, %p, %#x, 0x%s, %u\n", params->commandBuffer, params->micromapCount, params->pMicromaps, params->queryType, wine_dbgstr_longlong(params->queryPool), params->firstQuery);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdWriteMicromapsPropertiesEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->micromapCount, params->pMicromaps, params->queryType, params->queryPool, params->firstQuery);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdWriteMicromapsPropertiesEXT(void *args)
{
    struct vkCmdWriteMicromapsPropertiesEXT_params *params = args;

    TRACE("%p, %u, %p, %#x, 0x%s, %u\n", params->commandBuffer, params->micromapCount, params->pMicromaps, params->queryType, wine_dbgstr_longlong(params->queryPool), params->firstQuery);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdWriteMicromapsPropertiesEXT(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->micromapCount, params->pMicromaps, params->queryType, params->queryPool, params->firstQuery);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdWriteTimestamp(void *args)
{
    struct vkCmdWriteTimestamp_params *params = args;

    TRACE("%p, %#x, 0x%s, %u\n", params->commandBuffer, params->pipelineStage, wine_dbgstr_longlong(params->queryPool), params->query);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdWriteTimestamp(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pipelineStage, params->queryPool, params->query);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdWriteTimestamp(void *args)
{
    struct vkCmdWriteTimestamp_params *params = args;

    TRACE("%p, %#x, 0x%s, %u\n", params->commandBuffer, params->pipelineStage, wine_dbgstr_longlong(params->queryPool), params->query);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdWriteTimestamp(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->pipelineStage, params->queryPool, params->query);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdWriteTimestamp2(void *args)
{
    struct vkCmdWriteTimestamp2_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->stage), wine_dbgstr_longlong(params->queryPool), params->query);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdWriteTimestamp2(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->stage, params->queryPool, params->query);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdWriteTimestamp2(void *args)
{
    struct vkCmdWriteTimestamp2_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->stage), wine_dbgstr_longlong(params->queryPool), params->query);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdWriteTimestamp2(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->stage, params->queryPool, params->query);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCmdWriteTimestamp2KHR(void *args)
{
    struct vkCmdWriteTimestamp2KHR_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->stage), wine_dbgstr_longlong(params->queryPool), params->query);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdWriteTimestamp2KHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->stage, params->queryPool, params->query);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCmdWriteTimestamp2KHR(void *args)
{
    struct vkCmdWriteTimestamp2KHR_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %u\n", params->commandBuffer, wine_dbgstr_longlong(params->stage), wine_dbgstr_longlong(params->queryPool), params->query);

    wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkCmdWriteTimestamp2KHR(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->stage, params->queryPool, params->query);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCompileDeferredNV(void *args)
{
    struct vkCompileDeferredNV_params *params = args;

    TRACE("%p, 0x%s, %u\n", params->device, wine_dbgstr_longlong(params->pipeline), params->shader);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCompileDeferredNV(wine_device_from_handle(params->device)->device, params->pipeline, params->shader);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCompileDeferredNV(void *args)
{
    struct vkCompileDeferredNV_params *params = args;

    TRACE("%p, 0x%s, %u\n", params->device, wine_dbgstr_longlong(params->pipeline), params->shader);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCompileDeferredNV(wine_device_from_handle(params->device)->device, params->pipeline, params->shader);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCopyAccelerationStructureKHR(void *args)
{
    struct vkCopyAccelerationStructureKHR_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->deferredOperation), params->pInfo);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCopyAccelerationStructureKHR(wine_device_from_handle(params->device)->device, params->deferredOperation, params->pInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCopyAccelerationStructureKHR(void *args)
{
    struct vkCopyAccelerationStructureKHR_params *params = args;
    VkCopyAccelerationStructureInfoKHR_host pInfo_host;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->deferredOperation), params->pInfo);

    convert_VkCopyAccelerationStructureInfoKHR_win32_to_host(params->pInfo, &pInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkCopyAccelerationStructureKHR(wine_device_from_handle(params->device)->device, params->deferredOperation, &pInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCopyAccelerationStructureToMemoryKHR(void *args)
{
    struct vkCopyAccelerationStructureToMemoryKHR_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->deferredOperation), params->pInfo);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCopyAccelerationStructureToMemoryKHR(wine_device_from_handle(params->device)->device, params->deferredOperation, params->pInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCopyAccelerationStructureToMemoryKHR(void *args)
{
    struct vkCopyAccelerationStructureToMemoryKHR_params *params = args;
    VkCopyAccelerationStructureToMemoryInfoKHR_host pInfo_host;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->deferredOperation), params->pInfo);

    convert_VkCopyAccelerationStructureToMemoryInfoKHR_win32_to_host(params->pInfo, &pInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkCopyAccelerationStructureToMemoryKHR(wine_device_from_handle(params->device)->device, params->deferredOperation, &pInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCopyMemoryToAccelerationStructureKHR(void *args)
{
    struct vkCopyMemoryToAccelerationStructureKHR_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->deferredOperation), params->pInfo);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCopyMemoryToAccelerationStructureKHR(wine_device_from_handle(params->device)->device, params->deferredOperation, params->pInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCopyMemoryToAccelerationStructureKHR(void *args)
{
    struct vkCopyMemoryToAccelerationStructureKHR_params *params = args;
    VkCopyMemoryToAccelerationStructureInfoKHR_host pInfo_host;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->deferredOperation), params->pInfo);

    convert_VkCopyMemoryToAccelerationStructureInfoKHR_win32_to_host(params->pInfo, &pInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkCopyMemoryToAccelerationStructureKHR(wine_device_from_handle(params->device)->device, params->deferredOperation, &pInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCopyMemoryToMicromapEXT(void *args)
{
    struct vkCopyMemoryToMicromapEXT_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->deferredOperation), params->pInfo);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCopyMemoryToMicromapEXT(wine_device_from_handle(params->device)->device, params->deferredOperation, params->pInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCopyMemoryToMicromapEXT(void *args)
{
    struct vkCopyMemoryToMicromapEXT_params *params = args;
    VkCopyMemoryToMicromapInfoEXT_host pInfo_host;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->deferredOperation), params->pInfo);

    convert_VkCopyMemoryToMicromapInfoEXT_win32_to_host(params->pInfo, &pInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkCopyMemoryToMicromapEXT(wine_device_from_handle(params->device)->device, params->deferredOperation, &pInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCopyMicromapEXT(void *args)
{
    struct vkCopyMicromapEXT_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->deferredOperation), params->pInfo);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCopyMicromapEXT(wine_device_from_handle(params->device)->device, params->deferredOperation, params->pInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCopyMicromapEXT(void *args)
{
    struct vkCopyMicromapEXT_params *params = args;
    VkCopyMicromapInfoEXT_host pInfo_host;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->deferredOperation), params->pInfo);

    convert_VkCopyMicromapInfoEXT_win32_to_host(params->pInfo, &pInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkCopyMicromapEXT(wine_device_from_handle(params->device)->device, params->deferredOperation, &pInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCopyMicromapToMemoryEXT(void *args)
{
    struct vkCopyMicromapToMemoryEXT_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->deferredOperation), params->pInfo);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCopyMicromapToMemoryEXT(wine_device_from_handle(params->device)->device, params->deferredOperation, params->pInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCopyMicromapToMemoryEXT(void *args)
{
    struct vkCopyMicromapToMemoryEXT_params *params = args;
    VkCopyMicromapToMemoryInfoEXT_host pInfo_host;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->deferredOperation), params->pInfo);

    convert_VkCopyMicromapToMemoryInfoEXT_win32_to_host(params->pInfo, &pInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkCopyMicromapToMemoryEXT(wine_device_from_handle(params->device)->device, params->deferredOperation, &pInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateAccelerationStructureKHR(void *args)
{
    struct vkCreateAccelerationStructureKHR_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pAccelerationStructure);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateAccelerationStructureKHR(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pAccelerationStructure);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateAccelerationStructureKHR(void *args)
{
    struct vkCreateAccelerationStructureKHR_params *params = args;
    VkAccelerationStructureCreateInfoKHR_host pCreateInfo_host;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pAccelerationStructure);

    convert_VkAccelerationStructureCreateInfoKHR_win32_to_host(params->pCreateInfo, &pCreateInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateAccelerationStructureKHR(wine_device_from_handle(params->device)->device, &pCreateInfo_host, NULL, params->pAccelerationStructure);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateAccelerationStructureNV(void *args)
{
    struct vkCreateAccelerationStructureNV_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pAccelerationStructure);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateAccelerationStructureNV(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pAccelerationStructure);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateAccelerationStructureNV(void *args)
{
    struct vkCreateAccelerationStructureNV_params *params = args;
    VkAccelerationStructureCreateInfoNV_host pCreateInfo_host;
    struct conversion_context ctx;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pAccelerationStructure);

    init_conversion_context(&ctx);
    convert_VkAccelerationStructureCreateInfoNV_win32_to_host(&ctx, params->pCreateInfo, &pCreateInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateAccelerationStructureNV(wine_device_from_handle(params->device)->device, &pCreateInfo_host, NULL, params->pAccelerationStructure);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateBuffer(void *args)
{
    struct vkCreateBuffer_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pBuffer);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateBuffer(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pBuffer);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateBuffer(void *args)
{
    struct vkCreateBuffer_params *params = args;
    VkBufferCreateInfo_host pCreateInfo_host;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pBuffer);

    convert_VkBufferCreateInfo_win32_to_host(params->pCreateInfo, &pCreateInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateBuffer(wine_device_from_handle(params->device)->device, &pCreateInfo_host, NULL, params->pBuffer);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateBufferView(void *args)
{
    struct vkCreateBufferView_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pView);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateBufferView(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pView);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateBufferView(void *args)
{
    struct vkCreateBufferView_params *params = args;
    VkBufferViewCreateInfo_host pCreateInfo_host;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pView);

    convert_VkBufferViewCreateInfo_win32_to_host(params->pCreateInfo, &pCreateInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateBufferView(wine_device_from_handle(params->device)->device, &pCreateInfo_host, NULL, params->pView);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateCommandPool(void *args)
{
    struct vkCreateCommandPool_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pCommandPool);

    params->result = wine_vkCreateCommandPool(params->device, params->pCreateInfo, params->pAllocator, params->pCommandPool, params->client_ptr);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateCommandPool(void *args)
{
    struct vkCreateCommandPool_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pCommandPool);

    params->result = wine_vkCreateCommandPool(params->device, params->pCreateInfo, params->pAllocator, params->pCommandPool, params->client_ptr);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateComputePipelines(void *args)
{
    struct vkCreateComputePipelines_params *params = args;

    TRACE("%p, 0x%s, %u, %p, %p, %p\n", params->device, wine_dbgstr_longlong(params->pipelineCache), params->createInfoCount, params->pCreateInfos, params->pAllocator, params->pPipelines);

    params->result = wine_vkCreateComputePipelines(params->device, params->pipelineCache, params->createInfoCount, params->pCreateInfos, params->pAllocator, params->pPipelines);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateComputePipelines(void *args)
{
    struct vkCreateComputePipelines_params *params = args;
    VkComputePipelineCreateInfo_host *pCreateInfos_host;
    struct conversion_context ctx;

    TRACE("%p, 0x%s, %u, %p, %p, %p\n", params->device, wine_dbgstr_longlong(params->pipelineCache), params->createInfoCount, params->pCreateInfos, params->pAllocator, params->pPipelines);

    init_conversion_context(&ctx);
    pCreateInfos_host = convert_VkComputePipelineCreateInfo_array_win32_to_host(&ctx, params->pCreateInfos, params->createInfoCount);
    params->result = wine_vkCreateComputePipelines(params->device, params->pipelineCache, params->createInfoCount, pCreateInfos_host, params->pAllocator, params->pPipelines);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateCuFunctionNVX(void *args)
{
    struct vkCreateCuFunctionNVX_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pFunction);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateCuFunctionNVX(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pFunction);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateCuFunctionNVX(void *args)
{
    struct vkCreateCuFunctionNVX_params *params = args;
    VkCuFunctionCreateInfoNVX_host pCreateInfo_host;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pFunction);

    convert_VkCuFunctionCreateInfoNVX_win32_to_host(params->pCreateInfo, &pCreateInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateCuFunctionNVX(wine_device_from_handle(params->device)->device, &pCreateInfo_host, NULL, params->pFunction);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateCuModuleNVX(void *args)
{
    struct vkCreateCuModuleNVX_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pModule);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateCuModuleNVX(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pModule);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateCuModuleNVX(void *args)
{
    struct vkCreateCuModuleNVX_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pModule);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateCuModuleNVX(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pModule);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateDebugReportCallbackEXT(void *args)
{
    struct vkCreateDebugReportCallbackEXT_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->instance, params->pCreateInfo, params->pAllocator, params->pCallback);

    params->result = wine_vkCreateDebugReportCallbackEXT(params->instance, params->pCreateInfo, params->pAllocator, params->pCallback);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateDebugReportCallbackEXT(void *args)
{
    struct vkCreateDebugReportCallbackEXT_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->instance, params->pCreateInfo, params->pAllocator, params->pCallback);

    params->result = wine_vkCreateDebugReportCallbackEXT(params->instance, params->pCreateInfo, params->pAllocator, params->pCallback);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateDebugUtilsMessengerEXT(void *args)
{
    struct vkCreateDebugUtilsMessengerEXT_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->instance, params->pCreateInfo, params->pAllocator, params->pMessenger);

    params->result = wine_vkCreateDebugUtilsMessengerEXT(params->instance, params->pCreateInfo, params->pAllocator, params->pMessenger);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateDebugUtilsMessengerEXT(void *args)
{
    struct vkCreateDebugUtilsMessengerEXT_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->instance, params->pCreateInfo, params->pAllocator, params->pMessenger);

    params->result = wine_vkCreateDebugUtilsMessengerEXT(params->instance, params->pCreateInfo, params->pAllocator, params->pMessenger);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateDeferredOperationKHR(void *args)
{
    struct vkCreateDeferredOperationKHR_params *params = args;

    TRACE("%p, %p, %p\n", params->device, params->pAllocator, params->pDeferredOperation);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateDeferredOperationKHR(wine_device_from_handle(params->device)->device, NULL, params->pDeferredOperation);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateDeferredOperationKHR(void *args)
{
    struct vkCreateDeferredOperationKHR_params *params = args;

    TRACE("%p, %p, %p\n", params->device, params->pAllocator, params->pDeferredOperation);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateDeferredOperationKHR(wine_device_from_handle(params->device)->device, NULL, params->pDeferredOperation);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateDescriptorPool(void *args)
{
    struct vkCreateDescriptorPool_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pDescriptorPool);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateDescriptorPool(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pDescriptorPool);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateDescriptorPool(void *args)
{
    struct vkCreateDescriptorPool_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pDescriptorPool);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateDescriptorPool(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pDescriptorPool);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateDescriptorSetLayout(void *args)
{
    struct vkCreateDescriptorSetLayout_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pSetLayout);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateDescriptorSetLayout(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pSetLayout);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateDescriptorSetLayout(void *args)
{
    struct vkCreateDescriptorSetLayout_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pSetLayout);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateDescriptorSetLayout(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pSetLayout);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateDescriptorUpdateTemplate(void *args)
{
    struct vkCreateDescriptorUpdateTemplate_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pDescriptorUpdateTemplate);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateDescriptorUpdateTemplate(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pDescriptorUpdateTemplate);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateDescriptorUpdateTemplate(void *args)
{
    struct vkCreateDescriptorUpdateTemplate_params *params = args;
    VkDescriptorUpdateTemplateCreateInfo_host pCreateInfo_host;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pDescriptorUpdateTemplate);

    convert_VkDescriptorUpdateTemplateCreateInfo_win32_to_host(params->pCreateInfo, &pCreateInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateDescriptorUpdateTemplate(wine_device_from_handle(params->device)->device, &pCreateInfo_host, NULL, params->pDescriptorUpdateTemplate);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateDescriptorUpdateTemplateKHR(void *args)
{
    struct vkCreateDescriptorUpdateTemplateKHR_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pDescriptorUpdateTemplate);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateDescriptorUpdateTemplateKHR(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pDescriptorUpdateTemplate);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateDescriptorUpdateTemplateKHR(void *args)
{
    struct vkCreateDescriptorUpdateTemplateKHR_params *params = args;
    VkDescriptorUpdateTemplateCreateInfo_host pCreateInfo_host;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pDescriptorUpdateTemplate);

    convert_VkDescriptorUpdateTemplateCreateInfo_win32_to_host(params->pCreateInfo, &pCreateInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateDescriptorUpdateTemplateKHR(wine_device_from_handle(params->device)->device, &pCreateInfo_host, NULL, params->pDescriptorUpdateTemplate);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateDevice(void *args)
{
    struct vkCreateDevice_params *params = args;
    VkDeviceCreateInfo pCreateInfo_host;
    struct conversion_context ctx;

    TRACE("%p, %p, %p, %p\n", params->physicalDevice, params->pCreateInfo, params->pAllocator, params->pDevice);

    init_conversion_context(&ctx);
    convert_VkDeviceCreateInfo_win64_to_host(&ctx, params->pCreateInfo, &pCreateInfo_host);
    params->result = wine_vkCreateDevice(params->physicalDevice, &pCreateInfo_host, params->pAllocator, params->pDevice, params->client_ptr);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateDevice(void *args)
{
    struct vkCreateDevice_params *params = args;
    VkDeviceCreateInfo pCreateInfo_host;
    struct conversion_context ctx;

    TRACE("%p, %p, %p, %p\n", params->physicalDevice, params->pCreateInfo, params->pAllocator, params->pDevice);

    init_conversion_context(&ctx);
    convert_VkDeviceCreateInfo_win32_to_host(&ctx, params->pCreateInfo, &pCreateInfo_host);
    params->result = wine_vkCreateDevice(params->physicalDevice, &pCreateInfo_host, params->pAllocator, params->pDevice, params->client_ptr);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateEvent(void *args)
{
    struct vkCreateEvent_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pEvent);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateEvent(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pEvent);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateEvent(void *args)
{
    struct vkCreateEvent_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pEvent);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateEvent(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pEvent);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateFence(void *args)
{
    struct vkCreateFence_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pFence);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateFence(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pFence);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateFence(void *args)
{
    struct vkCreateFence_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pFence);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateFence(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pFence);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateFramebuffer(void *args)
{
    struct vkCreateFramebuffer_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pFramebuffer);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateFramebuffer(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pFramebuffer);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateFramebuffer(void *args)
{
    struct vkCreateFramebuffer_params *params = args;
    VkFramebufferCreateInfo_host pCreateInfo_host;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pFramebuffer);

    convert_VkFramebufferCreateInfo_win32_to_host(params->pCreateInfo, &pCreateInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateFramebuffer(wine_device_from_handle(params->device)->device, &pCreateInfo_host, NULL, params->pFramebuffer);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateGraphicsPipelines(void *args)
{
    struct vkCreateGraphicsPipelines_params *params = args;

    TRACE("%p, 0x%s, %u, %p, %p, %p\n", params->device, wine_dbgstr_longlong(params->pipelineCache), params->createInfoCount, params->pCreateInfos, params->pAllocator, params->pPipelines);

    params->result = wine_vkCreateGraphicsPipelines(params->device, params->pipelineCache, params->createInfoCount, params->pCreateInfos, params->pAllocator, params->pPipelines);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateGraphicsPipelines(void *args)
{
    struct vkCreateGraphicsPipelines_params *params = args;
    VkGraphicsPipelineCreateInfo_host *pCreateInfos_host;
    struct conversion_context ctx;

    TRACE("%p, 0x%s, %u, %p, %p, %p\n", params->device, wine_dbgstr_longlong(params->pipelineCache), params->createInfoCount, params->pCreateInfos, params->pAllocator, params->pPipelines);

    init_conversion_context(&ctx);
    pCreateInfos_host = convert_VkGraphicsPipelineCreateInfo_array_win32_to_host(&ctx, params->pCreateInfos, params->createInfoCount);
    params->result = wine_vkCreateGraphicsPipelines(params->device, params->pipelineCache, params->createInfoCount, pCreateInfos_host, params->pAllocator, params->pPipelines);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateImage(void *args)
{
    struct vkCreateImage_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pImage);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateImage(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pImage);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateImage(void *args)
{
    struct vkCreateImage_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pImage);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateImage(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pImage);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateImageView(void *args)
{
    struct vkCreateImageView_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pView);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateImageView(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pView);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateImageView(void *args)
{
    struct vkCreateImageView_params *params = args;
    VkImageViewCreateInfo_host pCreateInfo_host;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pView);

    convert_VkImageViewCreateInfo_win32_to_host(params->pCreateInfo, &pCreateInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateImageView(wine_device_from_handle(params->device)->device, &pCreateInfo_host, NULL, params->pView);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateIndirectCommandsLayoutNV(void *args)
{
    struct vkCreateIndirectCommandsLayoutNV_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pIndirectCommandsLayout);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateIndirectCommandsLayoutNV(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pIndirectCommandsLayout);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateIndirectCommandsLayoutNV(void *args)
{
    struct vkCreateIndirectCommandsLayoutNV_params *params = args;
    VkIndirectCommandsLayoutCreateInfoNV_host pCreateInfo_host;
    struct conversion_context ctx;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pIndirectCommandsLayout);

    init_conversion_context(&ctx);
    convert_VkIndirectCommandsLayoutCreateInfoNV_win32_to_host(&ctx, params->pCreateInfo, &pCreateInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateIndirectCommandsLayoutNV(wine_device_from_handle(params->device)->device, &pCreateInfo_host, NULL, params->pIndirectCommandsLayout);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateInstance(void *args)
{
    struct vkCreateInstance_params *params = args;
    VkInstanceCreateInfo pCreateInfo_host;
    struct conversion_context ctx;

    TRACE("%p, %p, %p\n", params->pCreateInfo, params->pAllocator, params->pInstance);

    init_conversion_context(&ctx);
    convert_VkInstanceCreateInfo_win64_to_host(&ctx, params->pCreateInfo, &pCreateInfo_host);
    params->result = wine_vkCreateInstance(&pCreateInfo_host, params->pAllocator, params->pInstance, params->client_ptr);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateInstance(void *args)
{
    struct vkCreateInstance_params *params = args;
    VkInstanceCreateInfo pCreateInfo_host;
    struct conversion_context ctx;

    TRACE("%p, %p, %p\n", params->pCreateInfo, params->pAllocator, params->pInstance);

    init_conversion_context(&ctx);
    convert_VkInstanceCreateInfo_win32_to_host(&ctx, params->pCreateInfo, &pCreateInfo_host);
    params->result = wine_vkCreateInstance(&pCreateInfo_host, params->pAllocator, params->pInstance, params->client_ptr);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateMicromapEXT(void *args)
{
    struct vkCreateMicromapEXT_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pMicromap);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateMicromapEXT(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pMicromap);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateMicromapEXT(void *args)
{
    struct vkCreateMicromapEXT_params *params = args;
    VkMicromapCreateInfoEXT_host pCreateInfo_host;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pMicromap);

    convert_VkMicromapCreateInfoEXT_win32_to_host(params->pCreateInfo, &pCreateInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateMicromapEXT(wine_device_from_handle(params->device)->device, &pCreateInfo_host, NULL, params->pMicromap);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateOpticalFlowSessionNV(void *args)
{
    struct vkCreateOpticalFlowSessionNV_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pSession);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateOpticalFlowSessionNV(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pSession);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateOpticalFlowSessionNV(void *args)
{
    struct vkCreateOpticalFlowSessionNV_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pSession);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateOpticalFlowSessionNV(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pSession);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreatePipelineCache(void *args)
{
    struct vkCreatePipelineCache_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pPipelineCache);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreatePipelineCache(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pPipelineCache);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreatePipelineCache(void *args)
{
    struct vkCreatePipelineCache_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pPipelineCache);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreatePipelineCache(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pPipelineCache);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreatePipelineLayout(void *args)
{
    struct vkCreatePipelineLayout_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pPipelineLayout);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreatePipelineLayout(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pPipelineLayout);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreatePipelineLayout(void *args)
{
    struct vkCreatePipelineLayout_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pPipelineLayout);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreatePipelineLayout(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pPipelineLayout);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreatePrivateDataSlot(void *args)
{
    struct vkCreatePrivateDataSlot_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pPrivateDataSlot);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreatePrivateDataSlot(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pPrivateDataSlot);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreatePrivateDataSlot(void *args)
{
    struct vkCreatePrivateDataSlot_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pPrivateDataSlot);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreatePrivateDataSlot(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pPrivateDataSlot);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreatePrivateDataSlotEXT(void *args)
{
    struct vkCreatePrivateDataSlotEXT_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pPrivateDataSlot);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreatePrivateDataSlotEXT(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pPrivateDataSlot);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreatePrivateDataSlotEXT(void *args)
{
    struct vkCreatePrivateDataSlotEXT_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pPrivateDataSlot);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreatePrivateDataSlotEXT(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pPrivateDataSlot);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateQueryPool(void *args)
{
    struct vkCreateQueryPool_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pQueryPool);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateQueryPool(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pQueryPool);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateQueryPool(void *args)
{
    struct vkCreateQueryPool_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pQueryPool);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateQueryPool(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pQueryPool);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateRayTracingPipelinesKHR(void *args)
{
    struct vkCreateRayTracingPipelinesKHR_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %u, %p, %p, %p\n", params->device, wine_dbgstr_longlong(params->deferredOperation), wine_dbgstr_longlong(params->pipelineCache), params->createInfoCount, params->pCreateInfos, params->pAllocator, params->pPipelines);

    params->result = wine_vkCreateRayTracingPipelinesKHR(params->device, params->deferredOperation, params->pipelineCache, params->createInfoCount, params->pCreateInfos, params->pAllocator, params->pPipelines);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateRayTracingPipelinesKHR(void *args)
{
    struct vkCreateRayTracingPipelinesKHR_params *params = args;
    VkRayTracingPipelineCreateInfoKHR_host *pCreateInfos_host;
    struct conversion_context ctx;

    TRACE("%p, 0x%s, 0x%s, %u, %p, %p, %p\n", params->device, wine_dbgstr_longlong(params->deferredOperation), wine_dbgstr_longlong(params->pipelineCache), params->createInfoCount, params->pCreateInfos, params->pAllocator, params->pPipelines);

    init_conversion_context(&ctx);
    pCreateInfos_host = convert_VkRayTracingPipelineCreateInfoKHR_array_win32_to_host(&ctx, params->pCreateInfos, params->createInfoCount);
    params->result = wine_vkCreateRayTracingPipelinesKHR(params->device, params->deferredOperation, params->pipelineCache, params->createInfoCount, pCreateInfos_host, params->pAllocator, params->pPipelines);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateRayTracingPipelinesNV(void *args)
{
    struct vkCreateRayTracingPipelinesNV_params *params = args;

    TRACE("%p, 0x%s, %u, %p, %p, %p\n", params->device, wine_dbgstr_longlong(params->pipelineCache), params->createInfoCount, params->pCreateInfos, params->pAllocator, params->pPipelines);

    params->result = wine_vkCreateRayTracingPipelinesNV(params->device, params->pipelineCache, params->createInfoCount, params->pCreateInfos, params->pAllocator, params->pPipelines);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateRayTracingPipelinesNV(void *args)
{
    struct vkCreateRayTracingPipelinesNV_params *params = args;
    VkRayTracingPipelineCreateInfoNV_host *pCreateInfos_host;
    struct conversion_context ctx;

    TRACE("%p, 0x%s, %u, %p, %p, %p\n", params->device, wine_dbgstr_longlong(params->pipelineCache), params->createInfoCount, params->pCreateInfos, params->pAllocator, params->pPipelines);

    init_conversion_context(&ctx);
    pCreateInfos_host = convert_VkRayTracingPipelineCreateInfoNV_array_win32_to_host(&ctx, params->pCreateInfos, params->createInfoCount);
    params->result = wine_vkCreateRayTracingPipelinesNV(params->device, params->pipelineCache, params->createInfoCount, pCreateInfos_host, params->pAllocator, params->pPipelines);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateRenderPass(void *args)
{
    struct vkCreateRenderPass_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pRenderPass);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateRenderPass(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pRenderPass);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateRenderPass(void *args)
{
    struct vkCreateRenderPass_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pRenderPass);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateRenderPass(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pRenderPass);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateRenderPass2(void *args)
{
    struct vkCreateRenderPass2_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pRenderPass);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateRenderPass2(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pRenderPass);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateRenderPass2(void *args)
{
    struct vkCreateRenderPass2_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pRenderPass);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateRenderPass2(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pRenderPass);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateRenderPass2KHR(void *args)
{
    struct vkCreateRenderPass2KHR_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pRenderPass);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateRenderPass2KHR(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pRenderPass);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateRenderPass2KHR(void *args)
{
    struct vkCreateRenderPass2KHR_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pRenderPass);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateRenderPass2KHR(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pRenderPass);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateSampler(void *args)
{
    struct vkCreateSampler_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pSampler);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateSampler(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pSampler);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateSampler(void *args)
{
    struct vkCreateSampler_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pSampler);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateSampler(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pSampler);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateSamplerYcbcrConversion(void *args)
{
    struct vkCreateSamplerYcbcrConversion_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pYcbcrConversion);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateSamplerYcbcrConversion(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pYcbcrConversion);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateSamplerYcbcrConversion(void *args)
{
    struct vkCreateSamplerYcbcrConversion_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pYcbcrConversion);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateSamplerYcbcrConversion(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pYcbcrConversion);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateSamplerYcbcrConversionKHR(void *args)
{
    struct vkCreateSamplerYcbcrConversionKHR_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pYcbcrConversion);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateSamplerYcbcrConversionKHR(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pYcbcrConversion);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateSamplerYcbcrConversionKHR(void *args)
{
    struct vkCreateSamplerYcbcrConversionKHR_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pYcbcrConversion);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateSamplerYcbcrConversionKHR(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pYcbcrConversion);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateSemaphore(void *args)
{
    struct vkCreateSemaphore_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pSemaphore);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateSemaphore(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pSemaphore);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateSemaphore(void *args)
{
    struct vkCreateSemaphore_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pSemaphore);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateSemaphore(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pSemaphore);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateShaderModule(void *args)
{
    struct vkCreateShaderModule_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pShaderModule);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateShaderModule(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pShaderModule);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateShaderModule(void *args)
{
    struct vkCreateShaderModule_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pShaderModule);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateShaderModule(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pShaderModule);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateSwapchainKHR(void *args)
{
    struct vkCreateSwapchainKHR_params *params = args;
    VkSwapchainCreateInfoKHR pCreateInfo_host;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pSwapchain);

    convert_VkSwapchainCreateInfoKHR_win64_to_host(params->pCreateInfo, &pCreateInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateSwapchainKHR(wine_device_from_handle(params->device)->device, &pCreateInfo_host, NULL, params->pSwapchain);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateSwapchainKHR(void *args)
{
    struct vkCreateSwapchainKHR_params *params = args;
    VkSwapchainCreateInfoKHR_host pCreateInfo_host;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pSwapchain);

    convert_VkSwapchainCreateInfoKHR_win32_to_host(params->pCreateInfo, &pCreateInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateSwapchainKHR(wine_device_from_handle(params->device)->device, &pCreateInfo_host, NULL, params->pSwapchain);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateValidationCacheEXT(void *args)
{
    struct vkCreateValidationCacheEXT_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pValidationCache);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateValidationCacheEXT(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pValidationCache);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateValidationCacheEXT(void *args)
{
    struct vkCreateValidationCacheEXT_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pCreateInfo, params->pAllocator, params->pValidationCache);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkCreateValidationCacheEXT(wine_device_from_handle(params->device)->device, params->pCreateInfo, NULL, params->pValidationCache);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkCreateWin32SurfaceKHR(void *args)
{
    struct vkCreateWin32SurfaceKHR_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->instance, params->pCreateInfo, params->pAllocator, params->pSurface);

    params->result = wine_vkCreateWin32SurfaceKHR(params->instance, params->pCreateInfo, params->pAllocator, params->pSurface);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkCreateWin32SurfaceKHR(void *args)
{
    struct vkCreateWin32SurfaceKHR_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->instance, params->pCreateInfo, params->pAllocator, params->pSurface);

    params->result = wine_vkCreateWin32SurfaceKHR(params->instance, params->pCreateInfo, params->pAllocator, params->pSurface);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDebugMarkerSetObjectNameEXT(void *args)
{
    struct vkDebugMarkerSetObjectNameEXT_params *params = args;
    VkDebugMarkerObjectNameInfoEXT pNameInfo_host;

    TRACE("%p, %p\n", params->device, params->pNameInfo);

    convert_VkDebugMarkerObjectNameInfoEXT_win64_to_host(params->pNameInfo, &pNameInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkDebugMarkerSetObjectNameEXT(wine_device_from_handle(params->device)->device, &pNameInfo_host);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDebugMarkerSetObjectNameEXT(void *args)
{
    struct vkDebugMarkerSetObjectNameEXT_params *params = args;
    VkDebugMarkerObjectNameInfoEXT_host pNameInfo_host;

    TRACE("%p, %p\n", params->device, params->pNameInfo);

    convert_VkDebugMarkerObjectNameInfoEXT_win32_to_host(params->pNameInfo, &pNameInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkDebugMarkerSetObjectNameEXT(wine_device_from_handle(params->device)->device, &pNameInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDebugMarkerSetObjectTagEXT(void *args)
{
    struct vkDebugMarkerSetObjectTagEXT_params *params = args;
    VkDebugMarkerObjectTagInfoEXT pTagInfo_host;

    TRACE("%p, %p\n", params->device, params->pTagInfo);

    convert_VkDebugMarkerObjectTagInfoEXT_win64_to_host(params->pTagInfo, &pTagInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkDebugMarkerSetObjectTagEXT(wine_device_from_handle(params->device)->device, &pTagInfo_host);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDebugMarkerSetObjectTagEXT(void *args)
{
    struct vkDebugMarkerSetObjectTagEXT_params *params = args;
    VkDebugMarkerObjectTagInfoEXT_host pTagInfo_host;

    TRACE("%p, %p\n", params->device, params->pTagInfo);

    convert_VkDebugMarkerObjectTagInfoEXT_win32_to_host(params->pTagInfo, &pTagInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkDebugMarkerSetObjectTagEXT(wine_device_from_handle(params->device)->device, &pTagInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDebugReportMessageEXT(void *args)
{
    struct vkDebugReportMessageEXT_params *params = args;

    TRACE("%p, %#x, %#x, 0x%s, 0x%s, %d, %p, %p\n", params->instance, params->flags, params->objectType, wine_dbgstr_longlong(params->object), wine_dbgstr_longlong(params->location), params->messageCode, params->pLayerPrefix, params->pMessage);

    wine_instance_from_handle(params->instance)->funcs.p_vkDebugReportMessageEXT(wine_instance_from_handle(params->instance)->instance, params->flags, params->objectType, wine_vk_unwrap_handle(params->objectType, params->object), params->location, params->messageCode, params->pLayerPrefix, params->pMessage);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDebugReportMessageEXT(void *args)
{
    struct vkDebugReportMessageEXT_params *params = args;

    TRACE("%p, %#x, %#x, 0x%s, 0x%s, %d, %p, %p\n", params->instance, params->flags, params->objectType, wine_dbgstr_longlong(params->object), wine_dbgstr_longlong(params->location), params->messageCode, params->pLayerPrefix, params->pMessage);

    wine_instance_from_handle(params->instance)->funcs.p_vkDebugReportMessageEXT(wine_instance_from_handle(params->instance)->instance, params->flags, params->objectType, wine_vk_unwrap_handle(params->objectType, params->object), params->location, params->messageCode, params->pLayerPrefix, params->pMessage);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDeferredOperationJoinKHR(void *args)
{
    struct vkDeferredOperationJoinKHR_params *params = args;

    TRACE("%p, 0x%s\n", params->device, wine_dbgstr_longlong(params->operation));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkDeferredOperationJoinKHR(wine_device_from_handle(params->device)->device, params->operation);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDeferredOperationJoinKHR(void *args)
{
    struct vkDeferredOperationJoinKHR_params *params = args;

    TRACE("%p, 0x%s\n", params->device, wine_dbgstr_longlong(params->operation));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkDeferredOperationJoinKHR(wine_device_from_handle(params->device)->device, params->operation);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroyAccelerationStructureKHR(void *args)
{
    struct vkDestroyAccelerationStructureKHR_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->accelerationStructure), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyAccelerationStructureKHR(wine_device_from_handle(params->device)->device, params->accelerationStructure, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroyAccelerationStructureKHR(void *args)
{
    struct vkDestroyAccelerationStructureKHR_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->accelerationStructure), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyAccelerationStructureKHR(wine_device_from_handle(params->device)->device, params->accelerationStructure, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroyAccelerationStructureNV(void *args)
{
    struct vkDestroyAccelerationStructureNV_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->accelerationStructure), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyAccelerationStructureNV(wine_device_from_handle(params->device)->device, params->accelerationStructure, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroyAccelerationStructureNV(void *args)
{
    struct vkDestroyAccelerationStructureNV_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->accelerationStructure), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyAccelerationStructureNV(wine_device_from_handle(params->device)->device, params->accelerationStructure, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroyBuffer(void *args)
{
    struct vkDestroyBuffer_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->buffer), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyBuffer(wine_device_from_handle(params->device)->device, params->buffer, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroyBuffer(void *args)
{
    struct vkDestroyBuffer_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->buffer), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyBuffer(wine_device_from_handle(params->device)->device, params->buffer, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroyBufferView(void *args)
{
    struct vkDestroyBufferView_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->bufferView), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyBufferView(wine_device_from_handle(params->device)->device, params->bufferView, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroyBufferView(void *args)
{
    struct vkDestroyBufferView_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->bufferView), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyBufferView(wine_device_from_handle(params->device)->device, params->bufferView, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroyCommandPool(void *args)
{
    struct vkDestroyCommandPool_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->commandPool), params->pAllocator);

    wine_vkDestroyCommandPool(params->device, params->commandPool, params->pAllocator);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroyCommandPool(void *args)
{
    struct vkDestroyCommandPool_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->commandPool), params->pAllocator);

    wine_vkDestroyCommandPool(params->device, params->commandPool, params->pAllocator);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroyCuFunctionNVX(void *args)
{
    struct vkDestroyCuFunctionNVX_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->function), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyCuFunctionNVX(wine_device_from_handle(params->device)->device, params->function, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroyCuFunctionNVX(void *args)
{
    struct vkDestroyCuFunctionNVX_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->function), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyCuFunctionNVX(wine_device_from_handle(params->device)->device, params->function, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroyCuModuleNVX(void *args)
{
    struct vkDestroyCuModuleNVX_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->module), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyCuModuleNVX(wine_device_from_handle(params->device)->device, params->module, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroyCuModuleNVX(void *args)
{
    struct vkDestroyCuModuleNVX_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->module), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyCuModuleNVX(wine_device_from_handle(params->device)->device, params->module, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroyDebugReportCallbackEXT(void *args)
{
    struct vkDestroyDebugReportCallbackEXT_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->instance, wine_dbgstr_longlong(params->callback), params->pAllocator);

    wine_vkDestroyDebugReportCallbackEXT(params->instance, params->callback, params->pAllocator);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroyDebugReportCallbackEXT(void *args)
{
    struct vkDestroyDebugReportCallbackEXT_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->instance, wine_dbgstr_longlong(params->callback), params->pAllocator);

    wine_vkDestroyDebugReportCallbackEXT(params->instance, params->callback, params->pAllocator);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroyDebugUtilsMessengerEXT(void *args)
{
    struct vkDestroyDebugUtilsMessengerEXT_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->instance, wine_dbgstr_longlong(params->messenger), params->pAllocator);

    wine_vkDestroyDebugUtilsMessengerEXT(params->instance, params->messenger, params->pAllocator);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroyDebugUtilsMessengerEXT(void *args)
{
    struct vkDestroyDebugUtilsMessengerEXT_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->instance, wine_dbgstr_longlong(params->messenger), params->pAllocator);

    wine_vkDestroyDebugUtilsMessengerEXT(params->instance, params->messenger, params->pAllocator);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroyDeferredOperationKHR(void *args)
{
    struct vkDestroyDeferredOperationKHR_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->operation), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyDeferredOperationKHR(wine_device_from_handle(params->device)->device, params->operation, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroyDeferredOperationKHR(void *args)
{
    struct vkDestroyDeferredOperationKHR_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->operation), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyDeferredOperationKHR(wine_device_from_handle(params->device)->device, params->operation, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroyDescriptorPool(void *args)
{
    struct vkDestroyDescriptorPool_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->descriptorPool), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyDescriptorPool(wine_device_from_handle(params->device)->device, params->descriptorPool, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroyDescriptorPool(void *args)
{
    struct vkDestroyDescriptorPool_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->descriptorPool), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyDescriptorPool(wine_device_from_handle(params->device)->device, params->descriptorPool, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroyDescriptorSetLayout(void *args)
{
    struct vkDestroyDescriptorSetLayout_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->descriptorSetLayout), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyDescriptorSetLayout(wine_device_from_handle(params->device)->device, params->descriptorSetLayout, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroyDescriptorSetLayout(void *args)
{
    struct vkDestroyDescriptorSetLayout_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->descriptorSetLayout), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyDescriptorSetLayout(wine_device_from_handle(params->device)->device, params->descriptorSetLayout, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroyDescriptorUpdateTemplate(void *args)
{
    struct vkDestroyDescriptorUpdateTemplate_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->descriptorUpdateTemplate), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyDescriptorUpdateTemplate(wine_device_from_handle(params->device)->device, params->descriptorUpdateTemplate, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroyDescriptorUpdateTemplate(void *args)
{
    struct vkDestroyDescriptorUpdateTemplate_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->descriptorUpdateTemplate), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyDescriptorUpdateTemplate(wine_device_from_handle(params->device)->device, params->descriptorUpdateTemplate, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroyDescriptorUpdateTemplateKHR(void *args)
{
    struct vkDestroyDescriptorUpdateTemplateKHR_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->descriptorUpdateTemplate), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyDescriptorUpdateTemplateKHR(wine_device_from_handle(params->device)->device, params->descriptorUpdateTemplate, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroyDescriptorUpdateTemplateKHR(void *args)
{
    struct vkDestroyDescriptorUpdateTemplateKHR_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->descriptorUpdateTemplate), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyDescriptorUpdateTemplateKHR(wine_device_from_handle(params->device)->device, params->descriptorUpdateTemplate, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroyDevice(void *args)
{
    struct vkDestroyDevice_params *params = args;

    TRACE("%p, %p\n", params->device, params->pAllocator);

    if (!params->device)
        return STATUS_SUCCESS;

    wine_vkDestroyDevice(params->device, params->pAllocator);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroyDevice(void *args)
{
    struct vkDestroyDevice_params *params = args;

    TRACE("%p, %p\n", params->device, params->pAllocator);

    if (!params->device)
        return STATUS_SUCCESS;

    wine_vkDestroyDevice(params->device, params->pAllocator);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroyEvent(void *args)
{
    struct vkDestroyEvent_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->event), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyEvent(wine_device_from_handle(params->device)->device, params->event, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroyEvent(void *args)
{
    struct vkDestroyEvent_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->event), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyEvent(wine_device_from_handle(params->device)->device, params->event, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroyFence(void *args)
{
    struct vkDestroyFence_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->fence), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyFence(wine_device_from_handle(params->device)->device, params->fence, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroyFence(void *args)
{
    struct vkDestroyFence_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->fence), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyFence(wine_device_from_handle(params->device)->device, params->fence, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroyFramebuffer(void *args)
{
    struct vkDestroyFramebuffer_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->framebuffer), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyFramebuffer(wine_device_from_handle(params->device)->device, params->framebuffer, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroyFramebuffer(void *args)
{
    struct vkDestroyFramebuffer_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->framebuffer), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyFramebuffer(wine_device_from_handle(params->device)->device, params->framebuffer, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroyImage(void *args)
{
    struct vkDestroyImage_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->image), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyImage(wine_device_from_handle(params->device)->device, params->image, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroyImage(void *args)
{
    struct vkDestroyImage_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->image), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyImage(wine_device_from_handle(params->device)->device, params->image, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroyImageView(void *args)
{
    struct vkDestroyImageView_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->imageView), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyImageView(wine_device_from_handle(params->device)->device, params->imageView, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroyImageView(void *args)
{
    struct vkDestroyImageView_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->imageView), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyImageView(wine_device_from_handle(params->device)->device, params->imageView, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroyIndirectCommandsLayoutNV(void *args)
{
    struct vkDestroyIndirectCommandsLayoutNV_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->indirectCommandsLayout), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyIndirectCommandsLayoutNV(wine_device_from_handle(params->device)->device, params->indirectCommandsLayout, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroyIndirectCommandsLayoutNV(void *args)
{
    struct vkDestroyIndirectCommandsLayoutNV_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->indirectCommandsLayout), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyIndirectCommandsLayoutNV(wine_device_from_handle(params->device)->device, params->indirectCommandsLayout, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroyInstance(void *args)
{
    struct vkDestroyInstance_params *params = args;

    TRACE("%p, %p\n", params->instance, params->pAllocator);

    if (!params->instance)
        return STATUS_SUCCESS;

    wine_vkDestroyInstance(params->instance, params->pAllocator);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroyInstance(void *args)
{
    struct vkDestroyInstance_params *params = args;

    TRACE("%p, %p\n", params->instance, params->pAllocator);

    if (!params->instance)
        return STATUS_SUCCESS;

    wine_vkDestroyInstance(params->instance, params->pAllocator);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroyMicromapEXT(void *args)
{
    struct vkDestroyMicromapEXT_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->micromap), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyMicromapEXT(wine_device_from_handle(params->device)->device, params->micromap, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroyMicromapEXT(void *args)
{
    struct vkDestroyMicromapEXT_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->micromap), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyMicromapEXT(wine_device_from_handle(params->device)->device, params->micromap, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroyOpticalFlowSessionNV(void *args)
{
    struct vkDestroyOpticalFlowSessionNV_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->session), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyOpticalFlowSessionNV(wine_device_from_handle(params->device)->device, params->session, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroyOpticalFlowSessionNV(void *args)
{
    struct vkDestroyOpticalFlowSessionNV_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->session), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyOpticalFlowSessionNV(wine_device_from_handle(params->device)->device, params->session, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroyPipeline(void *args)
{
    struct vkDestroyPipeline_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->pipeline), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyPipeline(wine_device_from_handle(params->device)->device, params->pipeline, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroyPipeline(void *args)
{
    struct vkDestroyPipeline_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->pipeline), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyPipeline(wine_device_from_handle(params->device)->device, params->pipeline, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroyPipelineCache(void *args)
{
    struct vkDestroyPipelineCache_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->pipelineCache), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyPipelineCache(wine_device_from_handle(params->device)->device, params->pipelineCache, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroyPipelineCache(void *args)
{
    struct vkDestroyPipelineCache_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->pipelineCache), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyPipelineCache(wine_device_from_handle(params->device)->device, params->pipelineCache, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroyPipelineLayout(void *args)
{
    struct vkDestroyPipelineLayout_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->pipelineLayout), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyPipelineLayout(wine_device_from_handle(params->device)->device, params->pipelineLayout, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroyPipelineLayout(void *args)
{
    struct vkDestroyPipelineLayout_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->pipelineLayout), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyPipelineLayout(wine_device_from_handle(params->device)->device, params->pipelineLayout, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroyPrivateDataSlot(void *args)
{
    struct vkDestroyPrivateDataSlot_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->privateDataSlot), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyPrivateDataSlot(wine_device_from_handle(params->device)->device, params->privateDataSlot, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroyPrivateDataSlot(void *args)
{
    struct vkDestroyPrivateDataSlot_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->privateDataSlot), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyPrivateDataSlot(wine_device_from_handle(params->device)->device, params->privateDataSlot, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroyPrivateDataSlotEXT(void *args)
{
    struct vkDestroyPrivateDataSlotEXT_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->privateDataSlot), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyPrivateDataSlotEXT(wine_device_from_handle(params->device)->device, params->privateDataSlot, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroyPrivateDataSlotEXT(void *args)
{
    struct vkDestroyPrivateDataSlotEXT_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->privateDataSlot), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyPrivateDataSlotEXT(wine_device_from_handle(params->device)->device, params->privateDataSlot, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroyQueryPool(void *args)
{
    struct vkDestroyQueryPool_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->queryPool), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyQueryPool(wine_device_from_handle(params->device)->device, params->queryPool, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroyQueryPool(void *args)
{
    struct vkDestroyQueryPool_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->queryPool), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyQueryPool(wine_device_from_handle(params->device)->device, params->queryPool, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroyRenderPass(void *args)
{
    struct vkDestroyRenderPass_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->renderPass), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyRenderPass(wine_device_from_handle(params->device)->device, params->renderPass, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroyRenderPass(void *args)
{
    struct vkDestroyRenderPass_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->renderPass), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyRenderPass(wine_device_from_handle(params->device)->device, params->renderPass, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroySampler(void *args)
{
    struct vkDestroySampler_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->sampler), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroySampler(wine_device_from_handle(params->device)->device, params->sampler, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroySampler(void *args)
{
    struct vkDestroySampler_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->sampler), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroySampler(wine_device_from_handle(params->device)->device, params->sampler, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroySamplerYcbcrConversion(void *args)
{
    struct vkDestroySamplerYcbcrConversion_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->ycbcrConversion), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroySamplerYcbcrConversion(wine_device_from_handle(params->device)->device, params->ycbcrConversion, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroySamplerYcbcrConversion(void *args)
{
    struct vkDestroySamplerYcbcrConversion_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->ycbcrConversion), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroySamplerYcbcrConversion(wine_device_from_handle(params->device)->device, params->ycbcrConversion, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroySamplerYcbcrConversionKHR(void *args)
{
    struct vkDestroySamplerYcbcrConversionKHR_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->ycbcrConversion), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroySamplerYcbcrConversionKHR(wine_device_from_handle(params->device)->device, params->ycbcrConversion, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroySamplerYcbcrConversionKHR(void *args)
{
    struct vkDestroySamplerYcbcrConversionKHR_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->ycbcrConversion), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroySamplerYcbcrConversionKHR(wine_device_from_handle(params->device)->device, params->ycbcrConversion, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroySemaphore(void *args)
{
    struct vkDestroySemaphore_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->semaphore), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroySemaphore(wine_device_from_handle(params->device)->device, params->semaphore, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroySemaphore(void *args)
{
    struct vkDestroySemaphore_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->semaphore), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroySemaphore(wine_device_from_handle(params->device)->device, params->semaphore, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroyShaderModule(void *args)
{
    struct vkDestroyShaderModule_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->shaderModule), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyShaderModule(wine_device_from_handle(params->device)->device, params->shaderModule, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroyShaderModule(void *args)
{
    struct vkDestroyShaderModule_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->shaderModule), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyShaderModule(wine_device_from_handle(params->device)->device, params->shaderModule, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroySurfaceKHR(void *args)
{
    struct vkDestroySurfaceKHR_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->instance, wine_dbgstr_longlong(params->surface), params->pAllocator);

    wine_vkDestroySurfaceKHR(params->instance, params->surface, params->pAllocator);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroySurfaceKHR(void *args)
{
    struct vkDestroySurfaceKHR_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->instance, wine_dbgstr_longlong(params->surface), params->pAllocator);

    wine_vkDestroySurfaceKHR(params->instance, params->surface, params->pAllocator);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroySwapchainKHR(void *args)
{
    struct vkDestroySwapchainKHR_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->swapchain), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroySwapchainKHR(wine_device_from_handle(params->device)->device, params->swapchain, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroySwapchainKHR(void *args)
{
    struct vkDestroySwapchainKHR_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->swapchain), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroySwapchainKHR(wine_device_from_handle(params->device)->device, params->swapchain, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDestroyValidationCacheEXT(void *args)
{
    struct vkDestroyValidationCacheEXT_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->validationCache), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyValidationCacheEXT(wine_device_from_handle(params->device)->device, params->validationCache, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDestroyValidationCacheEXT(void *args)
{
    struct vkDestroyValidationCacheEXT_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->validationCache), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkDestroyValidationCacheEXT(wine_device_from_handle(params->device)->device, params->validationCache, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkDeviceWaitIdle(void *args)
{
    struct vkDeviceWaitIdle_params *params = args;

    TRACE("%p\n", params->device);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkDeviceWaitIdle(wine_device_from_handle(params->device)->device);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkDeviceWaitIdle(void *args)
{
    struct vkDeviceWaitIdle_params *params = args;

    TRACE("%p\n", params->device);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkDeviceWaitIdle(wine_device_from_handle(params->device)->device);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkEndCommandBuffer(void *args)
{
    struct vkEndCommandBuffer_params *params = args;

    TRACE("%p\n", params->commandBuffer);

    params->result = wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkEndCommandBuffer(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkEndCommandBuffer(void *args)
{
    struct vkEndCommandBuffer_params *params = args;

    TRACE("%p\n", params->commandBuffer);

    params->result = wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkEndCommandBuffer(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkEnumerateDeviceExtensionProperties(void *args)
{
    struct vkEnumerateDeviceExtensionProperties_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->physicalDevice, params->pLayerName, params->pPropertyCount, params->pProperties);

    params->result = wine_vkEnumerateDeviceExtensionProperties(params->physicalDevice, params->pLayerName, params->pPropertyCount, params->pProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkEnumerateDeviceExtensionProperties(void *args)
{
    struct vkEnumerateDeviceExtensionProperties_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->physicalDevice, params->pLayerName, params->pPropertyCount, params->pProperties);

    params->result = wine_vkEnumerateDeviceExtensionProperties(params->physicalDevice, params->pLayerName, params->pPropertyCount, params->pProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkEnumerateDeviceLayerProperties(void *args)
{
    struct vkEnumerateDeviceLayerProperties_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pPropertyCount, params->pProperties);

    params->result = wine_vkEnumerateDeviceLayerProperties(params->physicalDevice, params->pPropertyCount, params->pProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkEnumerateDeviceLayerProperties(void *args)
{
    struct vkEnumerateDeviceLayerProperties_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pPropertyCount, params->pProperties);

    params->result = wine_vkEnumerateDeviceLayerProperties(params->physicalDevice, params->pPropertyCount, params->pProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkEnumerateInstanceExtensionProperties(void *args)
{
    struct vkEnumerateInstanceExtensionProperties_params *params = args;

    TRACE("%p, %p, %p\n", params->pLayerName, params->pPropertyCount, params->pProperties);

    params->result = wine_vkEnumerateInstanceExtensionProperties(params->pLayerName, params->pPropertyCount, params->pProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkEnumerateInstanceExtensionProperties(void *args)
{
    struct vkEnumerateInstanceExtensionProperties_params *params = args;

    TRACE("%p, %p, %p\n", params->pLayerName, params->pPropertyCount, params->pProperties);

    params->result = wine_vkEnumerateInstanceExtensionProperties(params->pLayerName, params->pPropertyCount, params->pProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkEnumerateInstanceVersion(void *args)
{
    struct vkEnumerateInstanceVersion_params *params = args;

    TRACE("%p\n", params->pApiVersion);

    params->result = wine_vkEnumerateInstanceVersion(params->pApiVersion);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkEnumerateInstanceVersion(void *args)
{
    struct vkEnumerateInstanceVersion_params *params = args;

    TRACE("%p\n", params->pApiVersion);

    params->result = wine_vkEnumerateInstanceVersion(params->pApiVersion);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkEnumeratePhysicalDeviceGroups(void *args)
{
    struct vkEnumeratePhysicalDeviceGroups_params *params = args;

    TRACE("%p, %p, %p\n", params->instance, params->pPhysicalDeviceGroupCount, params->pPhysicalDeviceGroupProperties);

    params->result = wine_vkEnumeratePhysicalDeviceGroups(params->instance, params->pPhysicalDeviceGroupCount, params->pPhysicalDeviceGroupProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkEnumeratePhysicalDeviceGroups(void *args)
{
    struct vkEnumeratePhysicalDeviceGroups_params *params = args;

    TRACE("%p, %p, %p\n", params->instance, params->pPhysicalDeviceGroupCount, params->pPhysicalDeviceGroupProperties);

    params->result = wine_vkEnumeratePhysicalDeviceGroups(params->instance, params->pPhysicalDeviceGroupCount, params->pPhysicalDeviceGroupProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkEnumeratePhysicalDeviceGroupsKHR(void *args)
{
    struct vkEnumeratePhysicalDeviceGroupsKHR_params *params = args;

    TRACE("%p, %p, %p\n", params->instance, params->pPhysicalDeviceGroupCount, params->pPhysicalDeviceGroupProperties);

    params->result = wine_vkEnumeratePhysicalDeviceGroupsKHR(params->instance, params->pPhysicalDeviceGroupCount, params->pPhysicalDeviceGroupProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkEnumeratePhysicalDeviceGroupsKHR(void *args)
{
    struct vkEnumeratePhysicalDeviceGroupsKHR_params *params = args;

    TRACE("%p, %p, %p\n", params->instance, params->pPhysicalDeviceGroupCount, params->pPhysicalDeviceGroupProperties);

    params->result = wine_vkEnumeratePhysicalDeviceGroupsKHR(params->instance, params->pPhysicalDeviceGroupCount, params->pPhysicalDeviceGroupProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(void *args)
{
    struct vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR_params *params = args;

    TRACE("%p, %u, %p, %p, %p\n", params->physicalDevice, params->queueFamilyIndex, params->pCounterCount, params->pCounters, params->pCounterDescriptions);

    params->result = wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->queueFamilyIndex, params->pCounterCount, params->pCounters, params->pCounterDescriptions);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(void *args)
{
    struct vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR_params *params = args;

    TRACE("%p, %u, %p, %p, %p\n", params->physicalDevice, params->queueFamilyIndex, params->pCounterCount, params->pCounters, params->pCounterDescriptions);

    params->result = wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->queueFamilyIndex, params->pCounterCount, params->pCounters, params->pCounterDescriptions);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkEnumeratePhysicalDevices(void *args)
{
    struct vkEnumeratePhysicalDevices_params *params = args;

    TRACE("%p, %p, %p\n", params->instance, params->pPhysicalDeviceCount, params->pPhysicalDevices);

    params->result = wine_vkEnumeratePhysicalDevices(params->instance, params->pPhysicalDeviceCount, params->pPhysicalDevices);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkEnumeratePhysicalDevices(void *args)
{
    struct vkEnumeratePhysicalDevices_params *params = args;

    TRACE("%p, %p, %p\n", params->instance, params->pPhysicalDeviceCount, params->pPhysicalDevices);

    params->result = wine_vkEnumeratePhysicalDevices(params->instance, params->pPhysicalDeviceCount, params->pPhysicalDevices);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkFlushMappedMemoryRanges(void *args)
{
    struct vkFlushMappedMemoryRanges_params *params = args;

    TRACE("%p, %u, %p\n", params->device, params->memoryRangeCount, params->pMemoryRanges);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkFlushMappedMemoryRanges(wine_device_from_handle(params->device)->device, params->memoryRangeCount, params->pMemoryRanges);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkFlushMappedMemoryRanges(void *args)
{
    struct vkFlushMappedMemoryRanges_params *params = args;
    VkMappedMemoryRange_host *pMemoryRanges_host;
    struct conversion_context ctx;

    TRACE("%p, %u, %p\n", params->device, params->memoryRangeCount, params->pMemoryRanges);

    init_conversion_context(&ctx);
    pMemoryRanges_host = convert_VkMappedMemoryRange_array_win32_to_host(&ctx, params->pMemoryRanges, params->memoryRangeCount);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkFlushMappedMemoryRanges(wine_device_from_handle(params->device)->device, params->memoryRangeCount, pMemoryRanges_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkFreeCommandBuffers(void *args)
{
    struct vkFreeCommandBuffers_params *params = args;

    TRACE("%p, 0x%s, %u, %p\n", params->device, wine_dbgstr_longlong(params->commandPool), params->commandBufferCount, params->pCommandBuffers);

    wine_vkFreeCommandBuffers(params->device, params->commandPool, params->commandBufferCount, params->pCommandBuffers);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkFreeCommandBuffers(void *args)
{
    struct vkFreeCommandBuffers_params *params = args;

    TRACE("%p, 0x%s, %u, %p\n", params->device, wine_dbgstr_longlong(params->commandPool), params->commandBufferCount, params->pCommandBuffers);

    wine_vkFreeCommandBuffers(params->device, params->commandPool, params->commandBufferCount, params->pCommandBuffers);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkFreeDescriptorSets(void *args)
{
    struct vkFreeDescriptorSets_params *params = args;

    TRACE("%p, 0x%s, %u, %p\n", params->device, wine_dbgstr_longlong(params->descriptorPool), params->descriptorSetCount, params->pDescriptorSets);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkFreeDescriptorSets(wine_device_from_handle(params->device)->device, params->descriptorPool, params->descriptorSetCount, params->pDescriptorSets);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkFreeDescriptorSets(void *args)
{
    struct vkFreeDescriptorSets_params *params = args;

    TRACE("%p, 0x%s, %u, %p\n", params->device, wine_dbgstr_longlong(params->descriptorPool), params->descriptorSetCount, params->pDescriptorSets);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkFreeDescriptorSets(wine_device_from_handle(params->device)->device, params->descriptorPool, params->descriptorSetCount, params->pDescriptorSets);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkFreeMemory(void *args)
{
    struct vkFreeMemory_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->memory), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkFreeMemory(wine_device_from_handle(params->device)->device, params->memory, NULL);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkFreeMemory(void *args)
{
    struct vkFreeMemory_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->memory), params->pAllocator);

    wine_device_from_handle(params->device)->funcs.p_vkFreeMemory(wine_device_from_handle(params->device)->device, params->memory, NULL);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetAccelerationStructureBuildSizesKHR(void *args)
{
    struct vkGetAccelerationStructureBuildSizesKHR_params *params = args;

    TRACE("%p, %#x, %p, %p, %p\n", params->device, params->buildType, params->pBuildInfo, params->pMaxPrimitiveCounts, params->pSizeInfo);

    wine_device_from_handle(params->device)->funcs.p_vkGetAccelerationStructureBuildSizesKHR(wine_device_from_handle(params->device)->device, params->buildType, params->pBuildInfo, params->pMaxPrimitiveCounts, params->pSizeInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetAccelerationStructureBuildSizesKHR(void *args)
{
    struct vkGetAccelerationStructureBuildSizesKHR_params *params = args;
    VkAccelerationStructureBuildGeometryInfoKHR_host pBuildInfo_host;
    VkAccelerationStructureBuildSizesInfoKHR_host pSizeInfo_host;

    TRACE("%p, %#x, %p, %p, %p\n", params->device, params->buildType, params->pBuildInfo, params->pMaxPrimitiveCounts, params->pSizeInfo);

    convert_VkAccelerationStructureBuildGeometryInfoKHR_win32_to_host(params->pBuildInfo, &pBuildInfo_host);
    convert_VkAccelerationStructureBuildSizesInfoKHR_win32_to_host(params->pSizeInfo, &pSizeInfo_host);
    wine_device_from_handle(params->device)->funcs.p_vkGetAccelerationStructureBuildSizesKHR(wine_device_from_handle(params->device)->device, params->buildType, &pBuildInfo_host, params->pMaxPrimitiveCounts, &pSizeInfo_host);
    convert_VkAccelerationStructureBuildSizesInfoKHR_host_to_win32(&pSizeInfo_host, params->pSizeInfo);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetAccelerationStructureDeviceAddressKHR(void *args)
{
    struct vkGetAccelerationStructureDeviceAddressKHR_params *params = args;

    TRACE("%p, %p\n", params->device, params->pInfo);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetAccelerationStructureDeviceAddressKHR(wine_device_from_handle(params->device)->device, params->pInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetAccelerationStructureDeviceAddressKHR(void *args)
{
    struct vkGetAccelerationStructureDeviceAddressKHR_params *params = args;
    VkAccelerationStructureDeviceAddressInfoKHR_host pInfo_host;

    TRACE("%p, %p\n", params->device, params->pInfo);

    convert_VkAccelerationStructureDeviceAddressInfoKHR_win32_to_host(params->pInfo, &pInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetAccelerationStructureDeviceAddressKHR(wine_device_from_handle(params->device)->device, &pInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetAccelerationStructureHandleNV(void *args)
{
    struct vkGetAccelerationStructureHandleNV_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->accelerationStructure), wine_dbgstr_longlong(params->dataSize), params->pData);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetAccelerationStructureHandleNV(wine_device_from_handle(params->device)->device, params->accelerationStructure, params->dataSize, params->pData);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetAccelerationStructureHandleNV(void *args)
{
    struct vkGetAccelerationStructureHandleNV_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->accelerationStructure), wine_dbgstr_longlong(params->dataSize), params->pData);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetAccelerationStructureHandleNV(wine_device_from_handle(params->device)->device, params->accelerationStructure, params->dataSize, params->pData);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetAccelerationStructureMemoryRequirementsNV(void *args)
{
    struct vkGetAccelerationStructureMemoryRequirementsNV_params *params = args;

    TRACE("%p, %p, %p\n", params->device, params->pInfo, params->pMemoryRequirements);

    wine_device_from_handle(params->device)->funcs.p_vkGetAccelerationStructureMemoryRequirementsNV(wine_device_from_handle(params->device)->device, params->pInfo, params->pMemoryRequirements);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetAccelerationStructureMemoryRequirementsNV(void *args)
{
    struct vkGetAccelerationStructureMemoryRequirementsNV_params *params = args;
    VkAccelerationStructureMemoryRequirementsInfoNV_host pInfo_host;
    VkMemoryRequirements2KHR_host pMemoryRequirements_host;

    TRACE("%p, %p, %p\n", params->device, params->pInfo, params->pMemoryRequirements);

    convert_VkAccelerationStructureMemoryRequirementsInfoNV_win32_to_host(params->pInfo, &pInfo_host);
    convert_VkMemoryRequirements2KHR_win32_to_host(params->pMemoryRequirements, &pMemoryRequirements_host);
    wine_device_from_handle(params->device)->funcs.p_vkGetAccelerationStructureMemoryRequirementsNV(wine_device_from_handle(params->device)->device, &pInfo_host, &pMemoryRequirements_host);
    convert_VkMemoryRequirements2KHR_host_to_win32(&pMemoryRequirements_host, params->pMemoryRequirements);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetBufferDeviceAddress(void *args)
{
    struct vkGetBufferDeviceAddress_params *params = args;

    TRACE("%p, %p\n", params->device, params->pInfo);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetBufferDeviceAddress(wine_device_from_handle(params->device)->device, params->pInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetBufferDeviceAddress(void *args)
{
    struct vkGetBufferDeviceAddress_params *params = args;
    VkBufferDeviceAddressInfo_host pInfo_host;

    TRACE("%p, %p\n", params->device, params->pInfo);

    convert_VkBufferDeviceAddressInfo_win32_to_host(params->pInfo, &pInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetBufferDeviceAddress(wine_device_from_handle(params->device)->device, &pInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetBufferDeviceAddressEXT(void *args)
{
    struct vkGetBufferDeviceAddressEXT_params *params = args;

    TRACE("%p, %p\n", params->device, params->pInfo);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetBufferDeviceAddressEXT(wine_device_from_handle(params->device)->device, params->pInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetBufferDeviceAddressEXT(void *args)
{
    struct vkGetBufferDeviceAddressEXT_params *params = args;
    VkBufferDeviceAddressInfo_host pInfo_host;

    TRACE("%p, %p\n", params->device, params->pInfo);

    convert_VkBufferDeviceAddressInfo_win32_to_host(params->pInfo, &pInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetBufferDeviceAddressEXT(wine_device_from_handle(params->device)->device, &pInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetBufferDeviceAddressKHR(void *args)
{
    struct vkGetBufferDeviceAddressKHR_params *params = args;

    TRACE("%p, %p\n", params->device, params->pInfo);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetBufferDeviceAddressKHR(wine_device_from_handle(params->device)->device, params->pInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetBufferDeviceAddressKHR(void *args)
{
    struct vkGetBufferDeviceAddressKHR_params *params = args;
    VkBufferDeviceAddressInfo_host pInfo_host;

    TRACE("%p, %p\n", params->device, params->pInfo);

    convert_VkBufferDeviceAddressInfo_win32_to_host(params->pInfo, &pInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetBufferDeviceAddressKHR(wine_device_from_handle(params->device)->device, &pInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetBufferMemoryRequirements(void *args)
{
    struct vkGetBufferMemoryRequirements_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->buffer), params->pMemoryRequirements);

    wine_device_from_handle(params->device)->funcs.p_vkGetBufferMemoryRequirements(wine_device_from_handle(params->device)->device, params->buffer, params->pMemoryRequirements);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetBufferMemoryRequirements(void *args)
{
    struct vkGetBufferMemoryRequirements_params *params = args;
    VkMemoryRequirements_host pMemoryRequirements_host;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->buffer), params->pMemoryRequirements);

    wine_device_from_handle(params->device)->funcs.p_vkGetBufferMemoryRequirements(wine_device_from_handle(params->device)->device, params->buffer, &pMemoryRequirements_host);
    convert_VkMemoryRequirements_host_to_win32(&pMemoryRequirements_host, params->pMemoryRequirements);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetBufferMemoryRequirements2(void *args)
{
    struct vkGetBufferMemoryRequirements2_params *params = args;

    TRACE("%p, %p, %p\n", params->device, params->pInfo, params->pMemoryRequirements);

    wine_device_from_handle(params->device)->funcs.p_vkGetBufferMemoryRequirements2(wine_device_from_handle(params->device)->device, params->pInfo, params->pMemoryRequirements);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetBufferMemoryRequirements2(void *args)
{
    struct vkGetBufferMemoryRequirements2_params *params = args;
    VkBufferMemoryRequirementsInfo2_host pInfo_host;
    VkMemoryRequirements2_host pMemoryRequirements_host;

    TRACE("%p, %p, %p\n", params->device, params->pInfo, params->pMemoryRequirements);

    convert_VkBufferMemoryRequirementsInfo2_win32_to_host(params->pInfo, &pInfo_host);
    convert_VkMemoryRequirements2_win32_to_host(params->pMemoryRequirements, &pMemoryRequirements_host);
    wine_device_from_handle(params->device)->funcs.p_vkGetBufferMemoryRequirements2(wine_device_from_handle(params->device)->device, &pInfo_host, &pMemoryRequirements_host);
    convert_VkMemoryRequirements2_host_to_win32(&pMemoryRequirements_host, params->pMemoryRequirements);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetBufferMemoryRequirements2KHR(void *args)
{
    struct vkGetBufferMemoryRequirements2KHR_params *params = args;

    TRACE("%p, %p, %p\n", params->device, params->pInfo, params->pMemoryRequirements);

    wine_device_from_handle(params->device)->funcs.p_vkGetBufferMemoryRequirements2KHR(wine_device_from_handle(params->device)->device, params->pInfo, params->pMemoryRequirements);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetBufferMemoryRequirements2KHR(void *args)
{
    struct vkGetBufferMemoryRequirements2KHR_params *params = args;
    VkBufferMemoryRequirementsInfo2_host pInfo_host;
    VkMemoryRequirements2_host pMemoryRequirements_host;

    TRACE("%p, %p, %p\n", params->device, params->pInfo, params->pMemoryRequirements);

    convert_VkBufferMemoryRequirementsInfo2_win32_to_host(params->pInfo, &pInfo_host);
    convert_VkMemoryRequirements2_win32_to_host(params->pMemoryRequirements, &pMemoryRequirements_host);
    wine_device_from_handle(params->device)->funcs.p_vkGetBufferMemoryRequirements2KHR(wine_device_from_handle(params->device)->device, &pInfo_host, &pMemoryRequirements_host);
    convert_VkMemoryRequirements2_host_to_win32(&pMemoryRequirements_host, params->pMemoryRequirements);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetBufferOpaqueCaptureAddress(void *args)
{
    struct vkGetBufferOpaqueCaptureAddress_params *params = args;

    TRACE("%p, %p\n", params->device, params->pInfo);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetBufferOpaqueCaptureAddress(wine_device_from_handle(params->device)->device, params->pInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetBufferOpaqueCaptureAddress(void *args)
{
    struct vkGetBufferOpaqueCaptureAddress_params *params = args;
    VkBufferDeviceAddressInfo_host pInfo_host;

    TRACE("%p, %p\n", params->device, params->pInfo);

    convert_VkBufferDeviceAddressInfo_win32_to_host(params->pInfo, &pInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetBufferOpaqueCaptureAddress(wine_device_from_handle(params->device)->device, &pInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetBufferOpaqueCaptureAddressKHR(void *args)
{
    struct vkGetBufferOpaqueCaptureAddressKHR_params *params = args;

    TRACE("%p, %p\n", params->device, params->pInfo);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetBufferOpaqueCaptureAddressKHR(wine_device_from_handle(params->device)->device, params->pInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetBufferOpaqueCaptureAddressKHR(void *args)
{
    struct vkGetBufferOpaqueCaptureAddressKHR_params *params = args;
    VkBufferDeviceAddressInfo_host pInfo_host;

    TRACE("%p, %p\n", params->device, params->pInfo);

    convert_VkBufferDeviceAddressInfo_win32_to_host(params->pInfo, &pInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetBufferOpaqueCaptureAddressKHR(wine_device_from_handle(params->device)->device, &pInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetCalibratedTimestampsEXT(void *args)
{
    struct vkGetCalibratedTimestampsEXT_params *params = args;

    TRACE("%p, %u, %p, %p, %p\n", params->device, params->timestampCount, params->pTimestampInfos, params->pTimestamps, params->pMaxDeviation);

    params->result = wine_vkGetCalibratedTimestampsEXT(params->device, params->timestampCount, params->pTimestampInfos, params->pTimestamps, params->pMaxDeviation);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetCalibratedTimestampsEXT(void *args)
{
    struct vkGetCalibratedTimestampsEXT_params *params = args;

    TRACE("%p, %u, %p, %p, %p\n", params->device, params->timestampCount, params->pTimestampInfos, params->pTimestamps, params->pMaxDeviation);

    params->result = wine_vkGetCalibratedTimestampsEXT(params->device, params->timestampCount, params->pTimestampInfos, params->pTimestamps, params->pMaxDeviation);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetDeferredOperationMaxConcurrencyKHR(void *args)
{
    struct vkGetDeferredOperationMaxConcurrencyKHR_params *params = args;

    TRACE("%p, 0x%s\n", params->device, wine_dbgstr_longlong(params->operation));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetDeferredOperationMaxConcurrencyKHR(wine_device_from_handle(params->device)->device, params->operation);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetDeferredOperationMaxConcurrencyKHR(void *args)
{
    struct vkGetDeferredOperationMaxConcurrencyKHR_params *params = args;

    TRACE("%p, 0x%s\n", params->device, wine_dbgstr_longlong(params->operation));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetDeferredOperationMaxConcurrencyKHR(wine_device_from_handle(params->device)->device, params->operation);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetDeferredOperationResultKHR(void *args)
{
    struct vkGetDeferredOperationResultKHR_params *params = args;

    TRACE("%p, 0x%s\n", params->device, wine_dbgstr_longlong(params->operation));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetDeferredOperationResultKHR(wine_device_from_handle(params->device)->device, params->operation);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetDeferredOperationResultKHR(void *args)
{
    struct vkGetDeferredOperationResultKHR_params *params = args;

    TRACE("%p, 0x%s\n", params->device, wine_dbgstr_longlong(params->operation));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetDeferredOperationResultKHR(wine_device_from_handle(params->device)->device, params->operation);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetDescriptorSetHostMappingVALVE(void *args)
{
    struct vkGetDescriptorSetHostMappingVALVE_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->descriptorSet), params->ppData);

    wine_device_from_handle(params->device)->funcs.p_vkGetDescriptorSetHostMappingVALVE(wine_device_from_handle(params->device)->device, params->descriptorSet, params->ppData);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetDescriptorSetHostMappingVALVE(void *args)
{
    struct vkGetDescriptorSetHostMappingVALVE_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->descriptorSet), params->ppData);

    wine_device_from_handle(params->device)->funcs.p_vkGetDescriptorSetHostMappingVALVE(wine_device_from_handle(params->device)->device, params->descriptorSet, params->ppData);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetDescriptorSetLayoutHostMappingInfoVALVE(void *args)
{
    struct vkGetDescriptorSetLayoutHostMappingInfoVALVE_params *params = args;

    TRACE("%p, %p, %p\n", params->device, params->pBindingReference, params->pHostMapping);

    wine_device_from_handle(params->device)->funcs.p_vkGetDescriptorSetLayoutHostMappingInfoVALVE(wine_device_from_handle(params->device)->device, params->pBindingReference, params->pHostMapping);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetDescriptorSetLayoutHostMappingInfoVALVE(void *args)
{
    struct vkGetDescriptorSetLayoutHostMappingInfoVALVE_params *params = args;
    VkDescriptorSetBindingReferenceVALVE_host pBindingReference_host;

    TRACE("%p, %p, %p\n", params->device, params->pBindingReference, params->pHostMapping);

    convert_VkDescriptorSetBindingReferenceVALVE_win32_to_host(params->pBindingReference, &pBindingReference_host);
    wine_device_from_handle(params->device)->funcs.p_vkGetDescriptorSetLayoutHostMappingInfoVALVE(wine_device_from_handle(params->device)->device, &pBindingReference_host, params->pHostMapping);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetDescriptorSetLayoutSupport(void *args)
{
    struct vkGetDescriptorSetLayoutSupport_params *params = args;

    TRACE("%p, %p, %p\n", params->device, params->pCreateInfo, params->pSupport);

    wine_device_from_handle(params->device)->funcs.p_vkGetDescriptorSetLayoutSupport(wine_device_from_handle(params->device)->device, params->pCreateInfo, params->pSupport);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetDescriptorSetLayoutSupport(void *args)
{
    struct vkGetDescriptorSetLayoutSupport_params *params = args;

    TRACE("%p, %p, %p\n", params->device, params->pCreateInfo, params->pSupport);

    wine_device_from_handle(params->device)->funcs.p_vkGetDescriptorSetLayoutSupport(wine_device_from_handle(params->device)->device, params->pCreateInfo, params->pSupport);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetDescriptorSetLayoutSupportKHR(void *args)
{
    struct vkGetDescriptorSetLayoutSupportKHR_params *params = args;

    TRACE("%p, %p, %p\n", params->device, params->pCreateInfo, params->pSupport);

    wine_device_from_handle(params->device)->funcs.p_vkGetDescriptorSetLayoutSupportKHR(wine_device_from_handle(params->device)->device, params->pCreateInfo, params->pSupport);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetDescriptorSetLayoutSupportKHR(void *args)
{
    struct vkGetDescriptorSetLayoutSupportKHR_params *params = args;

    TRACE("%p, %p, %p\n", params->device, params->pCreateInfo, params->pSupport);

    wine_device_from_handle(params->device)->funcs.p_vkGetDescriptorSetLayoutSupportKHR(wine_device_from_handle(params->device)->device, params->pCreateInfo, params->pSupport);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetDeviceAccelerationStructureCompatibilityKHR(void *args)
{
    struct vkGetDeviceAccelerationStructureCompatibilityKHR_params *params = args;

    TRACE("%p, %p, %p\n", params->device, params->pVersionInfo, params->pCompatibility);

    wine_device_from_handle(params->device)->funcs.p_vkGetDeviceAccelerationStructureCompatibilityKHR(wine_device_from_handle(params->device)->device, params->pVersionInfo, params->pCompatibility);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetDeviceAccelerationStructureCompatibilityKHR(void *args)
{
    struct vkGetDeviceAccelerationStructureCompatibilityKHR_params *params = args;

    TRACE("%p, %p, %p\n", params->device, params->pVersionInfo, params->pCompatibility);

    wine_device_from_handle(params->device)->funcs.p_vkGetDeviceAccelerationStructureCompatibilityKHR(wine_device_from_handle(params->device)->device, params->pVersionInfo, params->pCompatibility);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetDeviceBufferMemoryRequirements(void *args)
{
    struct vkGetDeviceBufferMemoryRequirements_params *params = args;

    TRACE("%p, %p, %p\n", params->device, params->pInfo, params->pMemoryRequirements);

    wine_device_from_handle(params->device)->funcs.p_vkGetDeviceBufferMemoryRequirements(wine_device_from_handle(params->device)->device, params->pInfo, params->pMemoryRequirements);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetDeviceBufferMemoryRequirements(void *args)
{
    struct vkGetDeviceBufferMemoryRequirements_params *params = args;
    VkDeviceBufferMemoryRequirements_host pInfo_host;
    VkMemoryRequirements2_host pMemoryRequirements_host;
    struct conversion_context ctx;

    TRACE("%p, %p, %p\n", params->device, params->pInfo, params->pMemoryRequirements);

    init_conversion_context(&ctx);
    convert_VkDeviceBufferMemoryRequirements_win32_to_host(&ctx, params->pInfo, &pInfo_host);
    convert_VkMemoryRequirements2_win32_to_host(params->pMemoryRequirements, &pMemoryRequirements_host);
    wine_device_from_handle(params->device)->funcs.p_vkGetDeviceBufferMemoryRequirements(wine_device_from_handle(params->device)->device, &pInfo_host, &pMemoryRequirements_host);
    convert_VkMemoryRequirements2_host_to_win32(&pMemoryRequirements_host, params->pMemoryRequirements);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetDeviceBufferMemoryRequirementsKHR(void *args)
{
    struct vkGetDeviceBufferMemoryRequirementsKHR_params *params = args;

    TRACE("%p, %p, %p\n", params->device, params->pInfo, params->pMemoryRequirements);

    wine_device_from_handle(params->device)->funcs.p_vkGetDeviceBufferMemoryRequirementsKHR(wine_device_from_handle(params->device)->device, params->pInfo, params->pMemoryRequirements);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetDeviceBufferMemoryRequirementsKHR(void *args)
{
    struct vkGetDeviceBufferMemoryRequirementsKHR_params *params = args;
    VkDeviceBufferMemoryRequirements_host pInfo_host;
    VkMemoryRequirements2_host pMemoryRequirements_host;
    struct conversion_context ctx;

    TRACE("%p, %p, %p\n", params->device, params->pInfo, params->pMemoryRequirements);

    init_conversion_context(&ctx);
    convert_VkDeviceBufferMemoryRequirements_win32_to_host(&ctx, params->pInfo, &pInfo_host);
    convert_VkMemoryRequirements2_win32_to_host(params->pMemoryRequirements, &pMemoryRequirements_host);
    wine_device_from_handle(params->device)->funcs.p_vkGetDeviceBufferMemoryRequirementsKHR(wine_device_from_handle(params->device)->device, &pInfo_host, &pMemoryRequirements_host);
    convert_VkMemoryRequirements2_host_to_win32(&pMemoryRequirements_host, params->pMemoryRequirements);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetDeviceFaultInfoEXT(void *args)
{
    struct vkGetDeviceFaultInfoEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->device, params->pFaultCounts, params->pFaultInfo);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetDeviceFaultInfoEXT(wine_device_from_handle(params->device)->device, params->pFaultCounts, params->pFaultInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetDeviceFaultInfoEXT(void *args)
{
    struct vkGetDeviceFaultInfoEXT_params *params = args;
    VkDeviceFaultCountsEXT_host pFaultCounts_host;
    VkDeviceFaultInfoEXT_host pFaultInfo_host;
    struct conversion_context ctx;

    TRACE("%p, %p, %p\n", params->device, params->pFaultCounts, params->pFaultInfo);

    init_conversion_context(&ctx);
    convert_VkDeviceFaultCountsEXT_win32_to_host(params->pFaultCounts, &pFaultCounts_host);
    convert_VkDeviceFaultInfoEXT_win32_to_host(&ctx, params->pFaultInfo, &pFaultInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetDeviceFaultInfoEXT(wine_device_from_handle(params->device)->device, &pFaultCounts_host, &pFaultInfo_host);
    convert_VkDeviceFaultCountsEXT_host_to_win32(&pFaultCounts_host, params->pFaultCounts);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetDeviceGroupPeerMemoryFeatures(void *args)
{
    struct vkGetDeviceGroupPeerMemoryFeatures_params *params = args;

    TRACE("%p, %u, %u, %u, %p\n", params->device, params->heapIndex, params->localDeviceIndex, params->remoteDeviceIndex, params->pPeerMemoryFeatures);

    wine_device_from_handle(params->device)->funcs.p_vkGetDeviceGroupPeerMemoryFeatures(wine_device_from_handle(params->device)->device, params->heapIndex, params->localDeviceIndex, params->remoteDeviceIndex, params->pPeerMemoryFeatures);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetDeviceGroupPeerMemoryFeatures(void *args)
{
    struct vkGetDeviceGroupPeerMemoryFeatures_params *params = args;

    TRACE("%p, %u, %u, %u, %p\n", params->device, params->heapIndex, params->localDeviceIndex, params->remoteDeviceIndex, params->pPeerMemoryFeatures);

    wine_device_from_handle(params->device)->funcs.p_vkGetDeviceGroupPeerMemoryFeatures(wine_device_from_handle(params->device)->device, params->heapIndex, params->localDeviceIndex, params->remoteDeviceIndex, params->pPeerMemoryFeatures);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetDeviceGroupPeerMemoryFeaturesKHR(void *args)
{
    struct vkGetDeviceGroupPeerMemoryFeaturesKHR_params *params = args;

    TRACE("%p, %u, %u, %u, %p\n", params->device, params->heapIndex, params->localDeviceIndex, params->remoteDeviceIndex, params->pPeerMemoryFeatures);

    wine_device_from_handle(params->device)->funcs.p_vkGetDeviceGroupPeerMemoryFeaturesKHR(wine_device_from_handle(params->device)->device, params->heapIndex, params->localDeviceIndex, params->remoteDeviceIndex, params->pPeerMemoryFeatures);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetDeviceGroupPeerMemoryFeaturesKHR(void *args)
{
    struct vkGetDeviceGroupPeerMemoryFeaturesKHR_params *params = args;

    TRACE("%p, %u, %u, %u, %p\n", params->device, params->heapIndex, params->localDeviceIndex, params->remoteDeviceIndex, params->pPeerMemoryFeatures);

    wine_device_from_handle(params->device)->funcs.p_vkGetDeviceGroupPeerMemoryFeaturesKHR(wine_device_from_handle(params->device)->device, params->heapIndex, params->localDeviceIndex, params->remoteDeviceIndex, params->pPeerMemoryFeatures);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetDeviceGroupPresentCapabilitiesKHR(void *args)
{
    struct vkGetDeviceGroupPresentCapabilitiesKHR_params *params = args;

    TRACE("%p, %p\n", params->device, params->pDeviceGroupPresentCapabilities);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetDeviceGroupPresentCapabilitiesKHR(wine_device_from_handle(params->device)->device, params->pDeviceGroupPresentCapabilities);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetDeviceGroupPresentCapabilitiesKHR(void *args)
{
    struct vkGetDeviceGroupPresentCapabilitiesKHR_params *params = args;

    TRACE("%p, %p\n", params->device, params->pDeviceGroupPresentCapabilities);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetDeviceGroupPresentCapabilitiesKHR(wine_device_from_handle(params->device)->device, params->pDeviceGroupPresentCapabilities);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetDeviceGroupSurfacePresentModesKHR(void *args)
{
    struct vkGetDeviceGroupSurfacePresentModesKHR_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->surface), params->pModes);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetDeviceGroupSurfacePresentModesKHR(wine_device_from_handle(params->device)->device, wine_surface_from_handle(params->surface)->driver_surface, params->pModes);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetDeviceGroupSurfacePresentModesKHR(void *args)
{
    struct vkGetDeviceGroupSurfacePresentModesKHR_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->surface), params->pModes);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetDeviceGroupSurfacePresentModesKHR(wine_device_from_handle(params->device)->device, wine_surface_from_handle(params->surface)->driver_surface, params->pModes);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetDeviceImageMemoryRequirements(void *args)
{
    struct vkGetDeviceImageMemoryRequirements_params *params = args;

    TRACE("%p, %p, %p\n", params->device, params->pInfo, params->pMemoryRequirements);

    wine_device_from_handle(params->device)->funcs.p_vkGetDeviceImageMemoryRequirements(wine_device_from_handle(params->device)->device, params->pInfo, params->pMemoryRequirements);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetDeviceImageMemoryRequirements(void *args)
{
    struct vkGetDeviceImageMemoryRequirements_params *params = args;
    VkMemoryRequirements2_host pMemoryRequirements_host;

    TRACE("%p, %p, %p\n", params->device, params->pInfo, params->pMemoryRequirements);

    convert_VkMemoryRequirements2_win32_to_host(params->pMemoryRequirements, &pMemoryRequirements_host);
    wine_device_from_handle(params->device)->funcs.p_vkGetDeviceImageMemoryRequirements(wine_device_from_handle(params->device)->device, params->pInfo, &pMemoryRequirements_host);
    convert_VkMemoryRequirements2_host_to_win32(&pMemoryRequirements_host, params->pMemoryRequirements);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetDeviceImageMemoryRequirementsKHR(void *args)
{
    struct vkGetDeviceImageMemoryRequirementsKHR_params *params = args;

    TRACE("%p, %p, %p\n", params->device, params->pInfo, params->pMemoryRequirements);

    wine_device_from_handle(params->device)->funcs.p_vkGetDeviceImageMemoryRequirementsKHR(wine_device_from_handle(params->device)->device, params->pInfo, params->pMemoryRequirements);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetDeviceImageMemoryRequirementsKHR(void *args)
{
    struct vkGetDeviceImageMemoryRequirementsKHR_params *params = args;
    VkMemoryRequirements2_host pMemoryRequirements_host;

    TRACE("%p, %p, %p\n", params->device, params->pInfo, params->pMemoryRequirements);

    convert_VkMemoryRequirements2_win32_to_host(params->pMemoryRequirements, &pMemoryRequirements_host);
    wine_device_from_handle(params->device)->funcs.p_vkGetDeviceImageMemoryRequirementsKHR(wine_device_from_handle(params->device)->device, params->pInfo, &pMemoryRequirements_host);
    convert_VkMemoryRequirements2_host_to_win32(&pMemoryRequirements_host, params->pMemoryRequirements);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetDeviceImageSparseMemoryRequirements(void *args)
{
    struct vkGetDeviceImageSparseMemoryRequirements_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pInfo, params->pSparseMemoryRequirementCount, params->pSparseMemoryRequirements);

    wine_device_from_handle(params->device)->funcs.p_vkGetDeviceImageSparseMemoryRequirements(wine_device_from_handle(params->device)->device, params->pInfo, params->pSparseMemoryRequirementCount, params->pSparseMemoryRequirements);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetDeviceImageSparseMemoryRequirements(void *args)
{
    struct vkGetDeviceImageSparseMemoryRequirements_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pInfo, params->pSparseMemoryRequirementCount, params->pSparseMemoryRequirements);

    wine_device_from_handle(params->device)->funcs.p_vkGetDeviceImageSparseMemoryRequirements(wine_device_from_handle(params->device)->device, params->pInfo, params->pSparseMemoryRequirementCount, params->pSparseMemoryRequirements);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetDeviceImageSparseMemoryRequirementsKHR(void *args)
{
    struct vkGetDeviceImageSparseMemoryRequirementsKHR_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pInfo, params->pSparseMemoryRequirementCount, params->pSparseMemoryRequirements);

    wine_device_from_handle(params->device)->funcs.p_vkGetDeviceImageSparseMemoryRequirementsKHR(wine_device_from_handle(params->device)->device, params->pInfo, params->pSparseMemoryRequirementCount, params->pSparseMemoryRequirements);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetDeviceImageSparseMemoryRequirementsKHR(void *args)
{
    struct vkGetDeviceImageSparseMemoryRequirementsKHR_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pInfo, params->pSparseMemoryRequirementCount, params->pSparseMemoryRequirements);

    wine_device_from_handle(params->device)->funcs.p_vkGetDeviceImageSparseMemoryRequirementsKHR(wine_device_from_handle(params->device)->device, params->pInfo, params->pSparseMemoryRequirementCount, params->pSparseMemoryRequirements);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetDeviceMemoryCommitment(void *args)
{
    struct vkGetDeviceMemoryCommitment_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->memory), params->pCommittedMemoryInBytes);

    wine_device_from_handle(params->device)->funcs.p_vkGetDeviceMemoryCommitment(wine_device_from_handle(params->device)->device, params->memory, params->pCommittedMemoryInBytes);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetDeviceMemoryCommitment(void *args)
{
    struct vkGetDeviceMemoryCommitment_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->memory), params->pCommittedMemoryInBytes);

    wine_device_from_handle(params->device)->funcs.p_vkGetDeviceMemoryCommitment(wine_device_from_handle(params->device)->device, params->memory, params->pCommittedMemoryInBytes);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetDeviceMemoryOpaqueCaptureAddress(void *args)
{
    struct vkGetDeviceMemoryOpaqueCaptureAddress_params *params = args;

    TRACE("%p, %p\n", params->device, params->pInfo);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetDeviceMemoryOpaqueCaptureAddress(wine_device_from_handle(params->device)->device, params->pInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetDeviceMemoryOpaqueCaptureAddress(void *args)
{
    struct vkGetDeviceMemoryOpaqueCaptureAddress_params *params = args;
    VkDeviceMemoryOpaqueCaptureAddressInfo_host pInfo_host;

    TRACE("%p, %p\n", params->device, params->pInfo);

    convert_VkDeviceMemoryOpaqueCaptureAddressInfo_win32_to_host(params->pInfo, &pInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetDeviceMemoryOpaqueCaptureAddress(wine_device_from_handle(params->device)->device, &pInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetDeviceMemoryOpaqueCaptureAddressKHR(void *args)
{
    struct vkGetDeviceMemoryOpaqueCaptureAddressKHR_params *params = args;

    TRACE("%p, %p\n", params->device, params->pInfo);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetDeviceMemoryOpaqueCaptureAddressKHR(wine_device_from_handle(params->device)->device, params->pInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetDeviceMemoryOpaqueCaptureAddressKHR(void *args)
{
    struct vkGetDeviceMemoryOpaqueCaptureAddressKHR_params *params = args;
    VkDeviceMemoryOpaqueCaptureAddressInfo_host pInfo_host;

    TRACE("%p, %p\n", params->device, params->pInfo);

    convert_VkDeviceMemoryOpaqueCaptureAddressInfo_win32_to_host(params->pInfo, &pInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetDeviceMemoryOpaqueCaptureAddressKHR(wine_device_from_handle(params->device)->device, &pInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetDeviceMicromapCompatibilityEXT(void *args)
{
    struct vkGetDeviceMicromapCompatibilityEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->device, params->pVersionInfo, params->pCompatibility);

    wine_device_from_handle(params->device)->funcs.p_vkGetDeviceMicromapCompatibilityEXT(wine_device_from_handle(params->device)->device, params->pVersionInfo, params->pCompatibility);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetDeviceMicromapCompatibilityEXT(void *args)
{
    struct vkGetDeviceMicromapCompatibilityEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->device, params->pVersionInfo, params->pCompatibility);

    wine_device_from_handle(params->device)->funcs.p_vkGetDeviceMicromapCompatibilityEXT(wine_device_from_handle(params->device)->device, params->pVersionInfo, params->pCompatibility);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetDeviceQueue(void *args)
{
    struct vkGetDeviceQueue_params *params = args;

    TRACE("%p, %u, %u, %p\n", params->device, params->queueFamilyIndex, params->queueIndex, params->pQueue);

    wine_vkGetDeviceQueue(params->device, params->queueFamilyIndex, params->queueIndex, params->pQueue);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetDeviceQueue(void *args)
{
    struct vkGetDeviceQueue_params *params = args;

    TRACE("%p, %u, %u, %p\n", params->device, params->queueFamilyIndex, params->queueIndex, params->pQueue);

    wine_vkGetDeviceQueue(params->device, params->queueFamilyIndex, params->queueIndex, params->pQueue);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetDeviceQueue2(void *args)
{
    struct vkGetDeviceQueue2_params *params = args;

    TRACE("%p, %p, %p\n", params->device, params->pQueueInfo, params->pQueue);

    wine_vkGetDeviceQueue2(params->device, params->pQueueInfo, params->pQueue);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetDeviceQueue2(void *args)
{
    struct vkGetDeviceQueue2_params *params = args;

    TRACE("%p, %p, %p\n", params->device, params->pQueueInfo, params->pQueue);

    wine_vkGetDeviceQueue2(params->device, params->pQueueInfo, params->pQueue);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI(void *args)
{
    struct vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->renderpass), params->pMaxWorkgroupSize);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI(wine_device_from_handle(params->device)->device, params->renderpass, params->pMaxWorkgroupSize);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI(void *args)
{
    struct vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->renderpass), params->pMaxWorkgroupSize);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI(wine_device_from_handle(params->device)->device, params->renderpass, params->pMaxWorkgroupSize);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetDynamicRenderingTilePropertiesQCOM(void *args)
{
    struct vkGetDynamicRenderingTilePropertiesQCOM_params *params = args;

    TRACE("%p, %p, %p\n", params->device, params->pRenderingInfo, params->pProperties);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetDynamicRenderingTilePropertiesQCOM(wine_device_from_handle(params->device)->device, params->pRenderingInfo, params->pProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetDynamicRenderingTilePropertiesQCOM(void *args)
{
    struct vkGetDynamicRenderingTilePropertiesQCOM_params *params = args;
    VkRenderingInfo_host pRenderingInfo_host;
    struct conversion_context ctx;

    TRACE("%p, %p, %p\n", params->device, params->pRenderingInfo, params->pProperties);

    init_conversion_context(&ctx);
    convert_VkRenderingInfo_win32_to_host(&ctx, params->pRenderingInfo, &pRenderingInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetDynamicRenderingTilePropertiesQCOM(wine_device_from_handle(params->device)->device, &pRenderingInfo_host, params->pProperties);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetEventStatus(void *args)
{
    struct vkGetEventStatus_params *params = args;

    TRACE("%p, 0x%s\n", params->device, wine_dbgstr_longlong(params->event));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetEventStatus(wine_device_from_handle(params->device)->device, params->event);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetEventStatus(void *args)
{
    struct vkGetEventStatus_params *params = args;

    TRACE("%p, 0x%s\n", params->device, wine_dbgstr_longlong(params->event));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetEventStatus(wine_device_from_handle(params->device)->device, params->event);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetFenceStatus(void *args)
{
    struct vkGetFenceStatus_params *params = args;

    TRACE("%p, 0x%s\n", params->device, wine_dbgstr_longlong(params->fence));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetFenceStatus(wine_device_from_handle(params->device)->device, params->fence);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetFenceStatus(void *args)
{
    struct vkGetFenceStatus_params *params = args;

    TRACE("%p, 0x%s\n", params->device, wine_dbgstr_longlong(params->fence));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetFenceStatus(wine_device_from_handle(params->device)->device, params->fence);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetFramebufferTilePropertiesQCOM(void *args)
{
    struct vkGetFramebufferTilePropertiesQCOM_params *params = args;

    TRACE("%p, 0x%s, %p, %p\n", params->device, wine_dbgstr_longlong(params->framebuffer), params->pPropertiesCount, params->pProperties);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetFramebufferTilePropertiesQCOM(wine_device_from_handle(params->device)->device, params->framebuffer, params->pPropertiesCount, params->pProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetFramebufferTilePropertiesQCOM(void *args)
{
    struct vkGetFramebufferTilePropertiesQCOM_params *params = args;

    TRACE("%p, 0x%s, %p, %p\n", params->device, wine_dbgstr_longlong(params->framebuffer), params->pPropertiesCount, params->pProperties);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetFramebufferTilePropertiesQCOM(wine_device_from_handle(params->device)->device, params->framebuffer, params->pPropertiesCount, params->pProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetGeneratedCommandsMemoryRequirementsNV(void *args)
{
    struct vkGetGeneratedCommandsMemoryRequirementsNV_params *params = args;

    TRACE("%p, %p, %p\n", params->device, params->pInfo, params->pMemoryRequirements);

    wine_device_from_handle(params->device)->funcs.p_vkGetGeneratedCommandsMemoryRequirementsNV(wine_device_from_handle(params->device)->device, params->pInfo, params->pMemoryRequirements);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetGeneratedCommandsMemoryRequirementsNV(void *args)
{
    struct vkGetGeneratedCommandsMemoryRequirementsNV_params *params = args;
    VkGeneratedCommandsMemoryRequirementsInfoNV_host pInfo_host;
    VkMemoryRequirements2_host pMemoryRequirements_host;

    TRACE("%p, %p, %p\n", params->device, params->pInfo, params->pMemoryRequirements);

    convert_VkGeneratedCommandsMemoryRequirementsInfoNV_win32_to_host(params->pInfo, &pInfo_host);
    convert_VkMemoryRequirements2_win32_to_host(params->pMemoryRequirements, &pMemoryRequirements_host);
    wine_device_from_handle(params->device)->funcs.p_vkGetGeneratedCommandsMemoryRequirementsNV(wine_device_from_handle(params->device)->device, &pInfo_host, &pMemoryRequirements_host);
    convert_VkMemoryRequirements2_host_to_win32(&pMemoryRequirements_host, params->pMemoryRequirements);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetImageMemoryRequirements(void *args)
{
    struct vkGetImageMemoryRequirements_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->image), params->pMemoryRequirements);

    wine_device_from_handle(params->device)->funcs.p_vkGetImageMemoryRequirements(wine_device_from_handle(params->device)->device, params->image, params->pMemoryRequirements);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetImageMemoryRequirements(void *args)
{
    struct vkGetImageMemoryRequirements_params *params = args;
    VkMemoryRequirements_host pMemoryRequirements_host;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->image), params->pMemoryRequirements);

    wine_device_from_handle(params->device)->funcs.p_vkGetImageMemoryRequirements(wine_device_from_handle(params->device)->device, params->image, &pMemoryRequirements_host);
    convert_VkMemoryRequirements_host_to_win32(&pMemoryRequirements_host, params->pMemoryRequirements);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetImageMemoryRequirements2(void *args)
{
    struct vkGetImageMemoryRequirements2_params *params = args;

    TRACE("%p, %p, %p\n", params->device, params->pInfo, params->pMemoryRequirements);

    wine_device_from_handle(params->device)->funcs.p_vkGetImageMemoryRequirements2(wine_device_from_handle(params->device)->device, params->pInfo, params->pMemoryRequirements);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetImageMemoryRequirements2(void *args)
{
    struct vkGetImageMemoryRequirements2_params *params = args;
    VkImageMemoryRequirementsInfo2_host pInfo_host;
    VkMemoryRequirements2_host pMemoryRequirements_host;

    TRACE("%p, %p, %p\n", params->device, params->pInfo, params->pMemoryRequirements);

    convert_VkImageMemoryRequirementsInfo2_win32_to_host(params->pInfo, &pInfo_host);
    convert_VkMemoryRequirements2_win32_to_host(params->pMemoryRequirements, &pMemoryRequirements_host);
    wine_device_from_handle(params->device)->funcs.p_vkGetImageMemoryRequirements2(wine_device_from_handle(params->device)->device, &pInfo_host, &pMemoryRequirements_host);
    convert_VkMemoryRequirements2_host_to_win32(&pMemoryRequirements_host, params->pMemoryRequirements);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetImageMemoryRequirements2KHR(void *args)
{
    struct vkGetImageMemoryRequirements2KHR_params *params = args;

    TRACE("%p, %p, %p\n", params->device, params->pInfo, params->pMemoryRequirements);

    wine_device_from_handle(params->device)->funcs.p_vkGetImageMemoryRequirements2KHR(wine_device_from_handle(params->device)->device, params->pInfo, params->pMemoryRequirements);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetImageMemoryRequirements2KHR(void *args)
{
    struct vkGetImageMemoryRequirements2KHR_params *params = args;
    VkImageMemoryRequirementsInfo2_host pInfo_host;
    VkMemoryRequirements2_host pMemoryRequirements_host;

    TRACE("%p, %p, %p\n", params->device, params->pInfo, params->pMemoryRequirements);

    convert_VkImageMemoryRequirementsInfo2_win32_to_host(params->pInfo, &pInfo_host);
    convert_VkMemoryRequirements2_win32_to_host(params->pMemoryRequirements, &pMemoryRequirements_host);
    wine_device_from_handle(params->device)->funcs.p_vkGetImageMemoryRequirements2KHR(wine_device_from_handle(params->device)->device, &pInfo_host, &pMemoryRequirements_host);
    convert_VkMemoryRequirements2_host_to_win32(&pMemoryRequirements_host, params->pMemoryRequirements);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetImageSparseMemoryRequirements(void *args)
{
    struct vkGetImageSparseMemoryRequirements_params *params = args;

    TRACE("%p, 0x%s, %p, %p\n", params->device, wine_dbgstr_longlong(params->image), params->pSparseMemoryRequirementCount, params->pSparseMemoryRequirements);

    wine_device_from_handle(params->device)->funcs.p_vkGetImageSparseMemoryRequirements(wine_device_from_handle(params->device)->device, params->image, params->pSparseMemoryRequirementCount, params->pSparseMemoryRequirements);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetImageSparseMemoryRequirements(void *args)
{
    struct vkGetImageSparseMemoryRequirements_params *params = args;

    TRACE("%p, 0x%s, %p, %p\n", params->device, wine_dbgstr_longlong(params->image), params->pSparseMemoryRequirementCount, params->pSparseMemoryRequirements);

    wine_device_from_handle(params->device)->funcs.p_vkGetImageSparseMemoryRequirements(wine_device_from_handle(params->device)->device, params->image, params->pSparseMemoryRequirementCount, params->pSparseMemoryRequirements);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetImageSparseMemoryRequirements2(void *args)
{
    struct vkGetImageSparseMemoryRequirements2_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pInfo, params->pSparseMemoryRequirementCount, params->pSparseMemoryRequirements);

    wine_device_from_handle(params->device)->funcs.p_vkGetImageSparseMemoryRequirements2(wine_device_from_handle(params->device)->device, params->pInfo, params->pSparseMemoryRequirementCount, params->pSparseMemoryRequirements);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetImageSparseMemoryRequirements2(void *args)
{
    struct vkGetImageSparseMemoryRequirements2_params *params = args;
    VkImageSparseMemoryRequirementsInfo2_host pInfo_host;

    TRACE("%p, %p, %p, %p\n", params->device, params->pInfo, params->pSparseMemoryRequirementCount, params->pSparseMemoryRequirements);

    convert_VkImageSparseMemoryRequirementsInfo2_win32_to_host(params->pInfo, &pInfo_host);
    wine_device_from_handle(params->device)->funcs.p_vkGetImageSparseMemoryRequirements2(wine_device_from_handle(params->device)->device, &pInfo_host, params->pSparseMemoryRequirementCount, params->pSparseMemoryRequirements);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetImageSparseMemoryRequirements2KHR(void *args)
{
    struct vkGetImageSparseMemoryRequirements2KHR_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pInfo, params->pSparseMemoryRequirementCount, params->pSparseMemoryRequirements);

    wine_device_from_handle(params->device)->funcs.p_vkGetImageSparseMemoryRequirements2KHR(wine_device_from_handle(params->device)->device, params->pInfo, params->pSparseMemoryRequirementCount, params->pSparseMemoryRequirements);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetImageSparseMemoryRequirements2KHR(void *args)
{
    struct vkGetImageSparseMemoryRequirements2KHR_params *params = args;
    VkImageSparseMemoryRequirementsInfo2_host pInfo_host;

    TRACE("%p, %p, %p, %p\n", params->device, params->pInfo, params->pSparseMemoryRequirementCount, params->pSparseMemoryRequirements);

    convert_VkImageSparseMemoryRequirementsInfo2_win32_to_host(params->pInfo, &pInfo_host);
    wine_device_from_handle(params->device)->funcs.p_vkGetImageSparseMemoryRequirements2KHR(wine_device_from_handle(params->device)->device, &pInfo_host, params->pSparseMemoryRequirementCount, params->pSparseMemoryRequirements);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetImageSubresourceLayout(void *args)
{
    struct vkGetImageSubresourceLayout_params *params = args;

    TRACE("%p, 0x%s, %p, %p\n", params->device, wine_dbgstr_longlong(params->image), params->pSubresource, params->pLayout);

    wine_device_from_handle(params->device)->funcs.p_vkGetImageSubresourceLayout(wine_device_from_handle(params->device)->device, params->image, params->pSubresource, params->pLayout);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetImageSubresourceLayout(void *args)
{
    struct vkGetImageSubresourceLayout_params *params = args;
    VkSubresourceLayout_host pLayout_host;

    TRACE("%p, 0x%s, %p, %p\n", params->device, wine_dbgstr_longlong(params->image), params->pSubresource, params->pLayout);

    wine_device_from_handle(params->device)->funcs.p_vkGetImageSubresourceLayout(wine_device_from_handle(params->device)->device, params->image, params->pSubresource, &pLayout_host);
    convert_VkSubresourceLayout_host_to_win32(&pLayout_host, params->pLayout);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetImageSubresourceLayout2EXT(void *args)
{
    struct vkGetImageSubresourceLayout2EXT_params *params = args;

    TRACE("%p, 0x%s, %p, %p\n", params->device, wine_dbgstr_longlong(params->image), params->pSubresource, params->pLayout);

    wine_device_from_handle(params->device)->funcs.p_vkGetImageSubresourceLayout2EXT(wine_device_from_handle(params->device)->device, params->image, params->pSubresource, params->pLayout);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetImageSubresourceLayout2EXT(void *args)
{
    struct vkGetImageSubresourceLayout2EXT_params *params = args;
    VkSubresourceLayout2EXT_host pLayout_host;

    TRACE("%p, 0x%s, %p, %p\n", params->device, wine_dbgstr_longlong(params->image), params->pSubresource, params->pLayout);

    convert_VkSubresourceLayout2EXT_win32_to_host(params->pLayout, &pLayout_host);
    wine_device_from_handle(params->device)->funcs.p_vkGetImageSubresourceLayout2EXT(wine_device_from_handle(params->device)->device, params->image, params->pSubresource, &pLayout_host);
    convert_VkSubresourceLayout2EXT_host_to_win32(&pLayout_host, params->pLayout);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetImageViewAddressNVX(void *args)
{
    struct vkGetImageViewAddressNVX_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->imageView), params->pProperties);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetImageViewAddressNVX(wine_device_from_handle(params->device)->device, params->imageView, params->pProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetImageViewAddressNVX(void *args)
{
    struct vkGetImageViewAddressNVX_params *params = args;
    VkImageViewAddressPropertiesNVX_host pProperties_host;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->imageView), params->pProperties);

    convert_VkImageViewAddressPropertiesNVX_win32_to_host(params->pProperties, &pProperties_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetImageViewAddressNVX(wine_device_from_handle(params->device)->device, params->imageView, &pProperties_host);
    convert_VkImageViewAddressPropertiesNVX_host_to_win32(&pProperties_host, params->pProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetImageViewHandleNVX(void *args)
{
    struct vkGetImageViewHandleNVX_params *params = args;

    TRACE("%p, %p\n", params->device, params->pInfo);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetImageViewHandleNVX(wine_device_from_handle(params->device)->device, params->pInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetImageViewHandleNVX(void *args)
{
    struct vkGetImageViewHandleNVX_params *params = args;
    VkImageViewHandleInfoNVX_host pInfo_host;

    TRACE("%p, %p\n", params->device, params->pInfo);

    convert_VkImageViewHandleInfoNVX_win32_to_host(params->pInfo, &pInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetImageViewHandleNVX(wine_device_from_handle(params->device)->device, &pInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetMemoryHostPointerPropertiesEXT(void *args)
{
    struct vkGetMemoryHostPointerPropertiesEXT_params *params = args;

    TRACE("%p, %#x, %p, %p\n", params->device, params->handleType, params->pHostPointer, params->pMemoryHostPointerProperties);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetMemoryHostPointerPropertiesEXT(wine_device_from_handle(params->device)->device, params->handleType, params->pHostPointer, params->pMemoryHostPointerProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetMemoryHostPointerPropertiesEXT(void *args)
{
    struct vkGetMemoryHostPointerPropertiesEXT_params *params = args;

    TRACE("%p, %#x, %p, %p\n", params->device, params->handleType, params->pHostPointer, params->pMemoryHostPointerProperties);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetMemoryHostPointerPropertiesEXT(wine_device_from_handle(params->device)->device, params->handleType, params->pHostPointer, params->pMemoryHostPointerProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetMicromapBuildSizesEXT(void *args)
{
    struct vkGetMicromapBuildSizesEXT_params *params = args;

    TRACE("%p, %#x, %p, %p\n", params->device, params->buildType, params->pBuildInfo, params->pSizeInfo);

    wine_device_from_handle(params->device)->funcs.p_vkGetMicromapBuildSizesEXT(wine_device_from_handle(params->device)->device, params->buildType, params->pBuildInfo, params->pSizeInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetMicromapBuildSizesEXT(void *args)
{
    struct vkGetMicromapBuildSizesEXT_params *params = args;
    VkMicromapBuildInfoEXT_host pBuildInfo_host;
    VkMicromapBuildSizesInfoEXT_host pSizeInfo_host;

    TRACE("%p, %#x, %p, %p\n", params->device, params->buildType, params->pBuildInfo, params->pSizeInfo);

    convert_VkMicromapBuildInfoEXT_win32_to_host(params->pBuildInfo, &pBuildInfo_host);
    convert_VkMicromapBuildSizesInfoEXT_win32_to_host(params->pSizeInfo, &pSizeInfo_host);
    wine_device_from_handle(params->device)->funcs.p_vkGetMicromapBuildSizesEXT(wine_device_from_handle(params->device)->device, params->buildType, &pBuildInfo_host, &pSizeInfo_host);
    convert_VkMicromapBuildSizesInfoEXT_host_to_win32(&pSizeInfo_host, params->pSizeInfo);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPerformanceParameterINTEL(void *args)
{
    struct vkGetPerformanceParameterINTEL_params *params = args;

    TRACE("%p, %#x, %p\n", params->device, params->parameter, params->pValue);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetPerformanceParameterINTEL(wine_device_from_handle(params->device)->device, params->parameter, params->pValue);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPerformanceParameterINTEL(void *args)
{
    struct vkGetPerformanceParameterINTEL_params *params = args;

    TRACE("%p, %#x, %p\n", params->device, params->parameter, params->pValue);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetPerformanceParameterINTEL(wine_device_from_handle(params->device)->device, params->parameter, params->pValue);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT(void *args)
{
    struct vkGetPhysicalDeviceCalibrateableTimeDomainsEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pTimeDomainCount, params->pTimeDomains);

    params->result = wine_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT(params->physicalDevice, params->pTimeDomainCount, params->pTimeDomains);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT(void *args)
{
    struct vkGetPhysicalDeviceCalibrateableTimeDomainsEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pTimeDomainCount, params->pTimeDomains);

    params->result = wine_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT(params->physicalDevice, params->pTimeDomainCount, params->pTimeDomains);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(void *args)
{
    struct vkGetPhysicalDeviceCooperativeMatrixPropertiesNV_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pPropertyCount, params->pProperties);

    params->result = wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pPropertyCount, params->pProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(void *args)
{
    struct vkGetPhysicalDeviceCooperativeMatrixPropertiesNV_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pPropertyCount, params->pProperties);

    params->result = wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pPropertyCount, params->pProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceExternalBufferProperties(void *args)
{
    struct vkGetPhysicalDeviceExternalBufferProperties_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pExternalBufferInfo, params->pExternalBufferProperties);

    wine_vkGetPhysicalDeviceExternalBufferProperties(params->physicalDevice, params->pExternalBufferInfo, params->pExternalBufferProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceExternalBufferProperties(void *args)
{
    struct vkGetPhysicalDeviceExternalBufferProperties_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pExternalBufferInfo, params->pExternalBufferProperties);

    wine_vkGetPhysicalDeviceExternalBufferProperties(params->physicalDevice, params->pExternalBufferInfo, params->pExternalBufferProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceExternalBufferPropertiesKHR(void *args)
{
    struct vkGetPhysicalDeviceExternalBufferPropertiesKHR_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pExternalBufferInfo, params->pExternalBufferProperties);

    wine_vkGetPhysicalDeviceExternalBufferPropertiesKHR(params->physicalDevice, params->pExternalBufferInfo, params->pExternalBufferProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceExternalBufferPropertiesKHR(void *args)
{
    struct vkGetPhysicalDeviceExternalBufferPropertiesKHR_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pExternalBufferInfo, params->pExternalBufferProperties);

    wine_vkGetPhysicalDeviceExternalBufferPropertiesKHR(params->physicalDevice, params->pExternalBufferInfo, params->pExternalBufferProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceExternalFenceProperties(void *args)
{
    struct vkGetPhysicalDeviceExternalFenceProperties_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pExternalFenceInfo, params->pExternalFenceProperties);

    wine_vkGetPhysicalDeviceExternalFenceProperties(params->physicalDevice, params->pExternalFenceInfo, params->pExternalFenceProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceExternalFenceProperties(void *args)
{
    struct vkGetPhysicalDeviceExternalFenceProperties_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pExternalFenceInfo, params->pExternalFenceProperties);

    wine_vkGetPhysicalDeviceExternalFenceProperties(params->physicalDevice, params->pExternalFenceInfo, params->pExternalFenceProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceExternalFencePropertiesKHR(void *args)
{
    struct vkGetPhysicalDeviceExternalFencePropertiesKHR_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pExternalFenceInfo, params->pExternalFenceProperties);

    wine_vkGetPhysicalDeviceExternalFencePropertiesKHR(params->physicalDevice, params->pExternalFenceInfo, params->pExternalFenceProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceExternalFencePropertiesKHR(void *args)
{
    struct vkGetPhysicalDeviceExternalFencePropertiesKHR_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pExternalFenceInfo, params->pExternalFenceProperties);

    wine_vkGetPhysicalDeviceExternalFencePropertiesKHR(params->physicalDevice, params->pExternalFenceInfo, params->pExternalFenceProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceExternalSemaphoreProperties(void *args)
{
    struct vkGetPhysicalDeviceExternalSemaphoreProperties_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pExternalSemaphoreInfo, params->pExternalSemaphoreProperties);

    wine_vkGetPhysicalDeviceExternalSemaphoreProperties(params->physicalDevice, params->pExternalSemaphoreInfo, params->pExternalSemaphoreProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceExternalSemaphoreProperties(void *args)
{
    struct vkGetPhysicalDeviceExternalSemaphoreProperties_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pExternalSemaphoreInfo, params->pExternalSemaphoreProperties);

    wine_vkGetPhysicalDeviceExternalSemaphoreProperties(params->physicalDevice, params->pExternalSemaphoreInfo, params->pExternalSemaphoreProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR(void *args)
{
    struct vkGetPhysicalDeviceExternalSemaphorePropertiesKHR_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pExternalSemaphoreInfo, params->pExternalSemaphoreProperties);

    wine_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR(params->physicalDevice, params->pExternalSemaphoreInfo, params->pExternalSemaphoreProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR(void *args)
{
    struct vkGetPhysicalDeviceExternalSemaphorePropertiesKHR_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pExternalSemaphoreInfo, params->pExternalSemaphoreProperties);

    wine_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR(params->physicalDevice, params->pExternalSemaphoreInfo, params->pExternalSemaphoreProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceFeatures(void *args)
{
    struct vkGetPhysicalDeviceFeatures_params *params = args;

    TRACE("%p, %p\n", params->physicalDevice, params->pFeatures);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceFeatures(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pFeatures);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceFeatures(void *args)
{
    struct vkGetPhysicalDeviceFeatures_params *params = args;

    TRACE("%p, %p\n", params->physicalDevice, params->pFeatures);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceFeatures(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pFeatures);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceFeatures2(void *args)
{
    struct vkGetPhysicalDeviceFeatures2_params *params = args;

    TRACE("%p, %p\n", params->physicalDevice, params->pFeatures);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceFeatures2(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pFeatures);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceFeatures2(void *args)
{
    struct vkGetPhysicalDeviceFeatures2_params *params = args;

    TRACE("%p, %p\n", params->physicalDevice, params->pFeatures);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceFeatures2(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pFeatures);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceFeatures2KHR(void *args)
{
    struct vkGetPhysicalDeviceFeatures2KHR_params *params = args;

    TRACE("%p, %p\n", params->physicalDevice, params->pFeatures);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceFeatures2KHR(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pFeatures);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceFeatures2KHR(void *args)
{
    struct vkGetPhysicalDeviceFeatures2KHR_params *params = args;

    TRACE("%p, %p\n", params->physicalDevice, params->pFeatures);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceFeatures2KHR(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pFeatures);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceFormatProperties(void *args)
{
    struct vkGetPhysicalDeviceFormatProperties_params *params = args;

    TRACE("%p, %#x, %p\n", params->physicalDevice, params->format, params->pFormatProperties);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceFormatProperties(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->format, params->pFormatProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceFormatProperties(void *args)
{
    struct vkGetPhysicalDeviceFormatProperties_params *params = args;

    TRACE("%p, %#x, %p\n", params->physicalDevice, params->format, params->pFormatProperties);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceFormatProperties(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->format, params->pFormatProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceFormatProperties2(void *args)
{
    struct vkGetPhysicalDeviceFormatProperties2_params *params = args;

    TRACE("%p, %#x, %p\n", params->physicalDevice, params->format, params->pFormatProperties);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceFormatProperties2(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->format, params->pFormatProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceFormatProperties2(void *args)
{
    struct vkGetPhysicalDeviceFormatProperties2_params *params = args;

    TRACE("%p, %#x, %p\n", params->physicalDevice, params->format, params->pFormatProperties);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceFormatProperties2(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->format, params->pFormatProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceFormatProperties2KHR(void *args)
{
    struct vkGetPhysicalDeviceFormatProperties2KHR_params *params = args;

    TRACE("%p, %#x, %p\n", params->physicalDevice, params->format, params->pFormatProperties);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceFormatProperties2KHR(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->format, params->pFormatProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceFormatProperties2KHR(void *args)
{
    struct vkGetPhysicalDeviceFormatProperties2KHR_params *params = args;

    TRACE("%p, %#x, %p\n", params->physicalDevice, params->format, params->pFormatProperties);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceFormatProperties2KHR(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->format, params->pFormatProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceFragmentShadingRatesKHR(void *args)
{
    struct vkGetPhysicalDeviceFragmentShadingRatesKHR_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pFragmentShadingRateCount, params->pFragmentShadingRates);

    params->result = wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceFragmentShadingRatesKHR(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pFragmentShadingRateCount, params->pFragmentShadingRates);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceFragmentShadingRatesKHR(void *args)
{
    struct vkGetPhysicalDeviceFragmentShadingRatesKHR_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pFragmentShadingRateCount, params->pFragmentShadingRates);

    params->result = wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceFragmentShadingRatesKHR(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pFragmentShadingRateCount, params->pFragmentShadingRates);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceImageFormatProperties(void *args)
{
    struct vkGetPhysicalDeviceImageFormatProperties_params *params = args;

    TRACE("%p, %#x, %#x, %#x, %#x, %#x, %p\n", params->physicalDevice, params->format, params->type, params->tiling, params->usage, params->flags, params->pImageFormatProperties);

    params->result = wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceImageFormatProperties(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->format, params->type, params->tiling, params->usage, params->flags, params->pImageFormatProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceImageFormatProperties(void *args)
{
    struct vkGetPhysicalDeviceImageFormatProperties_params *params = args;
    VkImageFormatProperties_host pImageFormatProperties_host;

    TRACE("%p, %#x, %#x, %#x, %#x, %#x, %p\n", params->physicalDevice, params->format, params->type, params->tiling, params->usage, params->flags, params->pImageFormatProperties);

    params->result = wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceImageFormatProperties(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->format, params->type, params->tiling, params->usage, params->flags, &pImageFormatProperties_host);
    convert_VkImageFormatProperties_host_to_win32(&pImageFormatProperties_host, params->pImageFormatProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceImageFormatProperties2(void *args)
{
    struct vkGetPhysicalDeviceImageFormatProperties2_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pImageFormatInfo, params->pImageFormatProperties);

    params->result = wine_vkGetPhysicalDeviceImageFormatProperties2(params->physicalDevice, params->pImageFormatInfo, params->pImageFormatProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceImageFormatProperties2(void *args)
{
    struct vkGetPhysicalDeviceImageFormatProperties2_params *params = args;
    VkImageFormatProperties2_host pImageFormatProperties_host;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pImageFormatInfo, params->pImageFormatProperties);

    convert_VkImageFormatProperties2_win32_to_host(params->pImageFormatProperties, &pImageFormatProperties_host);
    params->result = wine_vkGetPhysicalDeviceImageFormatProperties2(params->physicalDevice, params->pImageFormatInfo, &pImageFormatProperties_host);
    convert_VkImageFormatProperties2_host_to_win32(&pImageFormatProperties_host, params->pImageFormatProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceImageFormatProperties2KHR(void *args)
{
    struct vkGetPhysicalDeviceImageFormatProperties2KHR_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pImageFormatInfo, params->pImageFormatProperties);

    params->result = wine_vkGetPhysicalDeviceImageFormatProperties2KHR(params->physicalDevice, params->pImageFormatInfo, params->pImageFormatProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceImageFormatProperties2KHR(void *args)
{
    struct vkGetPhysicalDeviceImageFormatProperties2KHR_params *params = args;
    VkImageFormatProperties2_host pImageFormatProperties_host;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pImageFormatInfo, params->pImageFormatProperties);

    convert_VkImageFormatProperties2_win32_to_host(params->pImageFormatProperties, &pImageFormatProperties_host);
    params->result = wine_vkGetPhysicalDeviceImageFormatProperties2KHR(params->physicalDevice, params->pImageFormatInfo, &pImageFormatProperties_host);
    convert_VkImageFormatProperties2_host_to_win32(&pImageFormatProperties_host, params->pImageFormatProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceMemoryProperties(void *args)
{
    struct vkGetPhysicalDeviceMemoryProperties_params *params = args;

    TRACE("%p, %p\n", params->physicalDevice, params->pMemoryProperties);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceMemoryProperties(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pMemoryProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceMemoryProperties(void *args)
{
    struct vkGetPhysicalDeviceMemoryProperties_params *params = args;
    VkPhysicalDeviceMemoryProperties_host pMemoryProperties_host;

    TRACE("%p, %p\n", params->physicalDevice, params->pMemoryProperties);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceMemoryProperties(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, &pMemoryProperties_host);
    convert_VkPhysicalDeviceMemoryProperties_host_to_win32(&pMemoryProperties_host, params->pMemoryProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceMemoryProperties2(void *args)
{
    struct vkGetPhysicalDeviceMemoryProperties2_params *params = args;

    TRACE("%p, %p\n", params->physicalDevice, params->pMemoryProperties);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceMemoryProperties2(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pMemoryProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceMemoryProperties2(void *args)
{
    struct vkGetPhysicalDeviceMemoryProperties2_params *params = args;
    VkPhysicalDeviceMemoryProperties2_host pMemoryProperties_host;

    TRACE("%p, %p\n", params->physicalDevice, params->pMemoryProperties);

    convert_VkPhysicalDeviceMemoryProperties2_win32_to_host(params->pMemoryProperties, &pMemoryProperties_host);
    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceMemoryProperties2(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, &pMemoryProperties_host);
    convert_VkPhysicalDeviceMemoryProperties2_host_to_win32(&pMemoryProperties_host, params->pMemoryProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceMemoryProperties2KHR(void *args)
{
    struct vkGetPhysicalDeviceMemoryProperties2KHR_params *params = args;

    TRACE("%p, %p\n", params->physicalDevice, params->pMemoryProperties);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceMemoryProperties2KHR(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pMemoryProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceMemoryProperties2KHR(void *args)
{
    struct vkGetPhysicalDeviceMemoryProperties2KHR_params *params = args;
    VkPhysicalDeviceMemoryProperties2_host pMemoryProperties_host;

    TRACE("%p, %p\n", params->physicalDevice, params->pMemoryProperties);

    convert_VkPhysicalDeviceMemoryProperties2_win32_to_host(params->pMemoryProperties, &pMemoryProperties_host);
    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceMemoryProperties2KHR(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, &pMemoryProperties_host);
    convert_VkPhysicalDeviceMemoryProperties2_host_to_win32(&pMemoryProperties_host, params->pMemoryProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceMultisamplePropertiesEXT(void *args)
{
    struct vkGetPhysicalDeviceMultisamplePropertiesEXT_params *params = args;

    TRACE("%p, %#x, %p\n", params->physicalDevice, params->samples, params->pMultisampleProperties);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceMultisamplePropertiesEXT(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->samples, params->pMultisampleProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceMultisamplePropertiesEXT(void *args)
{
    struct vkGetPhysicalDeviceMultisamplePropertiesEXT_params *params = args;

    TRACE("%p, %#x, %p\n", params->physicalDevice, params->samples, params->pMultisampleProperties);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceMultisamplePropertiesEXT(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->samples, params->pMultisampleProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceOpticalFlowImageFormatsNV(void *args)
{
    struct vkGetPhysicalDeviceOpticalFlowImageFormatsNV_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->physicalDevice, params->pOpticalFlowImageFormatInfo, params->pFormatCount, params->pImageFormatProperties);

    params->result = wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceOpticalFlowImageFormatsNV(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pOpticalFlowImageFormatInfo, params->pFormatCount, params->pImageFormatProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceOpticalFlowImageFormatsNV(void *args)
{
    struct vkGetPhysicalDeviceOpticalFlowImageFormatsNV_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->physicalDevice, params->pOpticalFlowImageFormatInfo, params->pFormatCount, params->pImageFormatProperties);

    params->result = wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceOpticalFlowImageFormatsNV(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pOpticalFlowImageFormatInfo, params->pFormatCount, params->pImageFormatProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDevicePresentRectanglesKHR(void *args)
{
    struct vkGetPhysicalDevicePresentRectanglesKHR_params *params = args;

    TRACE("%p, 0x%s, %p, %p\n", params->physicalDevice, wine_dbgstr_longlong(params->surface), params->pRectCount, params->pRects);

    params->result = wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDevicePresentRectanglesKHR(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, wine_surface_from_handle(params->surface)->driver_surface, params->pRectCount, params->pRects);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDevicePresentRectanglesKHR(void *args)
{
    struct vkGetPhysicalDevicePresentRectanglesKHR_params *params = args;

    TRACE("%p, 0x%s, %p, %p\n", params->physicalDevice, wine_dbgstr_longlong(params->surface), params->pRectCount, params->pRects);

    params->result = wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDevicePresentRectanglesKHR(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, wine_surface_from_handle(params->surface)->driver_surface, params->pRectCount, params->pRects);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceProperties(void *args)
{
    struct vkGetPhysicalDeviceProperties_params *params = args;

    TRACE("%p, %p\n", params->physicalDevice, params->pProperties);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceProperties(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceProperties(void *args)
{
    struct vkGetPhysicalDeviceProperties_params *params = args;
    VkPhysicalDeviceProperties_host pProperties_host;

    TRACE("%p, %p\n", params->physicalDevice, params->pProperties);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceProperties(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, &pProperties_host);
    convert_VkPhysicalDeviceProperties_host_to_win32(&pProperties_host, params->pProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceProperties2(void *args)
{
    struct vkGetPhysicalDeviceProperties2_params *params = args;

    TRACE("%p, %p\n", params->physicalDevice, params->pProperties);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceProperties2(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceProperties2(void *args)
{
    struct vkGetPhysicalDeviceProperties2_params *params = args;
    VkPhysicalDeviceProperties2_host pProperties_host;

    TRACE("%p, %p\n", params->physicalDevice, params->pProperties);

    convert_VkPhysicalDeviceProperties2_win32_to_host(params->pProperties, &pProperties_host);
    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceProperties2(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, &pProperties_host);
    convert_VkPhysicalDeviceProperties2_host_to_win32(&pProperties_host, params->pProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceProperties2KHR(void *args)
{
    struct vkGetPhysicalDeviceProperties2KHR_params *params = args;

    TRACE("%p, %p\n", params->physicalDevice, params->pProperties);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceProperties2KHR(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceProperties2KHR(void *args)
{
    struct vkGetPhysicalDeviceProperties2KHR_params *params = args;
    VkPhysicalDeviceProperties2_host pProperties_host;

    TRACE("%p, %p\n", params->physicalDevice, params->pProperties);

    convert_VkPhysicalDeviceProperties2_win32_to_host(params->pProperties, &pProperties_host);
    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceProperties2KHR(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, &pProperties_host);
    convert_VkPhysicalDeviceProperties2_host_to_win32(&pProperties_host, params->pProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(void *args)
{
    struct vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pPerformanceQueryCreateInfo, params->pNumPasses);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pPerformanceQueryCreateInfo, params->pNumPasses);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(void *args)
{
    struct vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pPerformanceQueryCreateInfo, params->pNumPasses);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pPerformanceQueryCreateInfo, params->pNumPasses);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceQueueFamilyProperties(void *args)
{
    struct vkGetPhysicalDeviceQueueFamilyProperties_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pQueueFamilyPropertyCount, params->pQueueFamilyProperties);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceQueueFamilyProperties(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pQueueFamilyPropertyCount, params->pQueueFamilyProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceQueueFamilyProperties(void *args)
{
    struct vkGetPhysicalDeviceQueueFamilyProperties_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pQueueFamilyPropertyCount, params->pQueueFamilyProperties);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceQueueFamilyProperties(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pQueueFamilyPropertyCount, params->pQueueFamilyProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceQueueFamilyProperties2(void *args)
{
    struct vkGetPhysicalDeviceQueueFamilyProperties2_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pQueueFamilyPropertyCount, params->pQueueFamilyProperties);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceQueueFamilyProperties2(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pQueueFamilyPropertyCount, params->pQueueFamilyProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceQueueFamilyProperties2(void *args)
{
    struct vkGetPhysicalDeviceQueueFamilyProperties2_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pQueueFamilyPropertyCount, params->pQueueFamilyProperties);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceQueueFamilyProperties2(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pQueueFamilyPropertyCount, params->pQueueFamilyProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceQueueFamilyProperties2KHR(void *args)
{
    struct vkGetPhysicalDeviceQueueFamilyProperties2KHR_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pQueueFamilyPropertyCount, params->pQueueFamilyProperties);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceQueueFamilyProperties2KHR(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pQueueFamilyPropertyCount, params->pQueueFamilyProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceQueueFamilyProperties2KHR(void *args)
{
    struct vkGetPhysicalDeviceQueueFamilyProperties2KHR_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pQueueFamilyPropertyCount, params->pQueueFamilyProperties);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceQueueFamilyProperties2KHR(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pQueueFamilyPropertyCount, params->pQueueFamilyProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceSparseImageFormatProperties(void *args)
{
    struct vkGetPhysicalDeviceSparseImageFormatProperties_params *params = args;

    TRACE("%p, %#x, %#x, %#x, %#x, %#x, %p, %p\n", params->physicalDevice, params->format, params->type, params->samples, params->usage, params->tiling, params->pPropertyCount, params->pProperties);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceSparseImageFormatProperties(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->format, params->type, params->samples, params->usage, params->tiling, params->pPropertyCount, params->pProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceSparseImageFormatProperties(void *args)
{
    struct vkGetPhysicalDeviceSparseImageFormatProperties_params *params = args;

    TRACE("%p, %#x, %#x, %#x, %#x, %#x, %p, %p\n", params->physicalDevice, params->format, params->type, params->samples, params->usage, params->tiling, params->pPropertyCount, params->pProperties);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceSparseImageFormatProperties(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->format, params->type, params->samples, params->usage, params->tiling, params->pPropertyCount, params->pProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceSparseImageFormatProperties2(void *args)
{
    struct vkGetPhysicalDeviceSparseImageFormatProperties2_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->physicalDevice, params->pFormatInfo, params->pPropertyCount, params->pProperties);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceSparseImageFormatProperties2(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pFormatInfo, params->pPropertyCount, params->pProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceSparseImageFormatProperties2(void *args)
{
    struct vkGetPhysicalDeviceSparseImageFormatProperties2_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->physicalDevice, params->pFormatInfo, params->pPropertyCount, params->pProperties);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceSparseImageFormatProperties2(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pFormatInfo, params->pPropertyCount, params->pProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceSparseImageFormatProperties2KHR(void *args)
{
    struct vkGetPhysicalDeviceSparseImageFormatProperties2KHR_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->physicalDevice, params->pFormatInfo, params->pPropertyCount, params->pProperties);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceSparseImageFormatProperties2KHR(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pFormatInfo, params->pPropertyCount, params->pProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceSparseImageFormatProperties2KHR(void *args)
{
    struct vkGetPhysicalDeviceSparseImageFormatProperties2KHR_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->physicalDevice, params->pFormatInfo, params->pPropertyCount, params->pProperties);

    wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceSparseImageFormatProperties2KHR(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pFormatInfo, params->pPropertyCount, params->pProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(void *args)
{
    struct vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pCombinationCount, params->pCombinations);

    params->result = wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pCombinationCount, params->pCombinations);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(void *args)
{
    struct vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pCombinationCount, params->pCombinations);

    params->result = wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pCombinationCount, params->pCombinations);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceSurfaceCapabilities2KHR(void *args)
{
    struct vkGetPhysicalDeviceSurfaceCapabilities2KHR_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pSurfaceInfo, params->pSurfaceCapabilities);

    params->result = wine_vkGetPhysicalDeviceSurfaceCapabilities2KHR(params->physicalDevice, params->pSurfaceInfo, params->pSurfaceCapabilities);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceSurfaceCapabilities2KHR(void *args)
{
    struct vkGetPhysicalDeviceSurfaceCapabilities2KHR_params *params = args;
    VkPhysicalDeviceSurfaceInfo2KHR_host pSurfaceInfo_host;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pSurfaceInfo, params->pSurfaceCapabilities);

    convert_VkPhysicalDeviceSurfaceInfo2KHR_win32_to_unwrapped_host(params->pSurfaceInfo, &pSurfaceInfo_host);
    params->result = wine_vkGetPhysicalDeviceSurfaceCapabilities2KHR(params->physicalDevice, &pSurfaceInfo_host, params->pSurfaceCapabilities);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceSurfaceCapabilitiesKHR(void *args)
{
    struct vkGetPhysicalDeviceSurfaceCapabilitiesKHR_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->physicalDevice, wine_dbgstr_longlong(params->surface), params->pSurfaceCapabilities);

    params->result = wine_vkGetPhysicalDeviceSurfaceCapabilitiesKHR(params->physicalDevice, params->surface, params->pSurfaceCapabilities);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceSurfaceCapabilitiesKHR(void *args)
{
    struct vkGetPhysicalDeviceSurfaceCapabilitiesKHR_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->physicalDevice, wine_dbgstr_longlong(params->surface), params->pSurfaceCapabilities);

    params->result = wine_vkGetPhysicalDeviceSurfaceCapabilitiesKHR(params->physicalDevice, params->surface, params->pSurfaceCapabilities);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceSurfaceFormats2KHR(void *args)
{
    struct vkGetPhysicalDeviceSurfaceFormats2KHR_params *params = args;
    VkPhysicalDeviceSurfaceInfo2KHR pSurfaceInfo_host;

    TRACE("%p, %p, %p, %p\n", params->physicalDevice, params->pSurfaceInfo, params->pSurfaceFormatCount, params->pSurfaceFormats);

    convert_VkPhysicalDeviceSurfaceInfo2KHR_win64_to_host(params->pSurfaceInfo, &pSurfaceInfo_host);
    params->result = wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceSurfaceFormats2KHR(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, &pSurfaceInfo_host, params->pSurfaceFormatCount, params->pSurfaceFormats);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceSurfaceFormats2KHR(void *args)
{
    struct vkGetPhysicalDeviceSurfaceFormats2KHR_params *params = args;
    VkPhysicalDeviceSurfaceInfo2KHR_host pSurfaceInfo_host;

    TRACE("%p, %p, %p, %p\n", params->physicalDevice, params->pSurfaceInfo, params->pSurfaceFormatCount, params->pSurfaceFormats);

    convert_VkPhysicalDeviceSurfaceInfo2KHR_win32_to_host(params->pSurfaceInfo, &pSurfaceInfo_host);
    params->result = wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceSurfaceFormats2KHR(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, &pSurfaceInfo_host, params->pSurfaceFormatCount, params->pSurfaceFormats);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceSurfaceFormatsKHR(void *args)
{
    struct vkGetPhysicalDeviceSurfaceFormatsKHR_params *params = args;

    TRACE("%p, 0x%s, %p, %p\n", params->physicalDevice, wine_dbgstr_longlong(params->surface), params->pSurfaceFormatCount, params->pSurfaceFormats);

    params->result = wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceSurfaceFormatsKHR(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, wine_surface_from_handle(params->surface)->driver_surface, params->pSurfaceFormatCount, params->pSurfaceFormats);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceSurfaceFormatsKHR(void *args)
{
    struct vkGetPhysicalDeviceSurfaceFormatsKHR_params *params = args;

    TRACE("%p, 0x%s, %p, %p\n", params->physicalDevice, wine_dbgstr_longlong(params->surface), params->pSurfaceFormatCount, params->pSurfaceFormats);

    params->result = wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceSurfaceFormatsKHR(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, wine_surface_from_handle(params->surface)->driver_surface, params->pSurfaceFormatCount, params->pSurfaceFormats);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceSurfacePresentModesKHR(void *args)
{
    struct vkGetPhysicalDeviceSurfacePresentModesKHR_params *params = args;

    TRACE("%p, 0x%s, %p, %p\n", params->physicalDevice, wine_dbgstr_longlong(params->surface), params->pPresentModeCount, params->pPresentModes);

    params->result = wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceSurfacePresentModesKHR(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, wine_surface_from_handle(params->surface)->driver_surface, params->pPresentModeCount, params->pPresentModes);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceSurfacePresentModesKHR(void *args)
{
    struct vkGetPhysicalDeviceSurfacePresentModesKHR_params *params = args;

    TRACE("%p, 0x%s, %p, %p\n", params->physicalDevice, wine_dbgstr_longlong(params->surface), params->pPresentModeCount, params->pPresentModes);

    params->result = wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceSurfacePresentModesKHR(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, wine_surface_from_handle(params->surface)->driver_surface, params->pPresentModeCount, params->pPresentModes);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceSurfaceSupportKHR(void *args)
{
    struct vkGetPhysicalDeviceSurfaceSupportKHR_params *params = args;

    TRACE("%p, %u, 0x%s, %p\n", params->physicalDevice, params->queueFamilyIndex, wine_dbgstr_longlong(params->surface), params->pSupported);

    params->result = wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceSurfaceSupportKHR(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->queueFamilyIndex, wine_surface_from_handle(params->surface)->driver_surface, params->pSupported);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceSurfaceSupportKHR(void *args)
{
    struct vkGetPhysicalDeviceSurfaceSupportKHR_params *params = args;

    TRACE("%p, %u, 0x%s, %p\n", params->physicalDevice, params->queueFamilyIndex, wine_dbgstr_longlong(params->surface), params->pSupported);

    params->result = wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceSurfaceSupportKHR(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->queueFamilyIndex, wine_surface_from_handle(params->surface)->driver_surface, params->pSupported);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceToolProperties(void *args)
{
    struct vkGetPhysicalDeviceToolProperties_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pToolCount, params->pToolProperties);

    params->result = wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceToolProperties(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pToolCount, params->pToolProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceToolProperties(void *args)
{
    struct vkGetPhysicalDeviceToolProperties_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pToolCount, params->pToolProperties);

    params->result = wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceToolProperties(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pToolCount, params->pToolProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceToolPropertiesEXT(void *args)
{
    struct vkGetPhysicalDeviceToolPropertiesEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pToolCount, params->pToolProperties);

    params->result = wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceToolPropertiesEXT(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pToolCount, params->pToolProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceToolPropertiesEXT(void *args)
{
    struct vkGetPhysicalDeviceToolPropertiesEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->physicalDevice, params->pToolCount, params->pToolProperties);

    params->result = wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceToolPropertiesEXT(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->pToolCount, params->pToolProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPhysicalDeviceWin32PresentationSupportKHR(void *args)
{
    struct vkGetPhysicalDeviceWin32PresentationSupportKHR_params *params = args;

    TRACE("%p, %u\n", params->physicalDevice, params->queueFamilyIndex);

    params->result = wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceWin32PresentationSupportKHR(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->queueFamilyIndex);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPhysicalDeviceWin32PresentationSupportKHR(void *args)
{
    struct vkGetPhysicalDeviceWin32PresentationSupportKHR_params *params = args;

    TRACE("%p, %u\n", params->physicalDevice, params->queueFamilyIndex);

    params->result = wine_phys_dev_from_handle(params->physicalDevice)->instance->funcs.p_vkGetPhysicalDeviceWin32PresentationSupportKHR(wine_phys_dev_from_handle(params->physicalDevice)->phys_dev, params->queueFamilyIndex);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPipelineCacheData(void *args)
{
    struct vkGetPipelineCacheData_params *params = args;

    TRACE("%p, 0x%s, %p, %p\n", params->device, wine_dbgstr_longlong(params->pipelineCache), params->pDataSize, params->pData);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetPipelineCacheData(wine_device_from_handle(params->device)->device, params->pipelineCache, params->pDataSize, params->pData);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPipelineCacheData(void *args)
{
    struct vkGetPipelineCacheData_params *params = args;

    TRACE("%p, 0x%s, %p, %p\n", params->device, wine_dbgstr_longlong(params->pipelineCache), params->pDataSize, params->pData);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetPipelineCacheData(wine_device_from_handle(params->device)->device, params->pipelineCache, params->pDataSize, params->pData);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPipelineExecutableInternalRepresentationsKHR(void *args)
{
    struct vkGetPipelineExecutableInternalRepresentationsKHR_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pExecutableInfo, params->pInternalRepresentationCount, params->pInternalRepresentations);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetPipelineExecutableInternalRepresentationsKHR(wine_device_from_handle(params->device)->device, params->pExecutableInfo, params->pInternalRepresentationCount, params->pInternalRepresentations);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPipelineExecutableInternalRepresentationsKHR(void *args)
{
    struct vkGetPipelineExecutableInternalRepresentationsKHR_params *params = args;
    VkPipelineExecutableInfoKHR_host pExecutableInfo_host;

    TRACE("%p, %p, %p, %p\n", params->device, params->pExecutableInfo, params->pInternalRepresentationCount, params->pInternalRepresentations);

    convert_VkPipelineExecutableInfoKHR_win32_to_host(params->pExecutableInfo, &pExecutableInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetPipelineExecutableInternalRepresentationsKHR(wine_device_from_handle(params->device)->device, &pExecutableInfo_host, params->pInternalRepresentationCount, params->pInternalRepresentations);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPipelineExecutablePropertiesKHR(void *args)
{
    struct vkGetPipelineExecutablePropertiesKHR_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pPipelineInfo, params->pExecutableCount, params->pProperties);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetPipelineExecutablePropertiesKHR(wine_device_from_handle(params->device)->device, params->pPipelineInfo, params->pExecutableCount, params->pProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPipelineExecutablePropertiesKHR(void *args)
{
    struct vkGetPipelineExecutablePropertiesKHR_params *params = args;
    VkPipelineInfoKHR_host pPipelineInfo_host;

    TRACE("%p, %p, %p, %p\n", params->device, params->pPipelineInfo, params->pExecutableCount, params->pProperties);

    convert_VkPipelineInfoKHR_win32_to_host(params->pPipelineInfo, &pPipelineInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetPipelineExecutablePropertiesKHR(wine_device_from_handle(params->device)->device, &pPipelineInfo_host, params->pExecutableCount, params->pProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPipelineExecutableStatisticsKHR(void *args)
{
    struct vkGetPipelineExecutableStatisticsKHR_params *params = args;

    TRACE("%p, %p, %p, %p\n", params->device, params->pExecutableInfo, params->pStatisticCount, params->pStatistics);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetPipelineExecutableStatisticsKHR(wine_device_from_handle(params->device)->device, params->pExecutableInfo, params->pStatisticCount, params->pStatistics);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPipelineExecutableStatisticsKHR(void *args)
{
    struct vkGetPipelineExecutableStatisticsKHR_params *params = args;
    VkPipelineExecutableInfoKHR_host pExecutableInfo_host;

    TRACE("%p, %p, %p, %p\n", params->device, params->pExecutableInfo, params->pStatisticCount, params->pStatistics);

    convert_VkPipelineExecutableInfoKHR_win32_to_host(params->pExecutableInfo, &pExecutableInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetPipelineExecutableStatisticsKHR(wine_device_from_handle(params->device)->device, &pExecutableInfo_host, params->pStatisticCount, params->pStatistics);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPipelinePropertiesEXT(void *args)
{
    struct vkGetPipelinePropertiesEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->device, params->pPipelineInfo, params->pPipelineProperties);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetPipelinePropertiesEXT(wine_device_from_handle(params->device)->device, params->pPipelineInfo, params->pPipelineProperties);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPipelinePropertiesEXT(void *args)
{
    struct vkGetPipelinePropertiesEXT_params *params = args;
    VkPipelineInfoEXT_host pPipelineInfo_host;

    TRACE("%p, %p, %p\n", params->device, params->pPipelineInfo, params->pPipelineProperties);

    convert_VkPipelineInfoEXT_win32_to_host(params->pPipelineInfo, &pPipelineInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetPipelinePropertiesEXT(wine_device_from_handle(params->device)->device, &pPipelineInfo_host, params->pPipelineProperties);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPrivateData(void *args)
{
    struct vkGetPrivateData_params *params = args;

    TRACE("%p, %#x, 0x%s, 0x%s, %p\n", params->device, params->objectType, wine_dbgstr_longlong(params->objectHandle), wine_dbgstr_longlong(params->privateDataSlot), params->pData);

    wine_device_from_handle(params->device)->funcs.p_vkGetPrivateData(wine_device_from_handle(params->device)->device, params->objectType, wine_vk_unwrap_handle(params->objectType, params->objectHandle), params->privateDataSlot, params->pData);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPrivateData(void *args)
{
    struct vkGetPrivateData_params *params = args;

    TRACE("%p, %#x, 0x%s, 0x%s, %p\n", params->device, params->objectType, wine_dbgstr_longlong(params->objectHandle), wine_dbgstr_longlong(params->privateDataSlot), params->pData);

    wine_device_from_handle(params->device)->funcs.p_vkGetPrivateData(wine_device_from_handle(params->device)->device, params->objectType, wine_vk_unwrap_handle(params->objectType, params->objectHandle), params->privateDataSlot, params->pData);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetPrivateDataEXT(void *args)
{
    struct vkGetPrivateDataEXT_params *params = args;

    TRACE("%p, %#x, 0x%s, 0x%s, %p\n", params->device, params->objectType, wine_dbgstr_longlong(params->objectHandle), wine_dbgstr_longlong(params->privateDataSlot), params->pData);

    wine_device_from_handle(params->device)->funcs.p_vkGetPrivateDataEXT(wine_device_from_handle(params->device)->device, params->objectType, wine_vk_unwrap_handle(params->objectType, params->objectHandle), params->privateDataSlot, params->pData);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetPrivateDataEXT(void *args)
{
    struct vkGetPrivateDataEXT_params *params = args;

    TRACE("%p, %#x, 0x%s, 0x%s, %p\n", params->device, params->objectType, wine_dbgstr_longlong(params->objectHandle), wine_dbgstr_longlong(params->privateDataSlot), params->pData);

    wine_device_from_handle(params->device)->funcs.p_vkGetPrivateDataEXT(wine_device_from_handle(params->device)->device, params->objectType, wine_vk_unwrap_handle(params->objectType, params->objectHandle), params->privateDataSlot, params->pData);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetQueryPoolResults(void *args)
{
    struct vkGetQueryPoolResults_params *params = args;

    TRACE("%p, 0x%s, %u, %u, 0x%s, %p, 0x%s, %#x\n", params->device, wine_dbgstr_longlong(params->queryPool), params->firstQuery, params->queryCount, wine_dbgstr_longlong(params->dataSize), params->pData, wine_dbgstr_longlong(params->stride), params->flags);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetQueryPoolResults(wine_device_from_handle(params->device)->device, params->queryPool, params->firstQuery, params->queryCount, params->dataSize, params->pData, params->stride, params->flags);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetQueryPoolResults(void *args)
{
    struct vkGetQueryPoolResults_params *params = args;

    TRACE("%p, 0x%s, %u, %u, 0x%s, %p, 0x%s, %#x\n", params->device, wine_dbgstr_longlong(params->queryPool), params->firstQuery, params->queryCount, wine_dbgstr_longlong(params->dataSize), params->pData, wine_dbgstr_longlong(params->stride), params->flags);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetQueryPoolResults(wine_device_from_handle(params->device)->device, params->queryPool, params->firstQuery, params->queryCount, params->dataSize, params->pData, params->stride, params->flags);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetQueueCheckpointData2NV(void *args)
{
    struct vkGetQueueCheckpointData2NV_params *params = args;

    TRACE("%p, %p, %p\n", params->queue, params->pCheckpointDataCount, params->pCheckpointData);

    wine_queue_from_handle(params->queue)->device->funcs.p_vkGetQueueCheckpointData2NV(wine_queue_from_handle(params->queue)->queue, params->pCheckpointDataCount, params->pCheckpointData);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetQueueCheckpointData2NV(void *args)
{
    struct vkGetQueueCheckpointData2NV_params *params = args;

    TRACE("%p, %p, %p\n", params->queue, params->pCheckpointDataCount, params->pCheckpointData);

    wine_queue_from_handle(params->queue)->device->funcs.p_vkGetQueueCheckpointData2NV(wine_queue_from_handle(params->queue)->queue, params->pCheckpointDataCount, params->pCheckpointData);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetQueueCheckpointDataNV(void *args)
{
    struct vkGetQueueCheckpointDataNV_params *params = args;

    TRACE("%p, %p, %p\n", params->queue, params->pCheckpointDataCount, params->pCheckpointData);

    wine_queue_from_handle(params->queue)->device->funcs.p_vkGetQueueCheckpointDataNV(wine_queue_from_handle(params->queue)->queue, params->pCheckpointDataCount, params->pCheckpointData);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetQueueCheckpointDataNV(void *args)
{
    struct vkGetQueueCheckpointDataNV_params *params = args;

    TRACE("%p, %p, %p\n", params->queue, params->pCheckpointDataCount, params->pCheckpointData);

    wine_queue_from_handle(params->queue)->device->funcs.p_vkGetQueueCheckpointDataNV(wine_queue_from_handle(params->queue)->queue, params->pCheckpointDataCount, params->pCheckpointData);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR(void *args)
{
    struct vkGetRayTracingCaptureReplayShaderGroupHandlesKHR_params *params = args;

    TRACE("%p, 0x%s, %u, %u, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->pipeline), params->firstGroup, params->groupCount, wine_dbgstr_longlong(params->dataSize), params->pData);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR(wine_device_from_handle(params->device)->device, params->pipeline, params->firstGroup, params->groupCount, params->dataSize, params->pData);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR(void *args)
{
    struct vkGetRayTracingCaptureReplayShaderGroupHandlesKHR_params *params = args;

    TRACE("%p, 0x%s, %u, %u, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->pipeline), params->firstGroup, params->groupCount, wine_dbgstr_longlong(params->dataSize), params->pData);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR(wine_device_from_handle(params->device)->device, params->pipeline, params->firstGroup, params->groupCount, params->dataSize, params->pData);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetRayTracingShaderGroupHandlesKHR(void *args)
{
    struct vkGetRayTracingShaderGroupHandlesKHR_params *params = args;

    TRACE("%p, 0x%s, %u, %u, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->pipeline), params->firstGroup, params->groupCount, wine_dbgstr_longlong(params->dataSize), params->pData);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetRayTracingShaderGroupHandlesKHR(wine_device_from_handle(params->device)->device, params->pipeline, params->firstGroup, params->groupCount, params->dataSize, params->pData);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetRayTracingShaderGroupHandlesKHR(void *args)
{
    struct vkGetRayTracingShaderGroupHandlesKHR_params *params = args;

    TRACE("%p, 0x%s, %u, %u, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->pipeline), params->firstGroup, params->groupCount, wine_dbgstr_longlong(params->dataSize), params->pData);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetRayTracingShaderGroupHandlesKHR(wine_device_from_handle(params->device)->device, params->pipeline, params->firstGroup, params->groupCount, params->dataSize, params->pData);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetRayTracingShaderGroupHandlesNV(void *args)
{
    struct vkGetRayTracingShaderGroupHandlesNV_params *params = args;

    TRACE("%p, 0x%s, %u, %u, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->pipeline), params->firstGroup, params->groupCount, wine_dbgstr_longlong(params->dataSize), params->pData);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetRayTracingShaderGroupHandlesNV(wine_device_from_handle(params->device)->device, params->pipeline, params->firstGroup, params->groupCount, params->dataSize, params->pData);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetRayTracingShaderGroupHandlesNV(void *args)
{
    struct vkGetRayTracingShaderGroupHandlesNV_params *params = args;

    TRACE("%p, 0x%s, %u, %u, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->pipeline), params->firstGroup, params->groupCount, wine_dbgstr_longlong(params->dataSize), params->pData);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetRayTracingShaderGroupHandlesNV(wine_device_from_handle(params->device)->device, params->pipeline, params->firstGroup, params->groupCount, params->dataSize, params->pData);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetRayTracingShaderGroupStackSizeKHR(void *args)
{
    struct vkGetRayTracingShaderGroupStackSizeKHR_params *params = args;

    TRACE("%p, 0x%s, %u, %#x\n", params->device, wine_dbgstr_longlong(params->pipeline), params->group, params->groupShader);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetRayTracingShaderGroupStackSizeKHR(wine_device_from_handle(params->device)->device, params->pipeline, params->group, params->groupShader);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetRayTracingShaderGroupStackSizeKHR(void *args)
{
    struct vkGetRayTracingShaderGroupStackSizeKHR_params *params = args;

    TRACE("%p, 0x%s, %u, %#x\n", params->device, wine_dbgstr_longlong(params->pipeline), params->group, params->groupShader);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetRayTracingShaderGroupStackSizeKHR(wine_device_from_handle(params->device)->device, params->pipeline, params->group, params->groupShader);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetRenderAreaGranularity(void *args)
{
    struct vkGetRenderAreaGranularity_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->renderPass), params->pGranularity);

    wine_device_from_handle(params->device)->funcs.p_vkGetRenderAreaGranularity(wine_device_from_handle(params->device)->device, params->renderPass, params->pGranularity);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetRenderAreaGranularity(void *args)
{
    struct vkGetRenderAreaGranularity_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->renderPass), params->pGranularity);

    wine_device_from_handle(params->device)->funcs.p_vkGetRenderAreaGranularity(wine_device_from_handle(params->device)->device, params->renderPass, params->pGranularity);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetSemaphoreCounterValue(void *args)
{
    struct vkGetSemaphoreCounterValue_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->semaphore), params->pValue);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetSemaphoreCounterValue(wine_device_from_handle(params->device)->device, params->semaphore, params->pValue);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetSemaphoreCounterValue(void *args)
{
    struct vkGetSemaphoreCounterValue_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->semaphore), params->pValue);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetSemaphoreCounterValue(wine_device_from_handle(params->device)->device, params->semaphore, params->pValue);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetSemaphoreCounterValueKHR(void *args)
{
    struct vkGetSemaphoreCounterValueKHR_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->semaphore), params->pValue);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetSemaphoreCounterValueKHR(wine_device_from_handle(params->device)->device, params->semaphore, params->pValue);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetSemaphoreCounterValueKHR(void *args)
{
    struct vkGetSemaphoreCounterValueKHR_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->semaphore), params->pValue);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetSemaphoreCounterValueKHR(wine_device_from_handle(params->device)->device, params->semaphore, params->pValue);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetShaderInfoAMD(void *args)
{
    struct vkGetShaderInfoAMD_params *params = args;

    TRACE("%p, 0x%s, %#x, %#x, %p, %p\n", params->device, wine_dbgstr_longlong(params->pipeline), params->shaderStage, params->infoType, params->pInfoSize, params->pInfo);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetShaderInfoAMD(wine_device_from_handle(params->device)->device, params->pipeline, params->shaderStage, params->infoType, params->pInfoSize, params->pInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetShaderInfoAMD(void *args)
{
    struct vkGetShaderInfoAMD_params *params = args;

    TRACE("%p, 0x%s, %#x, %#x, %p, %p\n", params->device, wine_dbgstr_longlong(params->pipeline), params->shaderStage, params->infoType, params->pInfoSize, params->pInfo);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetShaderInfoAMD(wine_device_from_handle(params->device)->device, params->pipeline, params->shaderStage, params->infoType, params->pInfoSize, params->pInfo);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetShaderModuleCreateInfoIdentifierEXT(void *args)
{
    struct vkGetShaderModuleCreateInfoIdentifierEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->device, params->pCreateInfo, params->pIdentifier);

    wine_device_from_handle(params->device)->funcs.p_vkGetShaderModuleCreateInfoIdentifierEXT(wine_device_from_handle(params->device)->device, params->pCreateInfo, params->pIdentifier);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetShaderModuleCreateInfoIdentifierEXT(void *args)
{
    struct vkGetShaderModuleCreateInfoIdentifierEXT_params *params = args;

    TRACE("%p, %p, %p\n", params->device, params->pCreateInfo, params->pIdentifier);

    wine_device_from_handle(params->device)->funcs.p_vkGetShaderModuleCreateInfoIdentifierEXT(wine_device_from_handle(params->device)->device, params->pCreateInfo, params->pIdentifier);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetShaderModuleIdentifierEXT(void *args)
{
    struct vkGetShaderModuleIdentifierEXT_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->shaderModule), params->pIdentifier);

    wine_device_from_handle(params->device)->funcs.p_vkGetShaderModuleIdentifierEXT(wine_device_from_handle(params->device)->device, params->shaderModule, params->pIdentifier);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetShaderModuleIdentifierEXT(void *args)
{
    struct vkGetShaderModuleIdentifierEXT_params *params = args;

    TRACE("%p, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->shaderModule), params->pIdentifier);

    wine_device_from_handle(params->device)->funcs.p_vkGetShaderModuleIdentifierEXT(wine_device_from_handle(params->device)->device, params->shaderModule, params->pIdentifier);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetSwapchainImagesKHR(void *args)
{
    struct vkGetSwapchainImagesKHR_params *params = args;

    TRACE("%p, 0x%s, %p, %p\n", params->device, wine_dbgstr_longlong(params->swapchain), params->pSwapchainImageCount, params->pSwapchainImages);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetSwapchainImagesKHR(wine_device_from_handle(params->device)->device, params->swapchain, params->pSwapchainImageCount, params->pSwapchainImages);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetSwapchainImagesKHR(void *args)
{
    struct vkGetSwapchainImagesKHR_params *params = args;

    TRACE("%p, 0x%s, %p, %p\n", params->device, wine_dbgstr_longlong(params->swapchain), params->pSwapchainImageCount, params->pSwapchainImages);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetSwapchainImagesKHR(wine_device_from_handle(params->device)->device, params->swapchain, params->pSwapchainImageCount, params->pSwapchainImages);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkGetValidationCacheDataEXT(void *args)
{
    struct vkGetValidationCacheDataEXT_params *params = args;

    TRACE("%p, 0x%s, %p, %p\n", params->device, wine_dbgstr_longlong(params->validationCache), params->pDataSize, params->pData);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetValidationCacheDataEXT(wine_device_from_handle(params->device)->device, params->validationCache, params->pDataSize, params->pData);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkGetValidationCacheDataEXT(void *args)
{
    struct vkGetValidationCacheDataEXT_params *params = args;

    TRACE("%p, 0x%s, %p, %p\n", params->device, wine_dbgstr_longlong(params->validationCache), params->pDataSize, params->pData);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkGetValidationCacheDataEXT(wine_device_from_handle(params->device)->device, params->validationCache, params->pDataSize, params->pData);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkInitializePerformanceApiINTEL(void *args)
{
    struct vkInitializePerformanceApiINTEL_params *params = args;

    TRACE("%p, %p\n", params->device, params->pInitializeInfo);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkInitializePerformanceApiINTEL(wine_device_from_handle(params->device)->device, params->pInitializeInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkInitializePerformanceApiINTEL(void *args)
{
    struct vkInitializePerformanceApiINTEL_params *params = args;

    TRACE("%p, %p\n", params->device, params->pInitializeInfo);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkInitializePerformanceApiINTEL(wine_device_from_handle(params->device)->device, params->pInitializeInfo);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkInvalidateMappedMemoryRanges(void *args)
{
    struct vkInvalidateMappedMemoryRanges_params *params = args;

    TRACE("%p, %u, %p\n", params->device, params->memoryRangeCount, params->pMemoryRanges);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkInvalidateMappedMemoryRanges(wine_device_from_handle(params->device)->device, params->memoryRangeCount, params->pMemoryRanges);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkInvalidateMappedMemoryRanges(void *args)
{
    struct vkInvalidateMappedMemoryRanges_params *params = args;
    VkMappedMemoryRange_host *pMemoryRanges_host;
    struct conversion_context ctx;

    TRACE("%p, %u, %p\n", params->device, params->memoryRangeCount, params->pMemoryRanges);

    init_conversion_context(&ctx);
    pMemoryRanges_host = convert_VkMappedMemoryRange_array_win32_to_host(&ctx, params->pMemoryRanges, params->memoryRangeCount);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkInvalidateMappedMemoryRanges(wine_device_from_handle(params->device)->device, params->memoryRangeCount, pMemoryRanges_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkMapMemory(void *args)
{
    struct vkMapMemory_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s, %#x, %p\n", params->device, wine_dbgstr_longlong(params->memory), wine_dbgstr_longlong(params->offset), wine_dbgstr_longlong(params->size), params->flags, params->ppData);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkMapMemory(wine_device_from_handle(params->device)->device, params->memory, params->offset, params->size, params->flags, params->ppData);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkMapMemory(void *args)
{
    struct vkMapMemory_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s, %#x, %p\n", params->device, wine_dbgstr_longlong(params->memory), wine_dbgstr_longlong(params->offset), wine_dbgstr_longlong(params->size), params->flags, params->ppData);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkMapMemory(wine_device_from_handle(params->device)->device, params->memory, params->offset, params->size, params->flags, params->ppData);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkMergePipelineCaches(void *args)
{
    struct vkMergePipelineCaches_params *params = args;

    TRACE("%p, 0x%s, %u, %p\n", params->device, wine_dbgstr_longlong(params->dstCache), params->srcCacheCount, params->pSrcCaches);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkMergePipelineCaches(wine_device_from_handle(params->device)->device, params->dstCache, params->srcCacheCount, params->pSrcCaches);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkMergePipelineCaches(void *args)
{
    struct vkMergePipelineCaches_params *params = args;

    TRACE("%p, 0x%s, %u, %p\n", params->device, wine_dbgstr_longlong(params->dstCache), params->srcCacheCount, params->pSrcCaches);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkMergePipelineCaches(wine_device_from_handle(params->device)->device, params->dstCache, params->srcCacheCount, params->pSrcCaches);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkMergeValidationCachesEXT(void *args)
{
    struct vkMergeValidationCachesEXT_params *params = args;

    TRACE("%p, 0x%s, %u, %p\n", params->device, wine_dbgstr_longlong(params->dstCache), params->srcCacheCount, params->pSrcCaches);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkMergeValidationCachesEXT(wine_device_from_handle(params->device)->device, params->dstCache, params->srcCacheCount, params->pSrcCaches);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkMergeValidationCachesEXT(void *args)
{
    struct vkMergeValidationCachesEXT_params *params = args;

    TRACE("%p, 0x%s, %u, %p\n", params->device, wine_dbgstr_longlong(params->dstCache), params->srcCacheCount, params->pSrcCaches);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkMergeValidationCachesEXT(wine_device_from_handle(params->device)->device, params->dstCache, params->srcCacheCount, params->pSrcCaches);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkQueueBeginDebugUtilsLabelEXT(void *args)
{
    struct vkQueueBeginDebugUtilsLabelEXT_params *params = args;

    TRACE("%p, %p\n", params->queue, params->pLabelInfo);

    wine_queue_from_handle(params->queue)->device->funcs.p_vkQueueBeginDebugUtilsLabelEXT(wine_queue_from_handle(params->queue)->queue, params->pLabelInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkQueueBeginDebugUtilsLabelEXT(void *args)
{
    struct vkQueueBeginDebugUtilsLabelEXT_params *params = args;

    TRACE("%p, %p\n", params->queue, params->pLabelInfo);

    wine_queue_from_handle(params->queue)->device->funcs.p_vkQueueBeginDebugUtilsLabelEXT(wine_queue_from_handle(params->queue)->queue, params->pLabelInfo);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkQueueBindSparse(void *args)
{
    struct vkQueueBindSparse_params *params = args;

    TRACE("%p, %u, %p, 0x%s\n", params->queue, params->bindInfoCount, params->pBindInfo, wine_dbgstr_longlong(params->fence));

    params->result = wine_queue_from_handle(params->queue)->device->funcs.p_vkQueueBindSparse(wine_queue_from_handle(params->queue)->queue, params->bindInfoCount, params->pBindInfo, params->fence);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkQueueBindSparse(void *args)
{
    struct vkQueueBindSparse_params *params = args;
    VkBindSparseInfo_host *pBindInfo_host;
    struct conversion_context ctx;

    TRACE("%p, %u, %p, 0x%s\n", params->queue, params->bindInfoCount, params->pBindInfo, wine_dbgstr_longlong(params->fence));

    init_conversion_context(&ctx);
    pBindInfo_host = convert_VkBindSparseInfo_array_win32_to_host(&ctx, params->pBindInfo, params->bindInfoCount);
    params->result = wine_queue_from_handle(params->queue)->device->funcs.p_vkQueueBindSparse(wine_queue_from_handle(params->queue)->queue, params->bindInfoCount, pBindInfo_host, params->fence);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkQueueEndDebugUtilsLabelEXT(void *args)
{
    struct vkQueueEndDebugUtilsLabelEXT_params *params = args;

    TRACE("%p\n", params->queue);

    wine_queue_from_handle(params->queue)->device->funcs.p_vkQueueEndDebugUtilsLabelEXT(wine_queue_from_handle(params->queue)->queue);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkQueueEndDebugUtilsLabelEXT(void *args)
{
    struct vkQueueEndDebugUtilsLabelEXT_params *params = args;

    TRACE("%p\n", params->queue);

    wine_queue_from_handle(params->queue)->device->funcs.p_vkQueueEndDebugUtilsLabelEXT(wine_queue_from_handle(params->queue)->queue);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkQueueInsertDebugUtilsLabelEXT(void *args)
{
    struct vkQueueInsertDebugUtilsLabelEXT_params *params = args;

    TRACE("%p, %p\n", params->queue, params->pLabelInfo);

    wine_queue_from_handle(params->queue)->device->funcs.p_vkQueueInsertDebugUtilsLabelEXT(wine_queue_from_handle(params->queue)->queue, params->pLabelInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkQueueInsertDebugUtilsLabelEXT(void *args)
{
    struct vkQueueInsertDebugUtilsLabelEXT_params *params = args;

    TRACE("%p, %p\n", params->queue, params->pLabelInfo);

    wine_queue_from_handle(params->queue)->device->funcs.p_vkQueueInsertDebugUtilsLabelEXT(wine_queue_from_handle(params->queue)->queue, params->pLabelInfo);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkQueuePresentKHR(void *args)
{
    struct vkQueuePresentKHR_params *params = args;

    TRACE("%p, %p\n", params->queue, params->pPresentInfo);

    params->result = wine_queue_from_handle(params->queue)->device->funcs.p_vkQueuePresentKHR(wine_queue_from_handle(params->queue)->queue, params->pPresentInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkQueuePresentKHR(void *args)
{
    struct vkQueuePresentKHR_params *params = args;

    TRACE("%p, %p\n", params->queue, params->pPresentInfo);

    params->result = wine_queue_from_handle(params->queue)->device->funcs.p_vkQueuePresentKHR(wine_queue_from_handle(params->queue)->queue, params->pPresentInfo);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkQueueSetPerformanceConfigurationINTEL(void *args)
{
    struct vkQueueSetPerformanceConfigurationINTEL_params *params = args;

    TRACE("%p, 0x%s\n", params->queue, wine_dbgstr_longlong(params->configuration));

    params->result = wine_queue_from_handle(params->queue)->device->funcs.p_vkQueueSetPerformanceConfigurationINTEL(wine_queue_from_handle(params->queue)->queue, params->configuration);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkQueueSetPerformanceConfigurationINTEL(void *args)
{
    struct vkQueueSetPerformanceConfigurationINTEL_params *params = args;

    TRACE("%p, 0x%s\n", params->queue, wine_dbgstr_longlong(params->configuration));

    params->result = wine_queue_from_handle(params->queue)->device->funcs.p_vkQueueSetPerformanceConfigurationINTEL(wine_queue_from_handle(params->queue)->queue, params->configuration);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkQueueSubmit(void *args)
{
    struct vkQueueSubmit_params *params = args;
    VkSubmitInfo *pSubmits_host;
    struct conversion_context ctx;

    TRACE("%p, %u, %p, 0x%s\n", params->queue, params->submitCount, params->pSubmits, wine_dbgstr_longlong(params->fence));

    init_conversion_context(&ctx);
    pSubmits_host = convert_VkSubmitInfo_array_win64_to_host(&ctx, params->pSubmits, params->submitCount);
    params->result = wine_queue_from_handle(params->queue)->device->funcs.p_vkQueueSubmit(wine_queue_from_handle(params->queue)->queue, params->submitCount, pSubmits_host, params->fence);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkQueueSubmit(void *args)
{
    struct vkQueueSubmit_params *params = args;
    VkSubmitInfo *pSubmits_host;
    struct conversion_context ctx;

    TRACE("%p, %u, %p, 0x%s\n", params->queue, params->submitCount, params->pSubmits, wine_dbgstr_longlong(params->fence));

    init_conversion_context(&ctx);
    pSubmits_host = convert_VkSubmitInfo_array_win32_to_host(&ctx, params->pSubmits, params->submitCount);
    params->result = wine_queue_from_handle(params->queue)->device->funcs.p_vkQueueSubmit(wine_queue_from_handle(params->queue)->queue, params->submitCount, pSubmits_host, params->fence);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkQueueSubmit2(void *args)
{
    struct vkQueueSubmit2_params *params = args;
    VkSubmitInfo2 *pSubmits_host;
    struct conversion_context ctx;

    TRACE("%p, %u, %p, 0x%s\n", params->queue, params->submitCount, params->pSubmits, wine_dbgstr_longlong(params->fence));

    init_conversion_context(&ctx);
    pSubmits_host = convert_VkSubmitInfo2_array_win64_to_host(&ctx, params->pSubmits, params->submitCount);
    params->result = wine_queue_from_handle(params->queue)->device->funcs.p_vkQueueSubmit2(wine_queue_from_handle(params->queue)->queue, params->submitCount, pSubmits_host, params->fence);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkQueueSubmit2(void *args)
{
    struct vkQueueSubmit2_params *params = args;
    VkSubmitInfo2_host *pSubmits_host;
    struct conversion_context ctx;

    TRACE("%p, %u, %p, 0x%s\n", params->queue, params->submitCount, params->pSubmits, wine_dbgstr_longlong(params->fence));

    init_conversion_context(&ctx);
    pSubmits_host = convert_VkSubmitInfo2_array_win32_to_host(&ctx, params->pSubmits, params->submitCount);
    params->result = wine_queue_from_handle(params->queue)->device->funcs.p_vkQueueSubmit2(wine_queue_from_handle(params->queue)->queue, params->submitCount, pSubmits_host, params->fence);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkQueueSubmit2KHR(void *args)
{
    struct vkQueueSubmit2KHR_params *params = args;
    VkSubmitInfo2 *pSubmits_host;
    struct conversion_context ctx;

    TRACE("%p, %u, %p, 0x%s\n", params->queue, params->submitCount, params->pSubmits, wine_dbgstr_longlong(params->fence));

    init_conversion_context(&ctx);
    pSubmits_host = convert_VkSubmitInfo2_array_win64_to_host(&ctx, params->pSubmits, params->submitCount);
    params->result = wine_queue_from_handle(params->queue)->device->funcs.p_vkQueueSubmit2KHR(wine_queue_from_handle(params->queue)->queue, params->submitCount, pSubmits_host, params->fence);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkQueueSubmit2KHR(void *args)
{
    struct vkQueueSubmit2KHR_params *params = args;
    VkSubmitInfo2_host *pSubmits_host;
    struct conversion_context ctx;

    TRACE("%p, %u, %p, 0x%s\n", params->queue, params->submitCount, params->pSubmits, wine_dbgstr_longlong(params->fence));

    init_conversion_context(&ctx);
    pSubmits_host = convert_VkSubmitInfo2_array_win32_to_host(&ctx, params->pSubmits, params->submitCount);
    params->result = wine_queue_from_handle(params->queue)->device->funcs.p_vkQueueSubmit2KHR(wine_queue_from_handle(params->queue)->queue, params->submitCount, pSubmits_host, params->fence);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkQueueWaitIdle(void *args)
{
    struct vkQueueWaitIdle_params *params = args;

    TRACE("%p\n", params->queue);

    params->result = wine_queue_from_handle(params->queue)->device->funcs.p_vkQueueWaitIdle(wine_queue_from_handle(params->queue)->queue);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkQueueWaitIdle(void *args)
{
    struct vkQueueWaitIdle_params *params = args;

    TRACE("%p\n", params->queue);

    params->result = wine_queue_from_handle(params->queue)->device->funcs.p_vkQueueWaitIdle(wine_queue_from_handle(params->queue)->queue);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkReleasePerformanceConfigurationINTEL(void *args)
{
    struct vkReleasePerformanceConfigurationINTEL_params *params = args;

    TRACE("%p, 0x%s\n", params->device, wine_dbgstr_longlong(params->configuration));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkReleasePerformanceConfigurationINTEL(wine_device_from_handle(params->device)->device, params->configuration);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkReleasePerformanceConfigurationINTEL(void *args)
{
    struct vkReleasePerformanceConfigurationINTEL_params *params = args;

    TRACE("%p, 0x%s\n", params->device, wine_dbgstr_longlong(params->configuration));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkReleasePerformanceConfigurationINTEL(wine_device_from_handle(params->device)->device, params->configuration);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkReleaseProfilingLockKHR(void *args)
{
    struct vkReleaseProfilingLockKHR_params *params = args;

    TRACE("%p\n", params->device);

    wine_device_from_handle(params->device)->funcs.p_vkReleaseProfilingLockKHR(wine_device_from_handle(params->device)->device);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkReleaseProfilingLockKHR(void *args)
{
    struct vkReleaseProfilingLockKHR_params *params = args;

    TRACE("%p\n", params->device);

    wine_device_from_handle(params->device)->funcs.p_vkReleaseProfilingLockKHR(wine_device_from_handle(params->device)->device);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkResetCommandBuffer(void *args)
{
    struct vkResetCommandBuffer_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->flags);

    params->result = wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkResetCommandBuffer(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->flags);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkResetCommandBuffer(void *args)
{
    struct vkResetCommandBuffer_params *params = args;

    TRACE("%p, %#x\n", params->commandBuffer, params->flags);

    params->result = wine_cmd_buffer_from_handle(params->commandBuffer)->device->funcs.p_vkResetCommandBuffer(wine_cmd_buffer_from_handle(params->commandBuffer)->command_buffer, params->flags);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkResetCommandPool(void *args)
{
    struct vkResetCommandPool_params *params = args;

    TRACE("%p, 0x%s, %#x\n", params->device, wine_dbgstr_longlong(params->commandPool), params->flags);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkResetCommandPool(wine_device_from_handle(params->device)->device, wine_cmd_pool_from_handle(params->commandPool)->command_pool, params->flags);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkResetCommandPool(void *args)
{
    struct vkResetCommandPool_params *params = args;

    TRACE("%p, 0x%s, %#x\n", params->device, wine_dbgstr_longlong(params->commandPool), params->flags);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkResetCommandPool(wine_device_from_handle(params->device)->device, wine_cmd_pool_from_handle(params->commandPool)->command_pool, params->flags);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkResetDescriptorPool(void *args)
{
    struct vkResetDescriptorPool_params *params = args;

    TRACE("%p, 0x%s, %#x\n", params->device, wine_dbgstr_longlong(params->descriptorPool), params->flags);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkResetDescriptorPool(wine_device_from_handle(params->device)->device, params->descriptorPool, params->flags);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkResetDescriptorPool(void *args)
{
    struct vkResetDescriptorPool_params *params = args;

    TRACE("%p, 0x%s, %#x\n", params->device, wine_dbgstr_longlong(params->descriptorPool), params->flags);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkResetDescriptorPool(wine_device_from_handle(params->device)->device, params->descriptorPool, params->flags);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkResetEvent(void *args)
{
    struct vkResetEvent_params *params = args;

    TRACE("%p, 0x%s\n", params->device, wine_dbgstr_longlong(params->event));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkResetEvent(wine_device_from_handle(params->device)->device, params->event);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkResetEvent(void *args)
{
    struct vkResetEvent_params *params = args;

    TRACE("%p, 0x%s\n", params->device, wine_dbgstr_longlong(params->event));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkResetEvent(wine_device_from_handle(params->device)->device, params->event);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkResetFences(void *args)
{
    struct vkResetFences_params *params = args;

    TRACE("%p, %u, %p\n", params->device, params->fenceCount, params->pFences);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkResetFences(wine_device_from_handle(params->device)->device, params->fenceCount, params->pFences);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkResetFences(void *args)
{
    struct vkResetFences_params *params = args;

    TRACE("%p, %u, %p\n", params->device, params->fenceCount, params->pFences);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkResetFences(wine_device_from_handle(params->device)->device, params->fenceCount, params->pFences);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkResetQueryPool(void *args)
{
    struct vkResetQueryPool_params *params = args;

    TRACE("%p, 0x%s, %u, %u\n", params->device, wine_dbgstr_longlong(params->queryPool), params->firstQuery, params->queryCount);

    wine_device_from_handle(params->device)->funcs.p_vkResetQueryPool(wine_device_from_handle(params->device)->device, params->queryPool, params->firstQuery, params->queryCount);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkResetQueryPool(void *args)
{
    struct vkResetQueryPool_params *params = args;

    TRACE("%p, 0x%s, %u, %u\n", params->device, wine_dbgstr_longlong(params->queryPool), params->firstQuery, params->queryCount);

    wine_device_from_handle(params->device)->funcs.p_vkResetQueryPool(wine_device_from_handle(params->device)->device, params->queryPool, params->firstQuery, params->queryCount);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkResetQueryPoolEXT(void *args)
{
    struct vkResetQueryPoolEXT_params *params = args;

    TRACE("%p, 0x%s, %u, %u\n", params->device, wine_dbgstr_longlong(params->queryPool), params->firstQuery, params->queryCount);

    wine_device_from_handle(params->device)->funcs.p_vkResetQueryPoolEXT(wine_device_from_handle(params->device)->device, params->queryPool, params->firstQuery, params->queryCount);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkResetQueryPoolEXT(void *args)
{
    struct vkResetQueryPoolEXT_params *params = args;

    TRACE("%p, 0x%s, %u, %u\n", params->device, wine_dbgstr_longlong(params->queryPool), params->firstQuery, params->queryCount);

    wine_device_from_handle(params->device)->funcs.p_vkResetQueryPoolEXT(wine_device_from_handle(params->device)->device, params->queryPool, params->firstQuery, params->queryCount);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkSetDebugUtilsObjectNameEXT(void *args)
{
    struct vkSetDebugUtilsObjectNameEXT_params *params = args;
    VkDebugUtilsObjectNameInfoEXT pNameInfo_host;

    TRACE("%p, %p\n", params->device, params->pNameInfo);

    convert_VkDebugUtilsObjectNameInfoEXT_win64_to_host(params->pNameInfo, &pNameInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkSetDebugUtilsObjectNameEXT(wine_device_from_handle(params->device)->device, &pNameInfo_host);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkSetDebugUtilsObjectNameEXT(void *args)
{
    struct vkSetDebugUtilsObjectNameEXT_params *params = args;
    VkDebugUtilsObjectNameInfoEXT_host pNameInfo_host;

    TRACE("%p, %p\n", params->device, params->pNameInfo);

    convert_VkDebugUtilsObjectNameInfoEXT_win32_to_host(params->pNameInfo, &pNameInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkSetDebugUtilsObjectNameEXT(wine_device_from_handle(params->device)->device, &pNameInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkSetDebugUtilsObjectTagEXT(void *args)
{
    struct vkSetDebugUtilsObjectTagEXT_params *params = args;
    VkDebugUtilsObjectTagInfoEXT pTagInfo_host;

    TRACE("%p, %p\n", params->device, params->pTagInfo);

    convert_VkDebugUtilsObjectTagInfoEXT_win64_to_host(params->pTagInfo, &pTagInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkSetDebugUtilsObjectTagEXT(wine_device_from_handle(params->device)->device, &pTagInfo_host);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkSetDebugUtilsObjectTagEXT(void *args)
{
    struct vkSetDebugUtilsObjectTagEXT_params *params = args;
    VkDebugUtilsObjectTagInfoEXT_host pTagInfo_host;

    TRACE("%p, %p\n", params->device, params->pTagInfo);

    convert_VkDebugUtilsObjectTagInfoEXT_win32_to_host(params->pTagInfo, &pTagInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkSetDebugUtilsObjectTagEXT(wine_device_from_handle(params->device)->device, &pTagInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkSetDeviceMemoryPriorityEXT(void *args)
{
    struct vkSetDeviceMemoryPriorityEXT_params *params = args;

    TRACE("%p, 0x%s, %f\n", params->device, wine_dbgstr_longlong(params->memory), params->priority);

    wine_device_from_handle(params->device)->funcs.p_vkSetDeviceMemoryPriorityEXT(wine_device_from_handle(params->device)->device, params->memory, params->priority);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkSetDeviceMemoryPriorityEXT(void *args)
{
    struct vkSetDeviceMemoryPriorityEXT_params *params = args;

    TRACE("%p, 0x%s, %f\n", params->device, wine_dbgstr_longlong(params->memory), params->priority);

    wine_device_from_handle(params->device)->funcs.p_vkSetDeviceMemoryPriorityEXT(wine_device_from_handle(params->device)->device, params->memory, params->priority);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkSetEvent(void *args)
{
    struct vkSetEvent_params *params = args;

    TRACE("%p, 0x%s\n", params->device, wine_dbgstr_longlong(params->event));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkSetEvent(wine_device_from_handle(params->device)->device, params->event);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkSetEvent(void *args)
{
    struct vkSetEvent_params *params = args;

    TRACE("%p, 0x%s\n", params->device, wine_dbgstr_longlong(params->event));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkSetEvent(wine_device_from_handle(params->device)->device, params->event);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkSetPrivateData(void *args)
{
    struct vkSetPrivateData_params *params = args;

    TRACE("%p, %#x, 0x%s, 0x%s, 0x%s\n", params->device, params->objectType, wine_dbgstr_longlong(params->objectHandle), wine_dbgstr_longlong(params->privateDataSlot), wine_dbgstr_longlong(params->data));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkSetPrivateData(wine_device_from_handle(params->device)->device, params->objectType, wine_vk_unwrap_handle(params->objectType, params->objectHandle), params->privateDataSlot, params->data);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkSetPrivateData(void *args)
{
    struct vkSetPrivateData_params *params = args;

    TRACE("%p, %#x, 0x%s, 0x%s, 0x%s\n", params->device, params->objectType, wine_dbgstr_longlong(params->objectHandle), wine_dbgstr_longlong(params->privateDataSlot), wine_dbgstr_longlong(params->data));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkSetPrivateData(wine_device_from_handle(params->device)->device, params->objectType, wine_vk_unwrap_handle(params->objectType, params->objectHandle), params->privateDataSlot, params->data);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkSetPrivateDataEXT(void *args)
{
    struct vkSetPrivateDataEXT_params *params = args;

    TRACE("%p, %#x, 0x%s, 0x%s, 0x%s\n", params->device, params->objectType, wine_dbgstr_longlong(params->objectHandle), wine_dbgstr_longlong(params->privateDataSlot), wine_dbgstr_longlong(params->data));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkSetPrivateDataEXT(wine_device_from_handle(params->device)->device, params->objectType, wine_vk_unwrap_handle(params->objectType, params->objectHandle), params->privateDataSlot, params->data);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkSetPrivateDataEXT(void *args)
{
    struct vkSetPrivateDataEXT_params *params = args;

    TRACE("%p, %#x, 0x%s, 0x%s, 0x%s\n", params->device, params->objectType, wine_dbgstr_longlong(params->objectHandle), wine_dbgstr_longlong(params->privateDataSlot), wine_dbgstr_longlong(params->data));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkSetPrivateDataEXT(wine_device_from_handle(params->device)->device, params->objectType, wine_vk_unwrap_handle(params->objectType, params->objectHandle), params->privateDataSlot, params->data);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkSignalSemaphore(void *args)
{
    struct vkSignalSemaphore_params *params = args;

    TRACE("%p, %p\n", params->device, params->pSignalInfo);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkSignalSemaphore(wine_device_from_handle(params->device)->device, params->pSignalInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkSignalSemaphore(void *args)
{
    struct vkSignalSemaphore_params *params = args;
    VkSemaphoreSignalInfo_host pSignalInfo_host;

    TRACE("%p, %p\n", params->device, params->pSignalInfo);

    convert_VkSemaphoreSignalInfo_win32_to_host(params->pSignalInfo, &pSignalInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkSignalSemaphore(wine_device_from_handle(params->device)->device, &pSignalInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkSignalSemaphoreKHR(void *args)
{
    struct vkSignalSemaphoreKHR_params *params = args;

    TRACE("%p, %p\n", params->device, params->pSignalInfo);

    params->result = wine_device_from_handle(params->device)->funcs.p_vkSignalSemaphoreKHR(wine_device_from_handle(params->device)->device, params->pSignalInfo);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkSignalSemaphoreKHR(void *args)
{
    struct vkSignalSemaphoreKHR_params *params = args;
    VkSemaphoreSignalInfo_host pSignalInfo_host;

    TRACE("%p, %p\n", params->device, params->pSignalInfo);

    convert_VkSemaphoreSignalInfo_win32_to_host(params->pSignalInfo, &pSignalInfo_host);
    params->result = wine_device_from_handle(params->device)->funcs.p_vkSignalSemaphoreKHR(wine_device_from_handle(params->device)->device, &pSignalInfo_host);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkSubmitDebugUtilsMessageEXT(void *args)
{
    struct vkSubmitDebugUtilsMessageEXT_params *params = args;
    VkDebugUtilsMessengerCallbackDataEXT pCallbackData_host;
    struct conversion_context ctx;

    TRACE("%p, %#x, %#x, %p\n", params->instance, params->messageSeverity, params->messageTypes, params->pCallbackData);

    init_conversion_context(&ctx);
    convert_VkDebugUtilsMessengerCallbackDataEXT_win64_to_host(&ctx, params->pCallbackData, &pCallbackData_host);
    wine_instance_from_handle(params->instance)->funcs.p_vkSubmitDebugUtilsMessageEXT(wine_instance_from_handle(params->instance)->instance, params->messageSeverity, params->messageTypes, &pCallbackData_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkSubmitDebugUtilsMessageEXT(void *args)
{
    struct vkSubmitDebugUtilsMessageEXT_params *params = args;
    VkDebugUtilsMessengerCallbackDataEXT_host pCallbackData_host;
    struct conversion_context ctx;

    TRACE("%p, %#x, %#x, %p\n", params->instance, params->messageSeverity, params->messageTypes, params->pCallbackData);

    init_conversion_context(&ctx);
    convert_VkDebugUtilsMessengerCallbackDataEXT_win32_to_host(&ctx, params->pCallbackData, &pCallbackData_host);
    wine_instance_from_handle(params->instance)->funcs.p_vkSubmitDebugUtilsMessageEXT(wine_instance_from_handle(params->instance)->instance, params->messageSeverity, params->messageTypes, &pCallbackData_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkTrimCommandPool(void *args)
{
    struct vkTrimCommandPool_params *params = args;

    TRACE("%p, 0x%s, %#x\n", params->device, wine_dbgstr_longlong(params->commandPool), params->flags);

    wine_device_from_handle(params->device)->funcs.p_vkTrimCommandPool(wine_device_from_handle(params->device)->device, wine_cmd_pool_from_handle(params->commandPool)->command_pool, params->flags);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkTrimCommandPool(void *args)
{
    struct vkTrimCommandPool_params *params = args;

    TRACE("%p, 0x%s, %#x\n", params->device, wine_dbgstr_longlong(params->commandPool), params->flags);

    wine_device_from_handle(params->device)->funcs.p_vkTrimCommandPool(wine_device_from_handle(params->device)->device, wine_cmd_pool_from_handle(params->commandPool)->command_pool, params->flags);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkTrimCommandPoolKHR(void *args)
{
    struct vkTrimCommandPoolKHR_params *params = args;

    TRACE("%p, 0x%s, %#x\n", params->device, wine_dbgstr_longlong(params->commandPool), params->flags);

    wine_device_from_handle(params->device)->funcs.p_vkTrimCommandPoolKHR(wine_device_from_handle(params->device)->device, wine_cmd_pool_from_handle(params->commandPool)->command_pool, params->flags);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkTrimCommandPoolKHR(void *args)
{
    struct vkTrimCommandPoolKHR_params *params = args;

    TRACE("%p, 0x%s, %#x\n", params->device, wine_dbgstr_longlong(params->commandPool), params->flags);

    wine_device_from_handle(params->device)->funcs.p_vkTrimCommandPoolKHR(wine_device_from_handle(params->device)->device, wine_cmd_pool_from_handle(params->commandPool)->command_pool, params->flags);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkUninitializePerformanceApiINTEL(void *args)
{
    struct vkUninitializePerformanceApiINTEL_params *params = args;

    TRACE("%p\n", params->device);

    wine_device_from_handle(params->device)->funcs.p_vkUninitializePerformanceApiINTEL(wine_device_from_handle(params->device)->device);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkUninitializePerformanceApiINTEL(void *args)
{
    struct vkUninitializePerformanceApiINTEL_params *params = args;

    TRACE("%p\n", params->device);

    wine_device_from_handle(params->device)->funcs.p_vkUninitializePerformanceApiINTEL(wine_device_from_handle(params->device)->device);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkUnmapMemory(void *args)
{
    struct vkUnmapMemory_params *params = args;

    TRACE("%p, 0x%s\n", params->device, wine_dbgstr_longlong(params->memory));

    wine_device_from_handle(params->device)->funcs.p_vkUnmapMemory(wine_device_from_handle(params->device)->device, params->memory);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkUnmapMemory(void *args)
{
    struct vkUnmapMemory_params *params = args;

    TRACE("%p, 0x%s\n", params->device, wine_dbgstr_longlong(params->memory));

    wine_device_from_handle(params->device)->funcs.p_vkUnmapMemory(wine_device_from_handle(params->device)->device, params->memory);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkUpdateDescriptorSetWithTemplate(void *args)
{
    struct vkUpdateDescriptorSetWithTemplate_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->descriptorSet), wine_dbgstr_longlong(params->descriptorUpdateTemplate), params->pData);

    wine_device_from_handle(params->device)->funcs.p_vkUpdateDescriptorSetWithTemplate(wine_device_from_handle(params->device)->device, params->descriptorSet, params->descriptorUpdateTemplate, params->pData);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkUpdateDescriptorSetWithTemplate(void *args)
{
    struct vkUpdateDescriptorSetWithTemplate_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->descriptorSet), wine_dbgstr_longlong(params->descriptorUpdateTemplate), params->pData);

    wine_device_from_handle(params->device)->funcs.p_vkUpdateDescriptorSetWithTemplate(wine_device_from_handle(params->device)->device, params->descriptorSet, params->descriptorUpdateTemplate, params->pData);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkUpdateDescriptorSetWithTemplateKHR(void *args)
{
    struct vkUpdateDescriptorSetWithTemplateKHR_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->descriptorSet), wine_dbgstr_longlong(params->descriptorUpdateTemplate), params->pData);

    wine_device_from_handle(params->device)->funcs.p_vkUpdateDescriptorSetWithTemplateKHR(wine_device_from_handle(params->device)->device, params->descriptorSet, params->descriptorUpdateTemplate, params->pData);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkUpdateDescriptorSetWithTemplateKHR(void *args)
{
    struct vkUpdateDescriptorSetWithTemplateKHR_params *params = args;

    TRACE("%p, 0x%s, 0x%s, %p\n", params->device, wine_dbgstr_longlong(params->descriptorSet), wine_dbgstr_longlong(params->descriptorUpdateTemplate), params->pData);

    wine_device_from_handle(params->device)->funcs.p_vkUpdateDescriptorSetWithTemplateKHR(wine_device_from_handle(params->device)->device, params->descriptorSet, params->descriptorUpdateTemplate, params->pData);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkUpdateDescriptorSets(void *args)
{
    struct vkUpdateDescriptorSets_params *params = args;

    TRACE("%p, %u, %p, %u, %p\n", params->device, params->descriptorWriteCount, params->pDescriptorWrites, params->descriptorCopyCount, params->pDescriptorCopies);

    wine_device_from_handle(params->device)->funcs.p_vkUpdateDescriptorSets(wine_device_from_handle(params->device)->device, params->descriptorWriteCount, params->pDescriptorWrites, params->descriptorCopyCount, params->pDescriptorCopies);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkUpdateDescriptorSets(void *args)
{
    struct vkUpdateDescriptorSets_params *params = args;
    VkWriteDescriptorSet_host *pDescriptorWrites_host;
    VkCopyDescriptorSet_host *pDescriptorCopies_host;
    struct conversion_context ctx;

    TRACE("%p, %u, %p, %u, %p\n", params->device, params->descriptorWriteCount, params->pDescriptorWrites, params->descriptorCopyCount, params->pDescriptorCopies);

    init_conversion_context(&ctx);
    pDescriptorWrites_host = convert_VkWriteDescriptorSet_array_win32_to_host(&ctx, params->pDescriptorWrites, params->descriptorWriteCount);
    pDescriptorCopies_host = convert_VkCopyDescriptorSet_array_win32_to_host(&ctx, params->pDescriptorCopies, params->descriptorCopyCount);
    wine_device_from_handle(params->device)->funcs.p_vkUpdateDescriptorSets(wine_device_from_handle(params->device)->device, params->descriptorWriteCount, pDescriptorWrites_host, params->descriptorCopyCount, pDescriptorCopies_host);
    free_conversion_context(&ctx);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkWaitForFences(void *args)
{
    struct vkWaitForFences_params *params = args;

    TRACE("%p, %u, %p, %u, 0x%s\n", params->device, params->fenceCount, params->pFences, params->waitAll, wine_dbgstr_longlong(params->timeout));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkWaitForFences(wine_device_from_handle(params->device)->device, params->fenceCount, params->pFences, params->waitAll, params->timeout);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkWaitForFences(void *args)
{
    struct vkWaitForFences_params *params = args;

    TRACE("%p, %u, %p, %u, 0x%s\n", params->device, params->fenceCount, params->pFences, params->waitAll, wine_dbgstr_longlong(params->timeout));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkWaitForFences(wine_device_from_handle(params->device)->device, params->fenceCount, params->pFences, params->waitAll, params->timeout);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkWaitForPresentKHR(void *args)
{
    struct vkWaitForPresentKHR_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s\n", params->device, wine_dbgstr_longlong(params->swapchain), wine_dbgstr_longlong(params->presentId), wine_dbgstr_longlong(params->timeout));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkWaitForPresentKHR(wine_device_from_handle(params->device)->device, params->swapchain, params->presentId, params->timeout);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkWaitForPresentKHR(void *args)
{
    struct vkWaitForPresentKHR_params *params = args;

    TRACE("%p, 0x%s, 0x%s, 0x%s\n", params->device, wine_dbgstr_longlong(params->swapchain), wine_dbgstr_longlong(params->presentId), wine_dbgstr_longlong(params->timeout));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkWaitForPresentKHR(wine_device_from_handle(params->device)->device, params->swapchain, params->presentId, params->timeout);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkWaitSemaphores(void *args)
{
    struct vkWaitSemaphores_params *params = args;

    TRACE("%p, %p, 0x%s\n", params->device, params->pWaitInfo, wine_dbgstr_longlong(params->timeout));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkWaitSemaphores(wine_device_from_handle(params->device)->device, params->pWaitInfo, params->timeout);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkWaitSemaphores(void *args)
{
    struct vkWaitSemaphores_params *params = args;

    TRACE("%p, %p, 0x%s\n", params->device, params->pWaitInfo, wine_dbgstr_longlong(params->timeout));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkWaitSemaphores(wine_device_from_handle(params->device)->device, params->pWaitInfo, params->timeout);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkWaitSemaphoresKHR(void *args)
{
    struct vkWaitSemaphoresKHR_params *params = args;

    TRACE("%p, %p, 0x%s\n", params->device, params->pWaitInfo, wine_dbgstr_longlong(params->timeout));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkWaitSemaphoresKHR(wine_device_from_handle(params->device)->device, params->pWaitInfo, params->timeout);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkWaitSemaphoresKHR(void *args)
{
    struct vkWaitSemaphoresKHR_params *params = args;

    TRACE("%p, %p, 0x%s\n", params->device, params->pWaitInfo, wine_dbgstr_longlong(params->timeout));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkWaitSemaphoresKHR(wine_device_from_handle(params->device)->device, params->pWaitInfo, params->timeout);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkWriteAccelerationStructuresPropertiesKHR(void *args)
{
    struct vkWriteAccelerationStructuresPropertiesKHR_params *params = args;

    TRACE("%p, %u, %p, %#x, 0x%s, %p, 0x%s\n", params->device, params->accelerationStructureCount, params->pAccelerationStructures, params->queryType, wine_dbgstr_longlong(params->dataSize), params->pData, wine_dbgstr_longlong(params->stride));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkWriteAccelerationStructuresPropertiesKHR(wine_device_from_handle(params->device)->device, params->accelerationStructureCount, params->pAccelerationStructures, params->queryType, params->dataSize, params->pData, params->stride);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkWriteAccelerationStructuresPropertiesKHR(void *args)
{
    struct vkWriteAccelerationStructuresPropertiesKHR_params *params = args;

    TRACE("%p, %u, %p, %#x, 0x%s, %p, 0x%s\n", params->device, params->accelerationStructureCount, params->pAccelerationStructures, params->queryType, wine_dbgstr_longlong(params->dataSize), params->pData, wine_dbgstr_longlong(params->stride));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkWriteAccelerationStructuresPropertiesKHR(wine_device_from_handle(params->device)->device, params->accelerationStructureCount, params->pAccelerationStructures, params->queryType, params->dataSize, params->pData, params->stride);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

#if !defined(USE_STRUCT_CONVERSION)

static NTSTATUS thunk64_vkWriteMicromapsPropertiesEXT(void *args)
{
    struct vkWriteMicromapsPropertiesEXT_params *params = args;

    TRACE("%p, %u, %p, %#x, 0x%s, %p, 0x%s\n", params->device, params->micromapCount, params->pMicromaps, params->queryType, wine_dbgstr_longlong(params->dataSize), params->pData, wine_dbgstr_longlong(params->stride));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkWriteMicromapsPropertiesEXT(wine_device_from_handle(params->device)->device, params->micromapCount, params->pMicromaps, params->queryType, params->dataSize, params->pData, params->stride);
    return STATUS_SUCCESS;
}

#else /* USE_STRUCT_CONVERSION */

static NTSTATUS thunk32_vkWriteMicromapsPropertiesEXT(void *args)
{
    struct vkWriteMicromapsPropertiesEXT_params *params = args;

    TRACE("%p, %u, %p, %#x, 0x%s, %p, 0x%s\n", params->device, params->micromapCount, params->pMicromaps, params->queryType, wine_dbgstr_longlong(params->dataSize), params->pData, wine_dbgstr_longlong(params->stride));

    params->result = wine_device_from_handle(params->device)->funcs.p_vkWriteMicromapsPropertiesEXT(wine_device_from_handle(params->device)->device, params->micromapCount, params->pMicromaps, params->queryType, params->dataSize, params->pData, params->stride);
    return STATUS_SUCCESS;
}

#endif /* USE_STRUCT_CONVERSION */

static const char * const vk_device_extensions[] =
{
    "VK_AMD_buffer_marker",
    "VK_AMD_device_coherent_memory",
    "VK_AMD_draw_indirect_count",
    "VK_AMD_gcn_shader",
    "VK_AMD_gpu_shader_half_float",
    "VK_AMD_gpu_shader_int16",
    "VK_AMD_memory_overallocation_behavior",
    "VK_AMD_mixed_attachment_samples",
    "VK_AMD_negative_viewport_height",
    "VK_AMD_pipeline_compiler_control",
    "VK_AMD_rasterization_order",
    "VK_AMD_shader_ballot",
    "VK_AMD_shader_core_properties",
    "VK_AMD_shader_core_properties2",
    "VK_AMD_shader_early_and_late_fragment_tests",
    "VK_AMD_shader_explicit_vertex_parameter",
    "VK_AMD_shader_fragment_mask",
    "VK_AMD_shader_image_load_store_lod",
    "VK_AMD_shader_info",
    "VK_AMD_shader_trinary_minmax",
    "VK_AMD_texture_gather_bias_lod",
    "VK_ARM_rasterization_order_attachment_access",
    "VK_ARM_shader_core_builtins",
    "VK_EXT_4444_formats",
    "VK_EXT_astc_decode_mode",
    "VK_EXT_attachment_feedback_loop_layout",
    "VK_EXT_blend_operation_advanced",
    "VK_EXT_border_color_swizzle",
    "VK_EXT_buffer_device_address",
    "VK_EXT_calibrated_timestamps",
    "VK_EXT_color_write_enable",
    "VK_EXT_conditional_rendering",
    "VK_EXT_conservative_rasterization",
    "VK_EXT_custom_border_color",
    "VK_EXT_debug_marker",
    "VK_EXT_depth_clamp_zero_one",
    "VK_EXT_depth_clip_control",
    "VK_EXT_depth_clip_enable",
    "VK_EXT_depth_range_unrestricted",
    "VK_EXT_descriptor_indexing",
    "VK_EXT_device_address_binding_report",
    "VK_EXT_device_fault",
    "VK_EXT_discard_rectangles",
    "VK_EXT_extended_dynamic_state",
    "VK_EXT_extended_dynamic_state2",
    "VK_EXT_extended_dynamic_state3",
    "VK_EXT_external_memory_host",
    "VK_EXT_filter_cubic",
    "VK_EXT_fragment_density_map",
    "VK_EXT_fragment_density_map2",
    "VK_EXT_fragment_shader_interlock",
    "VK_EXT_global_priority",
    "VK_EXT_global_priority_query",
    "VK_EXT_graphics_pipeline_library",
    "VK_EXT_host_query_reset",
    "VK_EXT_image_2d_view_of_3d",
    "VK_EXT_image_compression_control",
    "VK_EXT_image_compression_control_swapchain",
    "VK_EXT_image_robustness",
    "VK_EXT_image_view_min_lod",
    "VK_EXT_index_type_uint8",
    "VK_EXT_inline_uniform_block",
    "VK_EXT_legacy_dithering",
    "VK_EXT_line_rasterization",
    "VK_EXT_load_store_op_none",
    "VK_EXT_memory_budget",
    "VK_EXT_memory_priority",
    "VK_EXT_mesh_shader",
    "VK_EXT_multi_draw",
    "VK_EXT_multisampled_render_to_single_sampled",
    "VK_EXT_mutable_descriptor_type",
    "VK_EXT_non_seamless_cube_map",
    "VK_EXT_opacity_micromap",
    "VK_EXT_pageable_device_local_memory",
    "VK_EXT_pci_bus_info",
    "VK_EXT_pipeline_creation_cache_control",
    "VK_EXT_pipeline_creation_feedback",
    "VK_EXT_pipeline_properties",
    "VK_EXT_pipeline_protected_access",
    "VK_EXT_pipeline_robustness",
    "VK_EXT_post_depth_coverage",
    "VK_EXT_primitive_topology_list_restart",
    "VK_EXT_primitives_generated_query",
    "VK_EXT_private_data",
    "VK_EXT_provoking_vertex",
    "VK_EXT_queue_family_foreign",
    "VK_EXT_rasterization_order_attachment_access",
    "VK_EXT_rgba10x6_formats",
    "VK_EXT_robustness2",
    "VK_EXT_sample_locations",
    "VK_EXT_sampler_filter_minmax",
    "VK_EXT_scalar_block_layout",
    "VK_EXT_separate_stencil_usage",
    "VK_EXT_shader_atomic_float",
    "VK_EXT_shader_atomic_float2",
    "VK_EXT_shader_demote_to_helper_invocation",
    "VK_EXT_shader_image_atomic_int64",
    "VK_EXT_shader_module_identifier",
    "VK_EXT_shader_stencil_export",
    "VK_EXT_shader_subgroup_ballot",
    "VK_EXT_shader_subgroup_vote",
    "VK_EXT_shader_viewport_index_layer",
    "VK_EXT_subgroup_size_control",
    "VK_EXT_subpass_merge_feedback",
    "VK_EXT_texel_buffer_alignment",
    "VK_EXT_texture_compression_astc_hdr",
    "VK_EXT_tooling_info",
    "VK_EXT_transform_feedback",
    "VK_EXT_validation_cache",
    "VK_EXT_vertex_attribute_divisor",
    "VK_EXT_vertex_input_dynamic_state",
    "VK_EXT_ycbcr_2plane_444_formats",
    "VK_EXT_ycbcr_image_arrays",
    "VK_GOOGLE_decorate_string",
    "VK_GOOGLE_hlsl_functionality1",
    "VK_GOOGLE_user_type",
    "VK_HUAWEI_invocation_mask",
    "VK_HUAWEI_subpass_shading",
    "VK_IMG_filter_cubic",
    "VK_IMG_format_pvrtc",
    "VK_INTEL_performance_query",
    "VK_INTEL_shader_integer_functions2",
    "VK_KHR_16bit_storage",
    "VK_KHR_8bit_storage",
    "VK_KHR_acceleration_structure",
    "VK_KHR_bind_memory2",
    "VK_KHR_buffer_device_address",
    "VK_KHR_copy_commands2",
    "VK_KHR_create_renderpass2",
    "VK_KHR_dedicated_allocation",
    "VK_KHR_deferred_host_operations",
    "VK_KHR_depth_stencil_resolve",
    "VK_KHR_descriptor_update_template",
    "VK_KHR_device_group",
    "VK_KHR_draw_indirect_count",
    "VK_KHR_driver_properties",
    "VK_KHR_dynamic_rendering",
    "VK_KHR_external_fence",
    "VK_KHR_external_memory",
    "VK_KHR_external_semaphore",
    "VK_KHR_format_feature_flags2",
    "VK_KHR_fragment_shader_barycentric",
    "VK_KHR_fragment_shading_rate",
    "VK_KHR_get_memory_requirements2",
    "VK_KHR_global_priority",
    "VK_KHR_image_format_list",
    "VK_KHR_imageless_framebuffer",
    "VK_KHR_incremental_present",
    "VK_KHR_maintenance1",
    "VK_KHR_maintenance2",
    "VK_KHR_maintenance3",
    "VK_KHR_maintenance4",
    "VK_KHR_multiview",
    "VK_KHR_performance_query",
    "VK_KHR_pipeline_executable_properties",
    "VK_KHR_pipeline_library",
    "VK_KHR_present_id",
    "VK_KHR_present_wait",
    "VK_KHR_push_descriptor",
    "VK_KHR_ray_query",
    "VK_KHR_ray_tracing_maintenance1",
    "VK_KHR_ray_tracing_pipeline",
    "VK_KHR_relaxed_block_layout",
    "VK_KHR_sampler_mirror_clamp_to_edge",
    "VK_KHR_sampler_ycbcr_conversion",
    "VK_KHR_separate_depth_stencil_layouts",
    "VK_KHR_shader_atomic_int64",
    "VK_KHR_shader_clock",
    "VK_KHR_shader_draw_parameters",
    "VK_KHR_shader_float16_int8",
    "VK_KHR_shader_float_controls",
    "VK_KHR_shader_integer_dot_product",
    "VK_KHR_shader_non_semantic_info",
    "VK_KHR_shader_subgroup_extended_types",
    "VK_KHR_shader_subgroup_uniform_control_flow",
    "VK_KHR_shader_terminate_invocation",
    "VK_KHR_spirv_1_4",
    "VK_KHR_storage_buffer_storage_class",
    "VK_KHR_swapchain",
    "VK_KHR_swapchain_mutable_format",
    "VK_KHR_synchronization2",
    "VK_KHR_timeline_semaphore",
    "VK_KHR_uniform_buffer_standard_layout",
    "VK_KHR_variable_pointers",
    "VK_KHR_vulkan_memory_model",
    "VK_KHR_workgroup_memory_explicit_layout",
    "VK_KHR_zero_initialize_workgroup_memory",
    "VK_NVX_binary_import",
    "VK_NVX_image_view_handle",
    "VK_NV_clip_space_w_scaling",
    "VK_NV_compute_shader_derivatives",
    "VK_NV_cooperative_matrix",
    "VK_NV_copy_memory_indirect",
    "VK_NV_corner_sampled_image",
    "VK_NV_coverage_reduction_mode",
    "VK_NV_dedicated_allocation",
    "VK_NV_dedicated_allocation_image_aliasing",
    "VK_NV_device_diagnostic_checkpoints",
    "VK_NV_device_diagnostics_config",
    "VK_NV_device_generated_commands",
    "VK_NV_fill_rectangle",
    "VK_NV_fragment_coverage_to_color",
    "VK_NV_fragment_shader_barycentric",
    "VK_NV_fragment_shading_rate_enums",
    "VK_NV_framebuffer_mixed_samples",
    "VK_NV_geometry_shader_passthrough",
    "VK_NV_glsl_shader",
    "VK_NV_inherited_viewport_scissor",
    "VK_NV_linear_color_attachment",
    "VK_NV_memory_decompression",
    "VK_NV_mesh_shader",
    "VK_NV_optical_flow",
    "VK_NV_present_barrier",
    "VK_NV_ray_tracing",
    "VK_NV_ray_tracing_invocation_reorder",
    "VK_NV_ray_tracing_motion_blur",
    "VK_NV_representative_fragment_test",
    "VK_NV_sample_mask_override_coverage",
    "VK_NV_scissor_exclusive",
    "VK_NV_shader_image_footprint",
    "VK_NV_shader_sm_builtins",
    "VK_NV_shader_subgroup_partitioned",
    "VK_NV_shading_rate_image",
    "VK_NV_viewport_array2",
    "VK_NV_viewport_swizzle",
    "VK_QCOM_fragment_density_map_offset",
    "VK_QCOM_image_processing",
    "VK_QCOM_render_pass_shader_resolve",
    "VK_QCOM_render_pass_store_ops",
    "VK_QCOM_render_pass_transform",
    "VK_QCOM_rotated_copy_commands",
    "VK_QCOM_tile_properties",
    "VK_VALVE_descriptor_set_host_mapping",
    "VK_VALVE_mutable_descriptor_type",
};

static const char * const vk_instance_extensions[] =
{
    "VK_EXT_debug_report",
    "VK_EXT_debug_utils",
    "VK_EXT_swapchain_colorspace",
    "VK_EXT_validation_features",
    "VK_EXT_validation_flags",
    "VK_KHR_device_group_creation",
    "VK_KHR_external_fence_capabilities",
    "VK_KHR_external_memory_capabilities",
    "VK_KHR_external_semaphore_capabilities",
    "VK_KHR_get_physical_device_properties2",
    "VK_KHR_get_surface_capabilities2",
    "VK_KHR_portability_enumeration",
    "VK_KHR_surface",
    "VK_KHR_win32_surface",
};

BOOL wine_vk_device_extension_supported(const char *name)
{
    unsigned int i;
    for (i = 0; i < ARRAY_SIZE(vk_device_extensions); i++)
    {
        if (strcmp(vk_device_extensions[i], name) == 0)
            return TRUE;
    }
    return FALSE;
}

BOOL wine_vk_instance_extension_supported(const char *name)
{
    unsigned int i;
    for (i = 0; i < ARRAY_SIZE(vk_instance_extensions); i++)
    {
        if (strcmp(vk_instance_extensions[i], name) == 0)
            return TRUE;
    }
    return FALSE;
}

BOOL wine_vk_is_type_wrapped(VkObjectType type)
{
    return FALSE ||
        type == VK_OBJECT_TYPE_COMMAND_BUFFER ||
        type == VK_OBJECT_TYPE_COMMAND_POOL ||
        type == VK_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT ||
        type == VK_OBJECT_TYPE_DEBUG_UTILS_MESSENGER_EXT ||
        type == VK_OBJECT_TYPE_DEVICE ||
        type == VK_OBJECT_TYPE_INSTANCE ||
        type == VK_OBJECT_TYPE_PHYSICAL_DEVICE ||
        type == VK_OBJECT_TYPE_QUEUE ||
        type == VK_OBJECT_TYPE_SURFACE_KHR;
}

#if !defined(USE_STRUCT_CONVERSION)

const unixlib_entry_t __wine_unix_call_funcs[] =
{
    init_vulkan,
    vk_is_available_instance_function,
    vk_is_available_device_function,
    thunk64_vkAcquireNextImage2KHR,
    thunk64_vkAcquireNextImageKHR,
    thunk64_vkAcquirePerformanceConfigurationINTEL,
    thunk64_vkAcquireProfilingLockKHR,
    thunk64_vkAllocateCommandBuffers,
    thunk64_vkAllocateDescriptorSets,
    thunk64_vkAllocateMemory,
    thunk64_vkBeginCommandBuffer,
    thunk64_vkBindAccelerationStructureMemoryNV,
    thunk64_vkBindBufferMemory,
    thunk64_vkBindBufferMemory2,
    thunk64_vkBindBufferMemory2KHR,
    thunk64_vkBindImageMemory,
    thunk64_vkBindImageMemory2,
    thunk64_vkBindImageMemory2KHR,
    thunk64_vkBindOpticalFlowSessionImageNV,
    thunk64_vkBuildAccelerationStructuresKHR,
    thunk64_vkBuildMicromapsEXT,
    thunk64_vkCmdBeginConditionalRenderingEXT,
    thunk64_vkCmdBeginDebugUtilsLabelEXT,
    thunk64_vkCmdBeginQuery,
    thunk64_vkCmdBeginQueryIndexedEXT,
    thunk64_vkCmdBeginRenderPass,
    thunk64_vkCmdBeginRenderPass2,
    thunk64_vkCmdBeginRenderPass2KHR,
    thunk64_vkCmdBeginRendering,
    thunk64_vkCmdBeginRenderingKHR,
    thunk64_vkCmdBeginTransformFeedbackEXT,
    thunk64_vkCmdBindDescriptorSets,
    thunk64_vkCmdBindIndexBuffer,
    thunk64_vkCmdBindInvocationMaskHUAWEI,
    thunk64_vkCmdBindPipeline,
    thunk64_vkCmdBindPipelineShaderGroupNV,
    thunk64_vkCmdBindShadingRateImageNV,
    thunk64_vkCmdBindTransformFeedbackBuffersEXT,
    thunk64_vkCmdBindVertexBuffers,
    thunk64_vkCmdBindVertexBuffers2,
    thunk64_vkCmdBindVertexBuffers2EXT,
    thunk64_vkCmdBlitImage,
    thunk64_vkCmdBlitImage2,
    thunk64_vkCmdBlitImage2KHR,
    thunk64_vkCmdBuildAccelerationStructureNV,
    thunk64_vkCmdBuildAccelerationStructuresIndirectKHR,
    thunk64_vkCmdBuildAccelerationStructuresKHR,
    thunk64_vkCmdBuildMicromapsEXT,
    thunk64_vkCmdClearAttachments,
    thunk64_vkCmdClearColorImage,
    thunk64_vkCmdClearDepthStencilImage,
    thunk64_vkCmdCopyAccelerationStructureKHR,
    thunk64_vkCmdCopyAccelerationStructureNV,
    thunk64_vkCmdCopyAccelerationStructureToMemoryKHR,
    thunk64_vkCmdCopyBuffer,
    thunk64_vkCmdCopyBuffer2,
    thunk64_vkCmdCopyBuffer2KHR,
    thunk64_vkCmdCopyBufferToImage,
    thunk64_vkCmdCopyBufferToImage2,
    thunk64_vkCmdCopyBufferToImage2KHR,
    thunk64_vkCmdCopyImage,
    thunk64_vkCmdCopyImage2,
    thunk64_vkCmdCopyImage2KHR,
    thunk64_vkCmdCopyImageToBuffer,
    thunk64_vkCmdCopyImageToBuffer2,
    thunk64_vkCmdCopyImageToBuffer2KHR,
    thunk64_vkCmdCopyMemoryIndirectNV,
    thunk64_vkCmdCopyMemoryToAccelerationStructureKHR,
    thunk64_vkCmdCopyMemoryToImageIndirectNV,
    thunk64_vkCmdCopyMemoryToMicromapEXT,
    thunk64_vkCmdCopyMicromapEXT,
    thunk64_vkCmdCopyMicromapToMemoryEXT,
    thunk64_vkCmdCopyQueryPoolResults,
    thunk64_vkCmdCuLaunchKernelNVX,
    thunk64_vkCmdDebugMarkerBeginEXT,
    thunk64_vkCmdDebugMarkerEndEXT,
    thunk64_vkCmdDebugMarkerInsertEXT,
    thunk64_vkCmdDecompressMemoryIndirectCountNV,
    thunk64_vkCmdDecompressMemoryNV,
    thunk64_vkCmdDispatch,
    thunk64_vkCmdDispatchBase,
    thunk64_vkCmdDispatchBaseKHR,
    thunk64_vkCmdDispatchIndirect,
    thunk64_vkCmdDraw,
    thunk64_vkCmdDrawIndexed,
    thunk64_vkCmdDrawIndexedIndirect,
    thunk64_vkCmdDrawIndexedIndirectCount,
    thunk64_vkCmdDrawIndexedIndirectCountAMD,
    thunk64_vkCmdDrawIndexedIndirectCountKHR,
    thunk64_vkCmdDrawIndirect,
    thunk64_vkCmdDrawIndirectByteCountEXT,
    thunk64_vkCmdDrawIndirectCount,
    thunk64_vkCmdDrawIndirectCountAMD,
    thunk64_vkCmdDrawIndirectCountKHR,
    thunk64_vkCmdDrawMeshTasksEXT,
    thunk64_vkCmdDrawMeshTasksIndirectCountEXT,
    thunk64_vkCmdDrawMeshTasksIndirectCountNV,
    thunk64_vkCmdDrawMeshTasksIndirectEXT,
    thunk64_vkCmdDrawMeshTasksIndirectNV,
    thunk64_vkCmdDrawMeshTasksNV,
    thunk64_vkCmdDrawMultiEXT,
    thunk64_vkCmdDrawMultiIndexedEXT,
    thunk64_vkCmdEndConditionalRenderingEXT,
    thunk64_vkCmdEndDebugUtilsLabelEXT,
    thunk64_vkCmdEndQuery,
    thunk64_vkCmdEndQueryIndexedEXT,
    thunk64_vkCmdEndRenderPass,
    thunk64_vkCmdEndRenderPass2,
    thunk64_vkCmdEndRenderPass2KHR,
    thunk64_vkCmdEndRendering,
    thunk64_vkCmdEndRenderingKHR,
    thunk64_vkCmdEndTransformFeedbackEXT,
    thunk64_vkCmdExecuteCommands,
    thunk64_vkCmdExecuteGeneratedCommandsNV,
    thunk64_vkCmdFillBuffer,
    thunk64_vkCmdInsertDebugUtilsLabelEXT,
    thunk64_vkCmdNextSubpass,
    thunk64_vkCmdNextSubpass2,
    thunk64_vkCmdNextSubpass2KHR,
    thunk64_vkCmdOpticalFlowExecuteNV,
    thunk64_vkCmdPipelineBarrier,
    thunk64_vkCmdPipelineBarrier2,
    thunk64_vkCmdPipelineBarrier2KHR,
    thunk64_vkCmdPreprocessGeneratedCommandsNV,
    thunk64_vkCmdPushConstants,
    thunk64_vkCmdPushDescriptorSetKHR,
    thunk64_vkCmdPushDescriptorSetWithTemplateKHR,
    thunk64_vkCmdResetEvent,
    thunk64_vkCmdResetEvent2,
    thunk64_vkCmdResetEvent2KHR,
    thunk64_vkCmdResetQueryPool,
    thunk64_vkCmdResolveImage,
    thunk64_vkCmdResolveImage2,
    thunk64_vkCmdResolveImage2KHR,
    thunk64_vkCmdSetAlphaToCoverageEnableEXT,
    thunk64_vkCmdSetAlphaToOneEnableEXT,
    thunk64_vkCmdSetBlendConstants,
    thunk64_vkCmdSetCheckpointNV,
    thunk64_vkCmdSetCoarseSampleOrderNV,
    thunk64_vkCmdSetColorBlendAdvancedEXT,
    thunk64_vkCmdSetColorBlendEnableEXT,
    thunk64_vkCmdSetColorBlendEquationEXT,
    thunk64_vkCmdSetColorWriteEnableEXT,
    thunk64_vkCmdSetColorWriteMaskEXT,
    thunk64_vkCmdSetConservativeRasterizationModeEXT,
    thunk64_vkCmdSetCoverageModulationModeNV,
    thunk64_vkCmdSetCoverageModulationTableEnableNV,
    thunk64_vkCmdSetCoverageModulationTableNV,
    thunk64_vkCmdSetCoverageReductionModeNV,
    thunk64_vkCmdSetCoverageToColorEnableNV,
    thunk64_vkCmdSetCoverageToColorLocationNV,
    thunk64_vkCmdSetCullMode,
    thunk64_vkCmdSetCullModeEXT,
    thunk64_vkCmdSetDepthBias,
    thunk64_vkCmdSetDepthBiasEnable,
    thunk64_vkCmdSetDepthBiasEnableEXT,
    thunk64_vkCmdSetDepthBounds,
    thunk64_vkCmdSetDepthBoundsTestEnable,
    thunk64_vkCmdSetDepthBoundsTestEnableEXT,
    thunk64_vkCmdSetDepthClampEnableEXT,
    thunk64_vkCmdSetDepthClipEnableEXT,
    thunk64_vkCmdSetDepthClipNegativeOneToOneEXT,
    thunk64_vkCmdSetDepthCompareOp,
    thunk64_vkCmdSetDepthCompareOpEXT,
    thunk64_vkCmdSetDepthTestEnable,
    thunk64_vkCmdSetDepthTestEnableEXT,
    thunk64_vkCmdSetDepthWriteEnable,
    thunk64_vkCmdSetDepthWriteEnableEXT,
    thunk64_vkCmdSetDeviceMask,
    thunk64_vkCmdSetDeviceMaskKHR,
    thunk64_vkCmdSetDiscardRectangleEXT,
    thunk64_vkCmdSetEvent,
    thunk64_vkCmdSetEvent2,
    thunk64_vkCmdSetEvent2KHR,
    thunk64_vkCmdSetExclusiveScissorNV,
    thunk64_vkCmdSetExtraPrimitiveOverestimationSizeEXT,
    thunk64_vkCmdSetFragmentShadingRateEnumNV,
    thunk64_vkCmdSetFragmentShadingRateKHR,
    thunk64_vkCmdSetFrontFace,
    thunk64_vkCmdSetFrontFaceEXT,
    thunk64_vkCmdSetLineRasterizationModeEXT,
    thunk64_vkCmdSetLineStippleEXT,
    thunk64_vkCmdSetLineStippleEnableEXT,
    thunk64_vkCmdSetLineWidth,
    thunk64_vkCmdSetLogicOpEXT,
    thunk64_vkCmdSetLogicOpEnableEXT,
    thunk64_vkCmdSetPatchControlPointsEXT,
    thunk64_vkCmdSetPerformanceMarkerINTEL,
    thunk64_vkCmdSetPerformanceOverrideINTEL,
    thunk64_vkCmdSetPerformanceStreamMarkerINTEL,
    thunk64_vkCmdSetPolygonModeEXT,
    thunk64_vkCmdSetPrimitiveRestartEnable,
    thunk64_vkCmdSetPrimitiveRestartEnableEXT,
    thunk64_vkCmdSetPrimitiveTopology,
    thunk64_vkCmdSetPrimitiveTopologyEXT,
    thunk64_vkCmdSetProvokingVertexModeEXT,
    thunk64_vkCmdSetRasterizationSamplesEXT,
    thunk64_vkCmdSetRasterizationStreamEXT,
    thunk64_vkCmdSetRasterizerDiscardEnable,
    thunk64_vkCmdSetRasterizerDiscardEnableEXT,
    thunk64_vkCmdSetRayTracingPipelineStackSizeKHR,
    thunk64_vkCmdSetRepresentativeFragmentTestEnableNV,
    thunk64_vkCmdSetSampleLocationsEXT,
    thunk64_vkCmdSetSampleLocationsEnableEXT,
    thunk64_vkCmdSetSampleMaskEXT,
    thunk64_vkCmdSetScissor,
    thunk64_vkCmdSetScissorWithCount,
    thunk64_vkCmdSetScissorWithCountEXT,
    thunk64_vkCmdSetShadingRateImageEnableNV,
    thunk64_vkCmdSetStencilCompareMask,
    thunk64_vkCmdSetStencilOp,
    thunk64_vkCmdSetStencilOpEXT,
    thunk64_vkCmdSetStencilReference,
    thunk64_vkCmdSetStencilTestEnable,
    thunk64_vkCmdSetStencilTestEnableEXT,
    thunk64_vkCmdSetStencilWriteMask,
    thunk64_vkCmdSetTessellationDomainOriginEXT,
    thunk64_vkCmdSetVertexInputEXT,
    thunk64_vkCmdSetViewport,
    thunk64_vkCmdSetViewportShadingRatePaletteNV,
    thunk64_vkCmdSetViewportSwizzleNV,
    thunk64_vkCmdSetViewportWScalingEnableNV,
    thunk64_vkCmdSetViewportWScalingNV,
    thunk64_vkCmdSetViewportWithCount,
    thunk64_vkCmdSetViewportWithCountEXT,
    thunk64_vkCmdSubpassShadingHUAWEI,
    thunk64_vkCmdTraceRaysIndirect2KHR,
    thunk64_vkCmdTraceRaysIndirectKHR,
    thunk64_vkCmdTraceRaysKHR,
    thunk64_vkCmdTraceRaysNV,
    thunk64_vkCmdUpdateBuffer,
    thunk64_vkCmdWaitEvents,
    thunk64_vkCmdWaitEvents2,
    thunk64_vkCmdWaitEvents2KHR,
    thunk64_vkCmdWriteAccelerationStructuresPropertiesKHR,
    thunk64_vkCmdWriteAccelerationStructuresPropertiesNV,
    thunk64_vkCmdWriteBufferMarker2AMD,
    thunk64_vkCmdWriteBufferMarkerAMD,
    thunk64_vkCmdWriteMicromapsPropertiesEXT,
    thunk64_vkCmdWriteTimestamp,
    thunk64_vkCmdWriteTimestamp2,
    thunk64_vkCmdWriteTimestamp2KHR,
    thunk64_vkCompileDeferredNV,
    thunk64_vkCopyAccelerationStructureKHR,
    thunk64_vkCopyAccelerationStructureToMemoryKHR,
    thunk64_vkCopyMemoryToAccelerationStructureKHR,
    thunk64_vkCopyMemoryToMicromapEXT,
    thunk64_vkCopyMicromapEXT,
    thunk64_vkCopyMicromapToMemoryEXT,
    thunk64_vkCreateAccelerationStructureKHR,
    thunk64_vkCreateAccelerationStructureNV,
    thunk64_vkCreateBuffer,
    thunk64_vkCreateBufferView,
    thunk64_vkCreateCommandPool,
    thunk64_vkCreateComputePipelines,
    thunk64_vkCreateCuFunctionNVX,
    thunk64_vkCreateCuModuleNVX,
    thunk64_vkCreateDebugReportCallbackEXT,
    thunk64_vkCreateDebugUtilsMessengerEXT,
    thunk64_vkCreateDeferredOperationKHR,
    thunk64_vkCreateDescriptorPool,
    thunk64_vkCreateDescriptorSetLayout,
    thunk64_vkCreateDescriptorUpdateTemplate,
    thunk64_vkCreateDescriptorUpdateTemplateKHR,
    thunk64_vkCreateDevice,
    thunk64_vkCreateEvent,
    thunk64_vkCreateFence,
    thunk64_vkCreateFramebuffer,
    thunk64_vkCreateGraphicsPipelines,
    thunk64_vkCreateImage,
    thunk64_vkCreateImageView,
    thunk64_vkCreateIndirectCommandsLayoutNV,
    thunk64_vkCreateInstance,
    thunk64_vkCreateMicromapEXT,
    thunk64_vkCreateOpticalFlowSessionNV,
    thunk64_vkCreatePipelineCache,
    thunk64_vkCreatePipelineLayout,
    thunk64_vkCreatePrivateDataSlot,
    thunk64_vkCreatePrivateDataSlotEXT,
    thunk64_vkCreateQueryPool,
    thunk64_vkCreateRayTracingPipelinesKHR,
    thunk64_vkCreateRayTracingPipelinesNV,
    thunk64_vkCreateRenderPass,
    thunk64_vkCreateRenderPass2,
    thunk64_vkCreateRenderPass2KHR,
    thunk64_vkCreateSampler,
    thunk64_vkCreateSamplerYcbcrConversion,
    thunk64_vkCreateSamplerYcbcrConversionKHR,
    thunk64_vkCreateSemaphore,
    thunk64_vkCreateShaderModule,
    thunk64_vkCreateSwapchainKHR,
    thunk64_vkCreateValidationCacheEXT,
    thunk64_vkCreateWin32SurfaceKHR,
    thunk64_vkDebugMarkerSetObjectNameEXT,
    thunk64_vkDebugMarkerSetObjectTagEXT,
    thunk64_vkDebugReportMessageEXT,
    thunk64_vkDeferredOperationJoinKHR,
    thunk64_vkDestroyAccelerationStructureKHR,
    thunk64_vkDestroyAccelerationStructureNV,
    thunk64_vkDestroyBuffer,
    thunk64_vkDestroyBufferView,
    thunk64_vkDestroyCommandPool,
    thunk64_vkDestroyCuFunctionNVX,
    thunk64_vkDestroyCuModuleNVX,
    thunk64_vkDestroyDebugReportCallbackEXT,
    thunk64_vkDestroyDebugUtilsMessengerEXT,
    thunk64_vkDestroyDeferredOperationKHR,
    thunk64_vkDestroyDescriptorPool,
    thunk64_vkDestroyDescriptorSetLayout,
    thunk64_vkDestroyDescriptorUpdateTemplate,
    thunk64_vkDestroyDescriptorUpdateTemplateKHR,
    thunk64_vkDestroyDevice,
    thunk64_vkDestroyEvent,
    thunk64_vkDestroyFence,
    thunk64_vkDestroyFramebuffer,
    thunk64_vkDestroyImage,
    thunk64_vkDestroyImageView,
    thunk64_vkDestroyIndirectCommandsLayoutNV,
    thunk64_vkDestroyInstance,
    thunk64_vkDestroyMicromapEXT,
    thunk64_vkDestroyOpticalFlowSessionNV,
    thunk64_vkDestroyPipeline,
    thunk64_vkDestroyPipelineCache,
    thunk64_vkDestroyPipelineLayout,
    thunk64_vkDestroyPrivateDataSlot,
    thunk64_vkDestroyPrivateDataSlotEXT,
    thunk64_vkDestroyQueryPool,
    thunk64_vkDestroyRenderPass,
    thunk64_vkDestroySampler,
    thunk64_vkDestroySamplerYcbcrConversion,
    thunk64_vkDestroySamplerYcbcrConversionKHR,
    thunk64_vkDestroySemaphore,
    thunk64_vkDestroyShaderModule,
    thunk64_vkDestroySurfaceKHR,
    thunk64_vkDestroySwapchainKHR,
    thunk64_vkDestroyValidationCacheEXT,
    thunk64_vkDeviceWaitIdle,
    thunk64_vkEndCommandBuffer,
    thunk64_vkEnumerateDeviceExtensionProperties,
    thunk64_vkEnumerateDeviceLayerProperties,
    thunk64_vkEnumerateInstanceExtensionProperties,
    thunk64_vkEnumerateInstanceVersion,
    thunk64_vkEnumeratePhysicalDeviceGroups,
    thunk64_vkEnumeratePhysicalDeviceGroupsKHR,
    thunk64_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR,
    thunk64_vkEnumeratePhysicalDevices,
    thunk64_vkFlushMappedMemoryRanges,
    thunk64_vkFreeCommandBuffers,
    thunk64_vkFreeDescriptorSets,
    thunk64_vkFreeMemory,
    thunk64_vkGetAccelerationStructureBuildSizesKHR,
    thunk64_vkGetAccelerationStructureDeviceAddressKHR,
    thunk64_vkGetAccelerationStructureHandleNV,
    thunk64_vkGetAccelerationStructureMemoryRequirementsNV,
    thunk64_vkGetBufferDeviceAddress,
    thunk64_vkGetBufferDeviceAddressEXT,
    thunk64_vkGetBufferDeviceAddressKHR,
    thunk64_vkGetBufferMemoryRequirements,
    thunk64_vkGetBufferMemoryRequirements2,
    thunk64_vkGetBufferMemoryRequirements2KHR,
    thunk64_vkGetBufferOpaqueCaptureAddress,
    thunk64_vkGetBufferOpaqueCaptureAddressKHR,
    thunk64_vkGetCalibratedTimestampsEXT,
    thunk64_vkGetDeferredOperationMaxConcurrencyKHR,
    thunk64_vkGetDeferredOperationResultKHR,
    thunk64_vkGetDescriptorSetHostMappingVALVE,
    thunk64_vkGetDescriptorSetLayoutHostMappingInfoVALVE,
    thunk64_vkGetDescriptorSetLayoutSupport,
    thunk64_vkGetDescriptorSetLayoutSupportKHR,
    thunk64_vkGetDeviceAccelerationStructureCompatibilityKHR,
    thunk64_vkGetDeviceBufferMemoryRequirements,
    thunk64_vkGetDeviceBufferMemoryRequirementsKHR,
    thunk64_vkGetDeviceFaultInfoEXT,
    thunk64_vkGetDeviceGroupPeerMemoryFeatures,
    thunk64_vkGetDeviceGroupPeerMemoryFeaturesKHR,
    thunk64_vkGetDeviceGroupPresentCapabilitiesKHR,
    thunk64_vkGetDeviceGroupSurfacePresentModesKHR,
    thunk64_vkGetDeviceImageMemoryRequirements,
    thunk64_vkGetDeviceImageMemoryRequirementsKHR,
    thunk64_vkGetDeviceImageSparseMemoryRequirements,
    thunk64_vkGetDeviceImageSparseMemoryRequirementsKHR,
    thunk64_vkGetDeviceMemoryCommitment,
    thunk64_vkGetDeviceMemoryOpaqueCaptureAddress,
    thunk64_vkGetDeviceMemoryOpaqueCaptureAddressKHR,
    thunk64_vkGetDeviceMicromapCompatibilityEXT,
    thunk64_vkGetDeviceQueue,
    thunk64_vkGetDeviceQueue2,
    thunk64_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI,
    thunk64_vkGetDynamicRenderingTilePropertiesQCOM,
    thunk64_vkGetEventStatus,
    thunk64_vkGetFenceStatus,
    thunk64_vkGetFramebufferTilePropertiesQCOM,
    thunk64_vkGetGeneratedCommandsMemoryRequirementsNV,
    thunk64_vkGetImageMemoryRequirements,
    thunk64_vkGetImageMemoryRequirements2,
    thunk64_vkGetImageMemoryRequirements2KHR,
    thunk64_vkGetImageSparseMemoryRequirements,
    thunk64_vkGetImageSparseMemoryRequirements2,
    thunk64_vkGetImageSparseMemoryRequirements2KHR,
    thunk64_vkGetImageSubresourceLayout,
    thunk64_vkGetImageSubresourceLayout2EXT,
    thunk64_vkGetImageViewAddressNVX,
    thunk64_vkGetImageViewHandleNVX,
    thunk64_vkGetMemoryHostPointerPropertiesEXT,
    thunk64_vkGetMicromapBuildSizesEXT,
    thunk64_vkGetPerformanceParameterINTEL,
    thunk64_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT,
    thunk64_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV,
    thunk64_vkGetPhysicalDeviceExternalBufferProperties,
    thunk64_vkGetPhysicalDeviceExternalBufferPropertiesKHR,
    thunk64_vkGetPhysicalDeviceExternalFenceProperties,
    thunk64_vkGetPhysicalDeviceExternalFencePropertiesKHR,
    thunk64_vkGetPhysicalDeviceExternalSemaphoreProperties,
    thunk64_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR,
    thunk64_vkGetPhysicalDeviceFeatures,
    thunk64_vkGetPhysicalDeviceFeatures2,
    thunk64_vkGetPhysicalDeviceFeatures2KHR,
    thunk64_vkGetPhysicalDeviceFormatProperties,
    thunk64_vkGetPhysicalDeviceFormatProperties2,
    thunk64_vkGetPhysicalDeviceFormatProperties2KHR,
    thunk64_vkGetPhysicalDeviceFragmentShadingRatesKHR,
    thunk64_vkGetPhysicalDeviceImageFormatProperties,
    thunk64_vkGetPhysicalDeviceImageFormatProperties2,
    thunk64_vkGetPhysicalDeviceImageFormatProperties2KHR,
    thunk64_vkGetPhysicalDeviceMemoryProperties,
    thunk64_vkGetPhysicalDeviceMemoryProperties2,
    thunk64_vkGetPhysicalDeviceMemoryProperties2KHR,
    thunk64_vkGetPhysicalDeviceMultisamplePropertiesEXT,
    thunk64_vkGetPhysicalDeviceOpticalFlowImageFormatsNV,
    thunk64_vkGetPhysicalDevicePresentRectanglesKHR,
    thunk64_vkGetPhysicalDeviceProperties,
    thunk64_vkGetPhysicalDeviceProperties2,
    thunk64_vkGetPhysicalDeviceProperties2KHR,
    thunk64_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR,
    thunk64_vkGetPhysicalDeviceQueueFamilyProperties,
    thunk64_vkGetPhysicalDeviceQueueFamilyProperties2,
    thunk64_vkGetPhysicalDeviceQueueFamilyProperties2KHR,
    thunk64_vkGetPhysicalDeviceSparseImageFormatProperties,
    thunk64_vkGetPhysicalDeviceSparseImageFormatProperties2,
    thunk64_vkGetPhysicalDeviceSparseImageFormatProperties2KHR,
    thunk64_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV,
    thunk64_vkGetPhysicalDeviceSurfaceCapabilities2KHR,
    thunk64_vkGetPhysicalDeviceSurfaceCapabilitiesKHR,
    thunk64_vkGetPhysicalDeviceSurfaceFormats2KHR,
    thunk64_vkGetPhysicalDeviceSurfaceFormatsKHR,
    thunk64_vkGetPhysicalDeviceSurfacePresentModesKHR,
    thunk64_vkGetPhysicalDeviceSurfaceSupportKHR,
    thunk64_vkGetPhysicalDeviceToolProperties,
    thunk64_vkGetPhysicalDeviceToolPropertiesEXT,
    thunk64_vkGetPhysicalDeviceWin32PresentationSupportKHR,
    thunk64_vkGetPipelineCacheData,
    thunk64_vkGetPipelineExecutableInternalRepresentationsKHR,
    thunk64_vkGetPipelineExecutablePropertiesKHR,
    thunk64_vkGetPipelineExecutableStatisticsKHR,
    thunk64_vkGetPipelinePropertiesEXT,
    thunk64_vkGetPrivateData,
    thunk64_vkGetPrivateDataEXT,
    thunk64_vkGetQueryPoolResults,
    thunk64_vkGetQueueCheckpointData2NV,
    thunk64_vkGetQueueCheckpointDataNV,
    thunk64_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR,
    thunk64_vkGetRayTracingShaderGroupHandlesKHR,
    thunk64_vkGetRayTracingShaderGroupHandlesNV,
    thunk64_vkGetRayTracingShaderGroupStackSizeKHR,
    thunk64_vkGetRenderAreaGranularity,
    thunk64_vkGetSemaphoreCounterValue,
    thunk64_vkGetSemaphoreCounterValueKHR,
    thunk64_vkGetShaderInfoAMD,
    thunk64_vkGetShaderModuleCreateInfoIdentifierEXT,
    thunk64_vkGetShaderModuleIdentifierEXT,
    thunk64_vkGetSwapchainImagesKHR,
    thunk64_vkGetValidationCacheDataEXT,
    thunk64_vkInitializePerformanceApiINTEL,
    thunk64_vkInvalidateMappedMemoryRanges,
    thunk64_vkMapMemory,
    thunk64_vkMergePipelineCaches,
    thunk64_vkMergeValidationCachesEXT,
    thunk64_vkQueueBeginDebugUtilsLabelEXT,
    thunk64_vkQueueBindSparse,
    thunk64_vkQueueEndDebugUtilsLabelEXT,
    thunk64_vkQueueInsertDebugUtilsLabelEXT,
    thunk64_vkQueuePresentKHR,
    thunk64_vkQueueSetPerformanceConfigurationINTEL,
    thunk64_vkQueueSubmit,
    thunk64_vkQueueSubmit2,
    thunk64_vkQueueSubmit2KHR,
    thunk64_vkQueueWaitIdle,
    thunk64_vkReleasePerformanceConfigurationINTEL,
    thunk64_vkReleaseProfilingLockKHR,
    thunk64_vkResetCommandBuffer,
    thunk64_vkResetCommandPool,
    thunk64_vkResetDescriptorPool,
    thunk64_vkResetEvent,
    thunk64_vkResetFences,
    thunk64_vkResetQueryPool,
    thunk64_vkResetQueryPoolEXT,
    thunk64_vkSetDebugUtilsObjectNameEXT,
    thunk64_vkSetDebugUtilsObjectTagEXT,
    thunk64_vkSetDeviceMemoryPriorityEXT,
    thunk64_vkSetEvent,
    thunk64_vkSetPrivateData,
    thunk64_vkSetPrivateDataEXT,
    thunk64_vkSignalSemaphore,
    thunk64_vkSignalSemaphoreKHR,
    thunk64_vkSubmitDebugUtilsMessageEXT,
    thunk64_vkTrimCommandPool,
    thunk64_vkTrimCommandPoolKHR,
    thunk64_vkUninitializePerformanceApiINTEL,
    thunk64_vkUnmapMemory,
    thunk64_vkUpdateDescriptorSetWithTemplate,
    thunk64_vkUpdateDescriptorSetWithTemplateKHR,
    thunk64_vkUpdateDescriptorSets,
    thunk64_vkWaitForFences,
    thunk64_vkWaitForPresentKHR,
    thunk64_vkWaitSemaphores,
    thunk64_vkWaitSemaphoresKHR,
    thunk64_vkWriteAccelerationStructuresPropertiesKHR,
    thunk64_vkWriteMicromapsPropertiesEXT,
};
C_ASSERT(ARRAYSIZE(__wine_unix_call_funcs) == unix_count);

#else /* USE_STRUCT_CONVERSION) */

const unixlib_entry_t __wine_unix_call_funcs[] =
{
    init_vulkan,
    vk_is_available_instance_function,
    vk_is_available_device_function,
    thunk32_vkAcquireNextImage2KHR,
    thunk32_vkAcquireNextImageKHR,
    thunk32_vkAcquirePerformanceConfigurationINTEL,
    thunk32_vkAcquireProfilingLockKHR,
    thunk32_vkAllocateCommandBuffers,
    thunk32_vkAllocateDescriptorSets,
    thunk32_vkAllocateMemory,
    thunk32_vkBeginCommandBuffer,
    thunk32_vkBindAccelerationStructureMemoryNV,
    thunk32_vkBindBufferMemory,
    thunk32_vkBindBufferMemory2,
    thunk32_vkBindBufferMemory2KHR,
    thunk32_vkBindImageMemory,
    thunk32_vkBindImageMemory2,
    thunk32_vkBindImageMemory2KHR,
    thunk32_vkBindOpticalFlowSessionImageNV,
    thunk32_vkBuildAccelerationStructuresKHR,
    thunk32_vkBuildMicromapsEXT,
    thunk32_vkCmdBeginConditionalRenderingEXT,
    thunk32_vkCmdBeginDebugUtilsLabelEXT,
    thunk32_vkCmdBeginQuery,
    thunk32_vkCmdBeginQueryIndexedEXT,
    thunk32_vkCmdBeginRenderPass,
    thunk32_vkCmdBeginRenderPass2,
    thunk32_vkCmdBeginRenderPass2KHR,
    thunk32_vkCmdBeginRendering,
    thunk32_vkCmdBeginRenderingKHR,
    thunk32_vkCmdBeginTransformFeedbackEXT,
    thunk32_vkCmdBindDescriptorSets,
    thunk32_vkCmdBindIndexBuffer,
    thunk32_vkCmdBindInvocationMaskHUAWEI,
    thunk32_vkCmdBindPipeline,
    thunk32_vkCmdBindPipelineShaderGroupNV,
    thunk32_vkCmdBindShadingRateImageNV,
    thunk32_vkCmdBindTransformFeedbackBuffersEXT,
    thunk32_vkCmdBindVertexBuffers,
    thunk32_vkCmdBindVertexBuffers2,
    thunk32_vkCmdBindVertexBuffers2EXT,
    thunk32_vkCmdBlitImage,
    thunk32_vkCmdBlitImage2,
    thunk32_vkCmdBlitImage2KHR,
    thunk32_vkCmdBuildAccelerationStructureNV,
    thunk32_vkCmdBuildAccelerationStructuresIndirectKHR,
    thunk32_vkCmdBuildAccelerationStructuresKHR,
    thunk32_vkCmdBuildMicromapsEXT,
    thunk32_vkCmdClearAttachments,
    thunk32_vkCmdClearColorImage,
    thunk32_vkCmdClearDepthStencilImage,
    thunk32_vkCmdCopyAccelerationStructureKHR,
    thunk32_vkCmdCopyAccelerationStructureNV,
    thunk32_vkCmdCopyAccelerationStructureToMemoryKHR,
    thunk32_vkCmdCopyBuffer,
    thunk32_vkCmdCopyBuffer2,
    thunk32_vkCmdCopyBuffer2KHR,
    thunk32_vkCmdCopyBufferToImage,
    thunk32_vkCmdCopyBufferToImage2,
    thunk32_vkCmdCopyBufferToImage2KHR,
    thunk32_vkCmdCopyImage,
    thunk32_vkCmdCopyImage2,
    thunk32_vkCmdCopyImage2KHR,
    thunk32_vkCmdCopyImageToBuffer,
    thunk32_vkCmdCopyImageToBuffer2,
    thunk32_vkCmdCopyImageToBuffer2KHR,
    thunk32_vkCmdCopyMemoryIndirectNV,
    thunk32_vkCmdCopyMemoryToAccelerationStructureKHR,
    thunk32_vkCmdCopyMemoryToImageIndirectNV,
    thunk32_vkCmdCopyMemoryToMicromapEXT,
    thunk32_vkCmdCopyMicromapEXT,
    thunk32_vkCmdCopyMicromapToMemoryEXT,
    thunk32_vkCmdCopyQueryPoolResults,
    thunk32_vkCmdCuLaunchKernelNVX,
    thunk32_vkCmdDebugMarkerBeginEXT,
    thunk32_vkCmdDebugMarkerEndEXT,
    thunk32_vkCmdDebugMarkerInsertEXT,
    thunk32_vkCmdDecompressMemoryIndirectCountNV,
    thunk32_vkCmdDecompressMemoryNV,
    thunk32_vkCmdDispatch,
    thunk32_vkCmdDispatchBase,
    thunk32_vkCmdDispatchBaseKHR,
    thunk32_vkCmdDispatchIndirect,
    thunk32_vkCmdDraw,
    thunk32_vkCmdDrawIndexed,
    thunk32_vkCmdDrawIndexedIndirect,
    thunk32_vkCmdDrawIndexedIndirectCount,
    thunk32_vkCmdDrawIndexedIndirectCountAMD,
    thunk32_vkCmdDrawIndexedIndirectCountKHR,
    thunk32_vkCmdDrawIndirect,
    thunk32_vkCmdDrawIndirectByteCountEXT,
    thunk32_vkCmdDrawIndirectCount,
    thunk32_vkCmdDrawIndirectCountAMD,
    thunk32_vkCmdDrawIndirectCountKHR,
    thunk32_vkCmdDrawMeshTasksEXT,
    thunk32_vkCmdDrawMeshTasksIndirectCountEXT,
    thunk32_vkCmdDrawMeshTasksIndirectCountNV,
    thunk32_vkCmdDrawMeshTasksIndirectEXT,
    thunk32_vkCmdDrawMeshTasksIndirectNV,
    thunk32_vkCmdDrawMeshTasksNV,
    thunk32_vkCmdDrawMultiEXT,
    thunk32_vkCmdDrawMultiIndexedEXT,
    thunk32_vkCmdEndConditionalRenderingEXT,
    thunk32_vkCmdEndDebugUtilsLabelEXT,
    thunk32_vkCmdEndQuery,
    thunk32_vkCmdEndQueryIndexedEXT,
    thunk32_vkCmdEndRenderPass,
    thunk32_vkCmdEndRenderPass2,
    thunk32_vkCmdEndRenderPass2KHR,
    thunk32_vkCmdEndRendering,
    thunk32_vkCmdEndRenderingKHR,
    thunk32_vkCmdEndTransformFeedbackEXT,
    thunk32_vkCmdExecuteCommands,
    thunk32_vkCmdExecuteGeneratedCommandsNV,
    thunk32_vkCmdFillBuffer,
    thunk32_vkCmdInsertDebugUtilsLabelEXT,
    thunk32_vkCmdNextSubpass,
    thunk32_vkCmdNextSubpass2,
    thunk32_vkCmdNextSubpass2KHR,
    thunk32_vkCmdOpticalFlowExecuteNV,
    thunk32_vkCmdPipelineBarrier,
    thunk32_vkCmdPipelineBarrier2,
    thunk32_vkCmdPipelineBarrier2KHR,
    thunk32_vkCmdPreprocessGeneratedCommandsNV,
    thunk32_vkCmdPushConstants,
    thunk32_vkCmdPushDescriptorSetKHR,
    thunk32_vkCmdPushDescriptorSetWithTemplateKHR,
    thunk32_vkCmdResetEvent,
    thunk32_vkCmdResetEvent2,
    thunk32_vkCmdResetEvent2KHR,
    thunk32_vkCmdResetQueryPool,
    thunk32_vkCmdResolveImage,
    thunk32_vkCmdResolveImage2,
    thunk32_vkCmdResolveImage2KHR,
    thunk32_vkCmdSetAlphaToCoverageEnableEXT,
    thunk32_vkCmdSetAlphaToOneEnableEXT,
    thunk32_vkCmdSetBlendConstants,
    thunk32_vkCmdSetCheckpointNV,
    thunk32_vkCmdSetCoarseSampleOrderNV,
    thunk32_vkCmdSetColorBlendAdvancedEXT,
    thunk32_vkCmdSetColorBlendEnableEXT,
    thunk32_vkCmdSetColorBlendEquationEXT,
    thunk32_vkCmdSetColorWriteEnableEXT,
    thunk32_vkCmdSetColorWriteMaskEXT,
    thunk32_vkCmdSetConservativeRasterizationModeEXT,
    thunk32_vkCmdSetCoverageModulationModeNV,
    thunk32_vkCmdSetCoverageModulationTableEnableNV,
    thunk32_vkCmdSetCoverageModulationTableNV,
    thunk32_vkCmdSetCoverageReductionModeNV,
    thunk32_vkCmdSetCoverageToColorEnableNV,
    thunk32_vkCmdSetCoverageToColorLocationNV,
    thunk32_vkCmdSetCullMode,
    thunk32_vkCmdSetCullModeEXT,
    thunk32_vkCmdSetDepthBias,
    thunk32_vkCmdSetDepthBiasEnable,
    thunk32_vkCmdSetDepthBiasEnableEXT,
    thunk32_vkCmdSetDepthBounds,
    thunk32_vkCmdSetDepthBoundsTestEnable,
    thunk32_vkCmdSetDepthBoundsTestEnableEXT,
    thunk32_vkCmdSetDepthClampEnableEXT,
    thunk32_vkCmdSetDepthClipEnableEXT,
    thunk32_vkCmdSetDepthClipNegativeOneToOneEXT,
    thunk32_vkCmdSetDepthCompareOp,
    thunk32_vkCmdSetDepthCompareOpEXT,
    thunk32_vkCmdSetDepthTestEnable,
    thunk32_vkCmdSetDepthTestEnableEXT,
    thunk32_vkCmdSetDepthWriteEnable,
    thunk32_vkCmdSetDepthWriteEnableEXT,
    thunk32_vkCmdSetDeviceMask,
    thunk32_vkCmdSetDeviceMaskKHR,
    thunk32_vkCmdSetDiscardRectangleEXT,
    thunk32_vkCmdSetEvent,
    thunk32_vkCmdSetEvent2,
    thunk32_vkCmdSetEvent2KHR,
    thunk32_vkCmdSetExclusiveScissorNV,
    thunk32_vkCmdSetExtraPrimitiveOverestimationSizeEXT,
    thunk32_vkCmdSetFragmentShadingRateEnumNV,
    thunk32_vkCmdSetFragmentShadingRateKHR,
    thunk32_vkCmdSetFrontFace,
    thunk32_vkCmdSetFrontFaceEXT,
    thunk32_vkCmdSetLineRasterizationModeEXT,
    thunk32_vkCmdSetLineStippleEXT,
    thunk32_vkCmdSetLineStippleEnableEXT,
    thunk32_vkCmdSetLineWidth,
    thunk32_vkCmdSetLogicOpEXT,
    thunk32_vkCmdSetLogicOpEnableEXT,
    thunk32_vkCmdSetPatchControlPointsEXT,
    thunk32_vkCmdSetPerformanceMarkerINTEL,
    thunk32_vkCmdSetPerformanceOverrideINTEL,
    thunk32_vkCmdSetPerformanceStreamMarkerINTEL,
    thunk32_vkCmdSetPolygonModeEXT,
    thunk32_vkCmdSetPrimitiveRestartEnable,
    thunk32_vkCmdSetPrimitiveRestartEnableEXT,
    thunk32_vkCmdSetPrimitiveTopology,
    thunk32_vkCmdSetPrimitiveTopologyEXT,
    thunk32_vkCmdSetProvokingVertexModeEXT,
    thunk32_vkCmdSetRasterizationSamplesEXT,
    thunk32_vkCmdSetRasterizationStreamEXT,
    thunk32_vkCmdSetRasterizerDiscardEnable,
    thunk32_vkCmdSetRasterizerDiscardEnableEXT,
    thunk32_vkCmdSetRayTracingPipelineStackSizeKHR,
    thunk32_vkCmdSetRepresentativeFragmentTestEnableNV,
    thunk32_vkCmdSetSampleLocationsEXT,
    thunk32_vkCmdSetSampleLocationsEnableEXT,
    thunk32_vkCmdSetSampleMaskEXT,
    thunk32_vkCmdSetScissor,
    thunk32_vkCmdSetScissorWithCount,
    thunk32_vkCmdSetScissorWithCountEXT,
    thunk32_vkCmdSetShadingRateImageEnableNV,
    thunk32_vkCmdSetStencilCompareMask,
    thunk32_vkCmdSetStencilOp,
    thunk32_vkCmdSetStencilOpEXT,
    thunk32_vkCmdSetStencilReference,
    thunk32_vkCmdSetStencilTestEnable,
    thunk32_vkCmdSetStencilTestEnableEXT,
    thunk32_vkCmdSetStencilWriteMask,
    thunk32_vkCmdSetTessellationDomainOriginEXT,
    thunk32_vkCmdSetVertexInputEXT,
    thunk32_vkCmdSetViewport,
    thunk32_vkCmdSetViewportShadingRatePaletteNV,
    thunk32_vkCmdSetViewportSwizzleNV,
    thunk32_vkCmdSetViewportWScalingEnableNV,
    thunk32_vkCmdSetViewportWScalingNV,
    thunk32_vkCmdSetViewportWithCount,
    thunk32_vkCmdSetViewportWithCountEXT,
    thunk32_vkCmdSubpassShadingHUAWEI,
    thunk32_vkCmdTraceRaysIndirect2KHR,
    thunk32_vkCmdTraceRaysIndirectKHR,
    thunk32_vkCmdTraceRaysKHR,
    thunk32_vkCmdTraceRaysNV,
    thunk32_vkCmdUpdateBuffer,
    thunk32_vkCmdWaitEvents,
    thunk32_vkCmdWaitEvents2,
    thunk32_vkCmdWaitEvents2KHR,
    thunk32_vkCmdWriteAccelerationStructuresPropertiesKHR,
    thunk32_vkCmdWriteAccelerationStructuresPropertiesNV,
    thunk32_vkCmdWriteBufferMarker2AMD,
    thunk32_vkCmdWriteBufferMarkerAMD,
    thunk32_vkCmdWriteMicromapsPropertiesEXT,
    thunk32_vkCmdWriteTimestamp,
    thunk32_vkCmdWriteTimestamp2,
    thunk32_vkCmdWriteTimestamp2KHR,
    thunk32_vkCompileDeferredNV,
    thunk32_vkCopyAccelerationStructureKHR,
    thunk32_vkCopyAccelerationStructureToMemoryKHR,
    thunk32_vkCopyMemoryToAccelerationStructureKHR,
    thunk32_vkCopyMemoryToMicromapEXT,
    thunk32_vkCopyMicromapEXT,
    thunk32_vkCopyMicromapToMemoryEXT,
    thunk32_vkCreateAccelerationStructureKHR,
    thunk32_vkCreateAccelerationStructureNV,
    thunk32_vkCreateBuffer,
    thunk32_vkCreateBufferView,
    thunk32_vkCreateCommandPool,
    thunk32_vkCreateComputePipelines,
    thunk32_vkCreateCuFunctionNVX,
    thunk32_vkCreateCuModuleNVX,
    thunk32_vkCreateDebugReportCallbackEXT,
    thunk32_vkCreateDebugUtilsMessengerEXT,
    thunk32_vkCreateDeferredOperationKHR,
    thunk32_vkCreateDescriptorPool,
    thunk32_vkCreateDescriptorSetLayout,
    thunk32_vkCreateDescriptorUpdateTemplate,
    thunk32_vkCreateDescriptorUpdateTemplateKHR,
    thunk32_vkCreateDevice,
    thunk32_vkCreateEvent,
    thunk32_vkCreateFence,
    thunk32_vkCreateFramebuffer,
    thunk32_vkCreateGraphicsPipelines,
    thunk32_vkCreateImage,
    thunk32_vkCreateImageView,
    thunk32_vkCreateIndirectCommandsLayoutNV,
    thunk32_vkCreateInstance,
    thunk32_vkCreateMicromapEXT,
    thunk32_vkCreateOpticalFlowSessionNV,
    thunk32_vkCreatePipelineCache,
    thunk32_vkCreatePipelineLayout,
    thunk32_vkCreatePrivateDataSlot,
    thunk32_vkCreatePrivateDataSlotEXT,
    thunk32_vkCreateQueryPool,
    thunk32_vkCreateRayTracingPipelinesKHR,
    thunk32_vkCreateRayTracingPipelinesNV,
    thunk32_vkCreateRenderPass,
    thunk32_vkCreateRenderPass2,
    thunk32_vkCreateRenderPass2KHR,
    thunk32_vkCreateSampler,
    thunk32_vkCreateSamplerYcbcrConversion,
    thunk32_vkCreateSamplerYcbcrConversionKHR,
    thunk32_vkCreateSemaphore,
    thunk32_vkCreateShaderModule,
    thunk32_vkCreateSwapchainKHR,
    thunk32_vkCreateValidationCacheEXT,
    thunk32_vkCreateWin32SurfaceKHR,
    thunk32_vkDebugMarkerSetObjectNameEXT,
    thunk32_vkDebugMarkerSetObjectTagEXT,
    thunk32_vkDebugReportMessageEXT,
    thunk32_vkDeferredOperationJoinKHR,
    thunk32_vkDestroyAccelerationStructureKHR,
    thunk32_vkDestroyAccelerationStructureNV,
    thunk32_vkDestroyBuffer,
    thunk32_vkDestroyBufferView,
    thunk32_vkDestroyCommandPool,
    thunk32_vkDestroyCuFunctionNVX,
    thunk32_vkDestroyCuModuleNVX,
    thunk32_vkDestroyDebugReportCallbackEXT,
    thunk32_vkDestroyDebugUtilsMessengerEXT,
    thunk32_vkDestroyDeferredOperationKHR,
    thunk32_vkDestroyDescriptorPool,
    thunk32_vkDestroyDescriptorSetLayout,
    thunk32_vkDestroyDescriptorUpdateTemplate,
    thunk32_vkDestroyDescriptorUpdateTemplateKHR,
    thunk32_vkDestroyDevice,
    thunk32_vkDestroyEvent,
    thunk32_vkDestroyFence,
    thunk32_vkDestroyFramebuffer,
    thunk32_vkDestroyImage,
    thunk32_vkDestroyImageView,
    thunk32_vkDestroyIndirectCommandsLayoutNV,
    thunk32_vkDestroyInstance,
    thunk32_vkDestroyMicromapEXT,
    thunk32_vkDestroyOpticalFlowSessionNV,
    thunk32_vkDestroyPipeline,
    thunk32_vkDestroyPipelineCache,
    thunk32_vkDestroyPipelineLayout,
    thunk32_vkDestroyPrivateDataSlot,
    thunk32_vkDestroyPrivateDataSlotEXT,
    thunk32_vkDestroyQueryPool,
    thunk32_vkDestroyRenderPass,
    thunk32_vkDestroySampler,
    thunk32_vkDestroySamplerYcbcrConversion,
    thunk32_vkDestroySamplerYcbcrConversionKHR,
    thunk32_vkDestroySemaphore,
    thunk32_vkDestroyShaderModule,
    thunk32_vkDestroySurfaceKHR,
    thunk32_vkDestroySwapchainKHR,
    thunk32_vkDestroyValidationCacheEXT,
    thunk32_vkDeviceWaitIdle,
    thunk32_vkEndCommandBuffer,
    thunk32_vkEnumerateDeviceExtensionProperties,
    thunk32_vkEnumerateDeviceLayerProperties,
    thunk32_vkEnumerateInstanceExtensionProperties,
    thunk32_vkEnumerateInstanceVersion,
    thunk32_vkEnumeratePhysicalDeviceGroups,
    thunk32_vkEnumeratePhysicalDeviceGroupsKHR,
    thunk32_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR,
    thunk32_vkEnumeratePhysicalDevices,
    thunk32_vkFlushMappedMemoryRanges,
    thunk32_vkFreeCommandBuffers,
    thunk32_vkFreeDescriptorSets,
    thunk32_vkFreeMemory,
    thunk32_vkGetAccelerationStructureBuildSizesKHR,
    thunk32_vkGetAccelerationStructureDeviceAddressKHR,
    thunk32_vkGetAccelerationStructureHandleNV,
    thunk32_vkGetAccelerationStructureMemoryRequirementsNV,
    thunk32_vkGetBufferDeviceAddress,
    thunk32_vkGetBufferDeviceAddressEXT,
    thunk32_vkGetBufferDeviceAddressKHR,
    thunk32_vkGetBufferMemoryRequirements,
    thunk32_vkGetBufferMemoryRequirements2,
    thunk32_vkGetBufferMemoryRequirements2KHR,
    thunk32_vkGetBufferOpaqueCaptureAddress,
    thunk32_vkGetBufferOpaqueCaptureAddressKHR,
    thunk32_vkGetCalibratedTimestampsEXT,
    thunk32_vkGetDeferredOperationMaxConcurrencyKHR,
    thunk32_vkGetDeferredOperationResultKHR,
    thunk32_vkGetDescriptorSetHostMappingVALVE,
    thunk32_vkGetDescriptorSetLayoutHostMappingInfoVALVE,
    thunk32_vkGetDescriptorSetLayoutSupport,
    thunk32_vkGetDescriptorSetLayoutSupportKHR,
    thunk32_vkGetDeviceAccelerationStructureCompatibilityKHR,
    thunk32_vkGetDeviceBufferMemoryRequirements,
    thunk32_vkGetDeviceBufferMemoryRequirementsKHR,
    thunk32_vkGetDeviceFaultInfoEXT,
    thunk32_vkGetDeviceGroupPeerMemoryFeatures,
    thunk32_vkGetDeviceGroupPeerMemoryFeaturesKHR,
    thunk32_vkGetDeviceGroupPresentCapabilitiesKHR,
    thunk32_vkGetDeviceGroupSurfacePresentModesKHR,
    thunk32_vkGetDeviceImageMemoryRequirements,
    thunk32_vkGetDeviceImageMemoryRequirementsKHR,
    thunk32_vkGetDeviceImageSparseMemoryRequirements,
    thunk32_vkGetDeviceImageSparseMemoryRequirementsKHR,
    thunk32_vkGetDeviceMemoryCommitment,
    thunk32_vkGetDeviceMemoryOpaqueCaptureAddress,
    thunk32_vkGetDeviceMemoryOpaqueCaptureAddressKHR,
    thunk32_vkGetDeviceMicromapCompatibilityEXT,
    thunk32_vkGetDeviceQueue,
    thunk32_vkGetDeviceQueue2,
    thunk32_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI,
    thunk32_vkGetDynamicRenderingTilePropertiesQCOM,
    thunk32_vkGetEventStatus,
    thunk32_vkGetFenceStatus,
    thunk32_vkGetFramebufferTilePropertiesQCOM,
    thunk32_vkGetGeneratedCommandsMemoryRequirementsNV,
    thunk32_vkGetImageMemoryRequirements,
    thunk32_vkGetImageMemoryRequirements2,
    thunk32_vkGetImageMemoryRequirements2KHR,
    thunk32_vkGetImageSparseMemoryRequirements,
    thunk32_vkGetImageSparseMemoryRequirements2,
    thunk32_vkGetImageSparseMemoryRequirements2KHR,
    thunk32_vkGetImageSubresourceLayout,
    thunk32_vkGetImageSubresourceLayout2EXT,
    thunk32_vkGetImageViewAddressNVX,
    thunk32_vkGetImageViewHandleNVX,
    thunk32_vkGetMemoryHostPointerPropertiesEXT,
    thunk32_vkGetMicromapBuildSizesEXT,
    thunk32_vkGetPerformanceParameterINTEL,
    thunk32_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT,
    thunk32_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV,
    thunk32_vkGetPhysicalDeviceExternalBufferProperties,
    thunk32_vkGetPhysicalDeviceExternalBufferPropertiesKHR,
    thunk32_vkGetPhysicalDeviceExternalFenceProperties,
    thunk32_vkGetPhysicalDeviceExternalFencePropertiesKHR,
    thunk32_vkGetPhysicalDeviceExternalSemaphoreProperties,
    thunk32_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR,
    thunk32_vkGetPhysicalDeviceFeatures,
    thunk32_vkGetPhysicalDeviceFeatures2,
    thunk32_vkGetPhysicalDeviceFeatures2KHR,
    thunk32_vkGetPhysicalDeviceFormatProperties,
    thunk32_vkGetPhysicalDeviceFormatProperties2,
    thunk32_vkGetPhysicalDeviceFormatProperties2KHR,
    thunk32_vkGetPhysicalDeviceFragmentShadingRatesKHR,
    thunk32_vkGetPhysicalDeviceImageFormatProperties,
    thunk32_vkGetPhysicalDeviceImageFormatProperties2,
    thunk32_vkGetPhysicalDeviceImageFormatProperties2KHR,
    thunk32_vkGetPhysicalDeviceMemoryProperties,
    thunk32_vkGetPhysicalDeviceMemoryProperties2,
    thunk32_vkGetPhysicalDeviceMemoryProperties2KHR,
    thunk32_vkGetPhysicalDeviceMultisamplePropertiesEXT,
    thunk32_vkGetPhysicalDeviceOpticalFlowImageFormatsNV,
    thunk32_vkGetPhysicalDevicePresentRectanglesKHR,
    thunk32_vkGetPhysicalDeviceProperties,
    thunk32_vkGetPhysicalDeviceProperties2,
    thunk32_vkGetPhysicalDeviceProperties2KHR,
    thunk32_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR,
    thunk32_vkGetPhysicalDeviceQueueFamilyProperties,
    thunk32_vkGetPhysicalDeviceQueueFamilyProperties2,
    thunk32_vkGetPhysicalDeviceQueueFamilyProperties2KHR,
    thunk32_vkGetPhysicalDeviceSparseImageFormatProperties,
    thunk32_vkGetPhysicalDeviceSparseImageFormatProperties2,
    thunk32_vkGetPhysicalDeviceSparseImageFormatProperties2KHR,
    thunk32_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV,
    thunk32_vkGetPhysicalDeviceSurfaceCapabilities2KHR,
    thunk32_vkGetPhysicalDeviceSurfaceCapabilitiesKHR,
    thunk32_vkGetPhysicalDeviceSurfaceFormats2KHR,
    thunk32_vkGetPhysicalDeviceSurfaceFormatsKHR,
    thunk32_vkGetPhysicalDeviceSurfacePresentModesKHR,
    thunk32_vkGetPhysicalDeviceSurfaceSupportKHR,
    thunk32_vkGetPhysicalDeviceToolProperties,
    thunk32_vkGetPhysicalDeviceToolPropertiesEXT,
    thunk32_vkGetPhysicalDeviceWin32PresentationSupportKHR,
    thunk32_vkGetPipelineCacheData,
    thunk32_vkGetPipelineExecutableInternalRepresentationsKHR,
    thunk32_vkGetPipelineExecutablePropertiesKHR,
    thunk32_vkGetPipelineExecutableStatisticsKHR,
    thunk32_vkGetPipelinePropertiesEXT,
    thunk32_vkGetPrivateData,
    thunk32_vkGetPrivateDataEXT,
    thunk32_vkGetQueryPoolResults,
    thunk32_vkGetQueueCheckpointData2NV,
    thunk32_vkGetQueueCheckpointDataNV,
    thunk32_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR,
    thunk32_vkGetRayTracingShaderGroupHandlesKHR,
    thunk32_vkGetRayTracingShaderGroupHandlesNV,
    thunk32_vkGetRayTracingShaderGroupStackSizeKHR,
    thunk32_vkGetRenderAreaGranularity,
    thunk32_vkGetSemaphoreCounterValue,
    thunk32_vkGetSemaphoreCounterValueKHR,
    thunk32_vkGetShaderInfoAMD,
    thunk32_vkGetShaderModuleCreateInfoIdentifierEXT,
    thunk32_vkGetShaderModuleIdentifierEXT,
    thunk32_vkGetSwapchainImagesKHR,
    thunk32_vkGetValidationCacheDataEXT,
    thunk32_vkInitializePerformanceApiINTEL,
    thunk32_vkInvalidateMappedMemoryRanges,
    thunk32_vkMapMemory,
    thunk32_vkMergePipelineCaches,
    thunk32_vkMergeValidationCachesEXT,
    thunk32_vkQueueBeginDebugUtilsLabelEXT,
    thunk32_vkQueueBindSparse,
    thunk32_vkQueueEndDebugUtilsLabelEXT,
    thunk32_vkQueueInsertDebugUtilsLabelEXT,
    thunk32_vkQueuePresentKHR,
    thunk32_vkQueueSetPerformanceConfigurationINTEL,
    thunk32_vkQueueSubmit,
    thunk32_vkQueueSubmit2,
    thunk32_vkQueueSubmit2KHR,
    thunk32_vkQueueWaitIdle,
    thunk32_vkReleasePerformanceConfigurationINTEL,
    thunk32_vkReleaseProfilingLockKHR,
    thunk32_vkResetCommandBuffer,
    thunk32_vkResetCommandPool,
    thunk32_vkResetDescriptorPool,
    thunk32_vkResetEvent,
    thunk32_vkResetFences,
    thunk32_vkResetQueryPool,
    thunk32_vkResetQueryPoolEXT,
    thunk32_vkSetDebugUtilsObjectNameEXT,
    thunk32_vkSetDebugUtilsObjectTagEXT,
    thunk32_vkSetDeviceMemoryPriorityEXT,
    thunk32_vkSetEvent,
    thunk32_vkSetPrivateData,
    thunk32_vkSetPrivateDataEXT,
    thunk32_vkSignalSemaphore,
    thunk32_vkSignalSemaphoreKHR,
    thunk32_vkSubmitDebugUtilsMessageEXT,
    thunk32_vkTrimCommandPool,
    thunk32_vkTrimCommandPoolKHR,
    thunk32_vkUninitializePerformanceApiINTEL,
    thunk32_vkUnmapMemory,
    thunk32_vkUpdateDescriptorSetWithTemplate,
    thunk32_vkUpdateDescriptorSetWithTemplateKHR,
    thunk32_vkUpdateDescriptorSets,
    thunk32_vkWaitForFences,
    thunk32_vkWaitForPresentKHR,
    thunk32_vkWaitSemaphores,
    thunk32_vkWaitSemaphoresKHR,
    thunk32_vkWriteAccelerationStructuresPropertiesKHR,
    thunk32_vkWriteMicromapsPropertiesEXT,
};
C_ASSERT(ARRAYSIZE(__wine_unix_call_funcs) == unix_count);

#endif /* USE_STRUCT_CONVERSION) */

NTSTATUS WINAPI vk_direct_unix_call(unixlib_handle_t handle, unsigned int code, void *params)
{
    return __wine_unix_call_funcs[code](params);
}

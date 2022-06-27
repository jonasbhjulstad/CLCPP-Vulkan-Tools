#ifndef Vulkan_WINDOW_HPP
#define Vulkan_WINDOW_HPP
#include <vulkan/vulkan.hpp>
#include <GLFW/glfw3.h>
#include <imgui.h>
#include <imgui_impl_vulkan.h>
#include <imgui_impl_glfw.h>
#include <VulkanInstance.hpp>
#include <VulkanPipelineInitializers.hpp>
#include <VulkanInitializers.hpp>



void setupGLFWVulkanWindow(
                       VulkanInstance &vulkanInstance,
                       int width,
                       int height,
                       uint32_t minImageCount = 2);
void cleanupGLFWVulkanWindow(VkInstance instance, VkDevice device, ImGui_ImplVulkanH_Window *wd);

#endif // Vulkan_WINDOW_HPP
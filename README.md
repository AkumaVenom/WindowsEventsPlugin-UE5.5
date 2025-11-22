# WindowsEventsPlugin-UE5.5

WindowsEventsPlugin – Unreal Engine 5.5

<img width="3839" height="2064" alt="Screenshot 2025-11-23 072423" src="https://github.com/user-attachments/assets/e5dd8373-3e56-4a68-867e-e3f5ac2b07ac" />

=========================================================================

Plugin Created By Justin Gilbert / AkumaVenom

Donation/Tips https://www.paypal.me/akumacreative

AkumaVenom's Discord: https://discord.gg/Uf8Q8usSmk

=========================================================================

A lightweight Unreal Engine 5.5 plugin that provides real-time Windows operating system event detection.
This plugin exposes Windows window events and toast notifications to Blueprint so you can react to user activity, detect open/closed applications, and receive native notification text inside Unreal Engine.

Features

• Detect when the active window changes (Alt-Tab, app focus changes, etc.)

• Detect when any window opens

• Detect when any window closes

• Detect when a window’s title text changes (browser tab changes, document titles, etc.)

• Detect Windows 10/11 toast notifications

• Outputs window titles, process paths, app names, and notification text

• 100% Blueprint accessible

• No polling – uses lightweight OS-level event hooks

• Supports Windows 10 and Windows 11

• Works in packaged builds

=========================================================================

Installation

Place the plugin folder here:
YourProject/Plugins/WindowsEventsPlugin/

Launch Unreal Engine 5.5

Enable the plugin in:
Edit → Plugins → Project → Windows Events Listener

Restart the editor if requested.

=========================================================================

Blueprint Usage

All events come from the UWinEventManager Blueprint-accessible class.

To get the manager instance, call:

Get Win Event Manager

This returns the singleton that broadcasts all OS events.

Exposed Blueprint Events

These events can be bound directly in Blueprint:

On Active Window Changed
Outputs:

Title (string)

Process (string)

On Window Opened
Outputs:

Title (string)

Process (string)

On Window Closed
Outputs:

Title (string)

Process (string)

On Window Title Changed
Outputs:

Title (string)

Process (string)

On Windows Notification
Outputs:

App (string)

Text (string)
Detects Windows toast notifications (e.g., Discord, Chrome, Steam, system alerts).

=========================================================================

Example Workflow

• Detect when the user switches to Chrome or another program.
• React when a new application window opens.
• Monitor browser title changes to detect which site or tab is active.
• Trigger events when the user closes an app.
• Capture notification text from any app (Discord message, email alerts, etc.)

=========================================================================

Compatibility

• Unreal Engine 5.5+
• Windows 10 / Windows 11
• Works in PIE and Packaged Builds
• No third-party libraries required

=========================================================================

License

Free to use, modify, and distribute in any project but be sure to give credit to "Justin Gilbert/AkumaVenom".

=========================================================================

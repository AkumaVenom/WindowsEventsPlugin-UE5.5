# WindowsEventsPlugin-UE5.5

WindowsEventsPlugin – Unreal Engine 5.5

<img width="2764" height="674" alt="Screenshot 2025-11-23 103208" src="https://github.com/user-attachments/assets/b1facc8d-a197-465a-8e59-27d5d0212658" />

<img width="2952" height="1356" alt="11" src="https://github.com/user-attachments/assets/5a019ab8-2883-4c20-80d8-372076dd097e" />

=========================================================================

Plugin Created By Justin Gilbert / AkumaVenom

Donation/Tips https://www.paypal.me/akumacreative

AkumaVenom's Discord: https://discord.gg/Uf8Q8usSmk

=========================================================================

A lightweight Unreal Engine 5.5 plugin that provides real-time Windows operating system event detection 100% completely local without internet needed.
This plugin exposes Windows window events and text contents and toast notifications to Blueprint so you can react to user activity, detect open/closed applications, and receive native notification text inside Unreal Engine.

Features

• Detect when the active window changes (Alt-Tab, app focus changes, etc.)

• Detect when any window opens

• Detect when any window closes

• Detect when a window’s title text changes (browser tab changes, document titles, etc.)

• Detect Windows 10/11 toast notifications

• Outputs Entire webpage/browser/notepad text to Unreal Engine at runtime

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

All Windows events and text extraction features are accessed through the
UWinEventManager Blueprint-accessible class.

Getting the Manager Instance

To access the plugin, call:

Get Win Event Manager

This returns the singleton instance that:

Listens for OS-level window events

Broadcasts Blueprint events

Provides functions like GetActiveWindowText()

Required Setup (Important)

On Begin Play, you must assign the WinEventManager events.
This ensures the plugin correctly registers its Windows hooks.

Example flow:

Begin Play →
    Get Win Event Manager →
        Assign On Active Window Changed
        Assign On Window Title Changed
        Assign On Window Opened
        Assign On Window Closed
        Assign On Windows Notification
        
(Using the Assign/Bind nodes is required. Do not use the raw events from the class panel.)

=========================================================================

Exposed Blueprint Events

These events can be assigned on Begin Play and will fire automatically whenever the corresponding Windows-level event occurs.

On Active Window Changed

Fires whenever the user switches to a different window.

Outputs:

Title (string) — window title

Process (string) — process name (chrome.exe, notepad.exe, etc.)

On Window Opened

Fires when a new top-level window is created.

Outputs:

Title

Process

On Window Closed

Fires when a top-level window is destroyed.

Outputs:

Title

Process

On Window Title Changed

Fires when the title text of the active window changes.
Useful for browser tab changes.

Outputs:

Title

Process

On Windows Notification

Fires when a system toast notification is received (if enabled globally on Windows).

Outputs:

App (string) — source application

Text (string) — notification body text

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

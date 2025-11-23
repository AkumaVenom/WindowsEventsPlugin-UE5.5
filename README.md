# WindowsEventsPlugin-UE5.5

WindowsEventsPlugin – Unreal Engine 5.5

<img width="2764" height="674" alt="Screenshot 2025-11-23 103208" src="https://github.com/user-attachments/assets/b1facc8d-a197-465a-8e59-27d5d0212658" />

=========================================================================

Plugin Created By Justin Gilbert / AkumaVenom

Donation/Tips https://www.paypal.me/akumacreative

AkumaVenom's Discord: https://discord.gg/Uf8Q8usSmk

=========================================================================

A lightweight Unreal Engine 5.5 plugin that provides real-time Windows operating system event detection 100% completely local without internet needed.
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

Upcoming v2.0 Roadmap:

✔ Pull Entire webpage/browser/notepad text to Unreal Engine at runtime

✔ All visible DOM text

✔ Updates every time tab changes

✔ Works on Chrome/Edge/Firefox/notepad/ect

✔ Works in PIE and packaged

✔ 100% completely local without internet needed.

It will pull text from things like:

🌐 Web browsers (Chrome / Edge / Firefox / etc.)

📄 Notepad / text editors

🗂 Some Explorer views / file lists / labels

⚙️ Other apps that expose text via UI Automation

Will Work With:

Text editors: Notepad, Notepad++, VSCode (partial)

Windows Explorer: folder names, file names, labels

Many normal Windows apps: Settings app, dialogs, installers

Any UI that exposes an accessibility text tree via UI Automation

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

assign events from "Win Event Manager" to beginplay to make it fire the events properly, refer to the example image above.

Exposed Blueprint Events

These events can be assigned/bound to beginplay directly in Blueprint:

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

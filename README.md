# 🐷 Pigsy: Pure Data to VST3 Cloud Compiler Matrix

Pigsy is an open-source, automated continuous-integration compiler template. It allows you to transform standard visual Pure Data (`.pd`) vanilla patches directly into highly optimized, fully native **VST3** and **CLAP** desktop audio plugins entirely in the cloud via GitHub Actions.

By leveraging the **Wasted Audio Heavy (`hvcc`) compiler** alongside the **DISTRHO Plugin Framework (DPF)**, Pigsy converts visual audio signal paths into high-performance C++ source code. This entirely eliminates the overhead of running a live patching host environment inside your Digital Audio Workstation (DAW).

---

## 🚀 Key Features

* **Dynamic Patch Naming:** Name your `.pd` file whatever you like; no hardcoded `main.pd` file restrictions.
* **Zero Host Overhead:** Patches compile directly to low-level C++ math blocks, lowering CPU usage.
* **100% Brand-Free:** Generates standard generic plugin bundles with no forced watermarks or splash screen interfaces.
* **Cloud Native Workflow:** Run compilation parameters safely inside Safari on iPadOS or any web browser without maintaining a local system toolchain.

---

## 📂 Repository File Blueprint

To operate the Pigsy ecosystem, structure your root repository index precisely as follows:

```text
├── .github/
│   └── workflows/
│       └── pigsy-compiler.yml   <-- The automated build machine script
├── YOUR_CUSTOM_PATCH.pd          <-- Your custom patch file (e.g. THE_NOISE_MACHINE.pd)
├── config.json                   <-- Metadata mapping configurations
└── README.md                     <-- Documentation engine
```

---

## ⚙️ Configuration Setup (`config.json`)

The initialization properties file handles project indexing parameters. Open `config.json` in your root workspace folder and configure your properties:

```json
{
  "project_name": "pigsy",
  "plugin_name": "The Noise Machine",
  "developer_author": "YourName",
  "target_patch_file": "THE_NOISE_MACHINE.pd",
  "plugin_type": "instrument",
  "output_formats": ["vst3", "clap"]
}
```

### Parameter Map


| Parameter Field | Data Type | Implementation Guidelines |
|:---|:---|:---|
| `project_name` | String | Internal unix-safe identity tag (Use lowercase, no spaces). |
| `plugin_name` | String | The official title displayed inside your DAW's plugin lists. |
| `developer_author` | String | Developer metadata string tied to the plugin binary asset. |
| `target_patch_file` | String | The exact name of your `.pd` patch file matching capitalization. |
| `plugin_type` | String | Declare either `"instrument"` (MIDI-driven synth) or `"fx"` (Audio effect). |
| `output_formats` | Array | Formats processed through compiler blocks. Supported: `["vst3", "clap"]`. |

---

## 🛠️ Step-by-Step Deployment Protocol

### Step 1: Initialize Your Workspace
1. Select **Use this template** on this repository to instantiate a clean fork inside your GitHub account profile.
2. Select your repository state as **Public**. *Note: Public repositories receive unlimited free automated execution minutes, completely avoiding private account locks.*

### Step 2: Provision Your Source Materials
1. Upload your raw, text-based Pure Data patch file (e.g. generated from ChatGPT or saved locally) into the root repository.
2. Update the `config.json` file. Ensure the `"target_patch_file"` property exactly reflects your uploaded file name (e.g., `"target_patch_file": "THE_NOISE_MACHINE.pd"`).
3. Confirm the configuration file remains structured with valid JSON properties and contains matching braces `{}`.

### Step 3: Trigger and Download the Build
1. Click the **Actions** tab on the header tracking index bar.
2. If prompted, select **Enable GitHub Actions**.
3. Every subsequent text code save or file upload automatically wakes up the Linux builder. A yellow status symbol 🟡 will indicate that it is actively compiling.
4. Allow **3 to 5 minutes** for completion. Once the matrix changes to a green checkmark ✅, click directly on the completed log title string.
5. Scroll down to the bottom to locate the **Artifacts** table section and click **Pigsy-Compiled-Plugins** to download your archived `.vst3` archive block.

---

## ⚠️ Pure Data Vanilla Object Compatibility

Because Pigsy utilizes the `hvcc` parser engine to optimize code execution speed, it translates **Pure Data Vanilla math primitives** explicitly. It does not support complex external dependencies or legacy processing objects.

### ✅ Supported Structures
* **Audio DSP Operations:** `[*~]`, `[+~]`, `[-~]`, `[/~]`, `[osc~]`, `[phasor~]`, `[noise~]`, `[line~]`, `[hip~]`, `[lop~]`
* **Control Paths:** `[metro]`, `[bang]`, `[float]`, `[symbol]`, `[pack]`, `[unpack]`, `[route]`
* **Memory Blocks:** Standard visual structural arrays and graphical lookup tables (`[table]`).

### ❌ Unsupported Structures
* Complex structural evaluation string operators like `[expr]` or `[expr~]`.
* Graphical processing objects (`[gem]`) or video translation wrappers.
* External third-party libraries (`zexy`, `cyclone`, etc.) not natively declared inside vanilla Pure Data distributions.

---

## 🎹 DAW Deployment Instructions

Once you extract the `.zip` archive on your host audio computer workspace, copy the generated file structures directly into your operating software's standard native scanning index path directories:

* **Windows Architecture Platform:** `C:\Program Files\Common Files\VST3\`
* **Linux Architecture Platform:** `~/.vst3/`

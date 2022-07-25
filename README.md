# vsc-nrf-sdk

## Option one

Pre-Requisites:
- git installed
- vscode installed, with plugins "Remote Containers", "Cortex-Debug"
- docker installed
- Segger JLinkServer

How to use:
1. "git clone https://github.com/stemschmidt/vsc-nrf-sdk.git"
2. "cd vsc-nrf-sdk"
3. "code ." or open vsc-nrf-sdk in VSCode
4. in VSCode, select "reopen folder in container"
5. after docker image is downloaded and started, go to "TERMINAL" tab:
6. "west init -l application"
7. "west update"
8. "source zephyr/zephyr-env.sh"
9. "cd application"
10. "west build -b nrf9160dk_nrf9160_ns" and wait for the build to finish...

11. on the host, launch the JLinkGDBServer (e.g "JLinkGDBServerCLExe -if swd -device nRF9160_xxAA -vd")
12. on the host, launch the JLinkRTTViewer to see debug log (e.g "JLinkRTTViewer", select "Connection to J-Link" -> "Existing session")

13. Select "Run and Debug" icon in activity bar in VSCode --> Download binary and start debugging by launching "JLink" 

## Option two, research in progress

Pre-Requisites:
- current browser
- after the workspace is opened, continue with step 6. from Option one
- if you want to flash and debug locally: Segger JLinkServer

<a href="https://gitpod.io/#https://github.com/stemschmidt/vsc-nrf-sdk.git">
  <img
    src="https://img.shields.io/badge/Contribute%20with-Gitpod-908a85?logo=gitpod"
    alt="Contribute with Gitpod"
  />
</a>

### ISSUE:
- don't know how to access the JLinkGDBServer on my host: I can open the workspace locally in VSCode, but I am not able to access the JLinkGDBServer
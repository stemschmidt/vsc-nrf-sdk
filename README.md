# vsc-nrf-sdk
Pre-Requisites:
- git installed
- vscode installed, with plugins "Remote Containers", "Cortex-Debug"
- docker installed

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

11. on the host, launch the JLinkGDBServer (e.g "JLinkGDBServerCL -if swd -device nRF9160_xxAA -vd")
12. on the host, launch the JLinkRTTViewer to see debug log (e.g "JLinkRTTViewer", select "Connection to J-Link" -> "Existing session")

13. Select "Run and Debug" icon in activity bar in VSCode --> Download binary and start debugging by launching "JLink" 


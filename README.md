# Conveyor Project

<!-- Replace this paragraph with a short description of the conveyor, what it is
designed to do, and its current development status. -->

A compact conveyor system with a custom controller PCB and 3D-printable mechanical parts.

## Project status

<!-- Examples: Planning, Prototype, Testing, or Complete. -->

**Status:** Prototype

## Repository contents

```text
conveyor-project/
├── pcb-files/                 KiCad design and fabrication files
│   ├── NewConveyorPCB.kicad_pro
│   ├── NewConveyorPCB.kicad_sch
│   ├── NewConveyorPCB.kicad_pcb
│   └── fab-files/gerbers.zip
├── stl-files/                 3D-printable mechanical parts
│   ├── ConveyorBase.stl
│   ├── MotorWheel.stl
│   ├── Sprocket.stl
│   ├── SprocketPin.stl
│   └── TreadLink.stl
├── code/                      Arduino code to control conveyor
└── README.md
```

## Requirements

<!-- Add versions when they are known. -->

- [KiCad](https://www.kicad.org/) to view or edit the PCB design
- A slicer and 3D printer for the STL parts
- Electronic components listed in the PCB bill of materials
- Motor, fasteners, wiring, and power supply

## Bill of materials

<!-- Replace this table with the actual parts list. Add a BOM export to
pcb-files/ if the list becomes long. -->

| Item | Quantity | Specification | Notes |
| --- | ---: | --- | --- |
| Motor | 1 | 5V DC Motor | [Digikey](https://www.digikey.com/en/products/detail/pololu/992/10449920) |
| Motor Driver | 1 | L293D | [Digikey](https://www.digikey.com/en/products/detail/stmicroelectronics/L293D/634700) |
| Arduino Nano | 1 | ABX00143 | [Digikey](https://www.digikey.com/en/products/detail/arduino/ABX00143/26766495) |
| 2 Position Terminal Blocks | 4 | TB002-599-02BE | [Digikey](https://www.digikey.com/en/products/detail/same-sky-formerly-cui-devices/TB002-500-02BE/10064069) |
| 4 Position Terminal Blocks | 3 | OSTTC042162 | [Digikey](https://www.digikey.com/en/products/detail/on-shore-technology-inc/OSTTC042162/614560) |
| Power supply | 1 | 5V DC Power Supply | [Amazon](https://www.amazon.com/Adjustable-Switching-Regulated-Adjustments-Jesverty/dp/B09YSJQWRG/ref=sr_1_9?crid=RU2I6P17LDUR&dib=eyJ2IjoiMSJ9.bpne59jAEmaTFwmIsQCQhTqgw4IQY65Dw4FDdB8OQz_Ecffxi1TowvI5zsghytbijl_1j7_s0npvxgVQFqhbWMT10DBirUDh4-yq3dJqWEhJmdyZwxivPJMaoJ1KstsehQq5iAvTCPxRA2gXOBRJsTDN7kXZ_Kgxwffos8XqOIRSXc5FngmeqCCIJYCrZ_1-oBqjrCkD9KUe5rgq8wMdk-KiZEaG6KIPqqcH2dt3D-8.EnnGaUa-Mi3bt2TU4QdSq8au0XoTXh95RY_4BBbdKmI&dib_tag=se&keywords=5v%2Bpower%2Bsupply%2Belectronics&qid=1785630137&sprefix=5v%2Bpower%2Bsupply%2Belectronics%2Caps%2C166&sr=8-9&th=1)|
| PCB | 1 | NewConveyorPCB | [JLCPCB](https://cart.jlcpcb.com/quote?stencilLayer=2&stencilWidth=100&stencilLength=100&stencilCounts=5&plateType=1&spm=Jlcpcb.Homepage.1010) |
| Conveyor base | 1 | 3D printed | `ConveyorBase.stl` |
| Motor wheel | 1 | 3D printed | `MotorWheel.stl` |
| Sprocket | 2 | 3D printed | `Sprocket.stl` |
| Sprocket pin | 2 | 3D printed | `SprocketPin.stl` |
| Tread link | 28 | 3D printed | `TreadLink.stl` |
| Ball Bearings | 4 | Any bearing that meets required dimensions | [Amazon](https://www.amazon.com/dp/B09PKD8QZZ?ref=ppx_yo2ov_dt_b_fed_asin_title&th=1) |
| Dowel Pins | 27 | 1/8" diameter 2-1/2" length | [McMaster](https://www.mcmaster.com/90145A487/) |
| Motor Band | 1 | TBD | TBD |


## Fabrication

1. Use any PCB fabrication company. JLCPCB is cheap and easy to use.

### PCB

1. Open `pcb-files/NewConveyorPCB.kicad_pro` in KiCad to review or modify the design.
2. Use `pcb-files/fab-files/gerbers.zip` when ordering the PCB.
3. Confirm the board dimensions, layer stack, drill files, and design rules with the manufacturer before ordering.

<!-- Add PCB manufacturer settings, component placement notes, and assembly
instructions here. -->

### 3D-printed parts

The printable models are in `stl-files/`.

## Assembly

<!-- Replace these placeholders with the tested assembly sequence. Photos or a
diagram are especially useful here. -->

1. Print and inspect all mechanical parts.
2. Solder components and test PCB.
3. Install the motor and motor wheel in the conveyor base.
4. Assemble the sprockets and tread links.
5. Connect the electronics and verify polarity before applying power.
6. Upload conveyor controller program to the Arduino Nano.
7. Test at low speed and adjust alignment and tension as needed.


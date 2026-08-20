# reset_hell_party_value

`_ZN13CBattle_Field22reset_hell_party_valueEv`

`CBattle_Field::reset_hell_party_value()`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830a57c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830a57c  _ZN13CBattle_Field22reset_hell_party_valueEv
#           CBattle_Field::reset_hell_party_value()
# range [0x0830a57c, 0x0830a707]
0830a57c +0x000:  push   %ebp
0830a57d +0x001:  mov    %esp,%ebp
0830a57f +0x003:  push   %ebx
0830a580 +0x004:  sub    $0x24,%esp
0830a583 +0x007:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830a588 +0x00c:  mov    %eax,(%esp)
0830a58b +0x00f:  call   0836378c <_ZN12CDataManager27get_hellparty_script_valuesEv>  ; CDataManager::get_hellparty_script_values()
0830a590 +0x014:  mov    (%eax),%edx
0830a592 +0x016:  mov    0x8(%ebp),%eax
0830a595 +0x019:  mov    %edx,0x1e8(%eax)
0830a59b +0x01f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830a5a0 +0x024:  mov    %eax,(%esp)
0830a5a3 +0x027:  call   0836378c <_ZN12CDataManager27get_hellparty_script_valuesEv>  ; CDataManager::get_hellparty_script_values()
0830a5a8 +0x02c:  mov    0x4(%eax),%edx
0830a5ab +0x02f:  mov    0x8(%ebp),%eax
0830a5ae +0x032:  mov    %edx,0x1ec(%eax)
0830a5b4 +0x038:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830a5b9 +0x03d:  mov    %eax,(%esp)
0830a5bc +0x040:  call   0836378c <_ZN12CDataManager27get_hellparty_script_valuesEv>  ; CDataManager::get_hellparty_script_values()
0830a5c1 +0x045:  mov    0xc(%eax),%edx
0830a5c4 +0x048:  mov    0x8(%ebp),%eax
0830a5c7 +0x04b:  mov    %edx,0x1f4(%eax)
0830a5cd +0x051:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830a5d2 +0x056:  mov    %eax,(%esp)
0830a5d5 +0x059:  call   0836378c <_ZN12CDataManager27get_hellparty_script_valuesEv>  ; CDataManager::get_hellparty_script_values()
0830a5da +0x05e:  flds   0x10(%eax)
0830a5dd +0x061:  flds   &data#ed16ca85(.rodata)
0830a5e3 +0x067:  fdivrp %st,%st(1)
0830a5e5 +0x069:  mov    0x8(%ebp),%eax
0830a5e8 +0x06c:  fstps  0x1f8(%eax)
0830a5ee +0x072:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830a5f3 +0x077:  mov    %eax,(%esp)
0830a5f6 +0x07a:  call   0836378c <_ZN12CDataManager27get_hellparty_script_valuesEv>  ; CDataManager::get_hellparty_script_values()
0830a5fb +0x07f:  flds   0x14(%eax)
0830a5fe +0x082:  flds   &data#ed16ca85(.rodata)
0830a604 +0x088:  fdivrp %st,%st(1)
0830a606 +0x08a:  mov    0x8(%ebp),%eax
0830a609 +0x08d:  fstps  0x1fc(%eax)
0830a60f +0x093:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830a614 +0x098:  mov    %eax,(%esp)
0830a617 +0x09b:  call   0836378c <_ZN12CDataManager27get_hellparty_script_valuesEv>  ; CDataManager::get_hellparty_script_values()
0830a61c +0x0a0:  flds   0x4c(%eax)
0830a61f +0x0a3:  flds   &data#ed16ca85(.rodata)
0830a625 +0x0a9:  fdivrp %st,%st(1)
0830a627 +0x0ab:  mov    0x8(%ebp),%eax
0830a62a +0x0ae:  fstps  0x234(%eax)
0830a630 +0x0b4:  movl   $0x0,-0x14(%ebp)
0830a637 +0x0bb:  jmp    0830a669 <+0xed>
0830a639 +0x0bd:  mov    -0x14(%ebp),%ebx
0830a63c +0x0c0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830a641 +0x0c5:  mov    %eax,(%esp)
0830a644 +0x0c8:  call   0836378c <_ZN12CDataManager27get_hellparty_script_valuesEv>  ; CDataManager::get_hellparty_script_values()
0830a649 +0x0cd:  mov    -0x14(%ebp),%edx
0830a64c +0x0d0:  add    $0x4,%edx
0830a64f +0x0d3:  flds   0x8(%eax,%edx,4)
0830a653 +0x0d7:  flds   &data#ed16ca85(.rodata)
0830a659 +0x0dd:  fdivrp %st,%st(1)
0830a65b +0x0df:  mov    0x8(%ebp),%eax
0830a65e +0x0e2:  lea    0x7c(%ebx),%edx
0830a661 +0x0e5:  fstps  0x10(%eax,%edx,4)
0830a665 +0x0e9:  addl   $0x1,-0x14(%ebp)
0830a669 +0x0ed:  cmpl   $0x3,-0x14(%ebp)
0830a66d +0x0f1:  setle  %al
0830a670 +0x0f4:  test   %al,%al
0830a672 +0x0f6:  jne    0830a639 <+0xbd>
0830a674 +0x0f8:  movl   $0x0,-0x10(%ebp)
0830a67b +0x0ff:  jmp    0830a6b0 <+0x134>
0830a67d +0x101:  mov    -0x10(%ebp),%ebx
0830a680 +0x104:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830a685 +0x109:  mov    %eax,(%esp)
0830a688 +0x10c:  call   0836378c <_ZN12CDataManager27get_hellparty_script_valuesEv>  ; CDataManager::get_hellparty_script_values()
0830a68d +0x111:  mov    -0x10(%ebp),%edx
0830a690 +0x114:  add    $0x8,%edx
0830a693 +0x117:  flds   0x8(%eax,%edx,4)
0830a697 +0x11b:  flds   &data#ed16ca85(.rodata)
0830a69d +0x121:  fdivrp %st,%st(1)
0830a69f +0x123:  mov    0x8(%ebp),%eax
0830a6a2 +0x126:  lea    0x80(%ebx),%edx
0830a6a8 +0x12c:  fstps  0x10(%eax,%edx,4)
0830a6ac +0x130:  addl   $0x1,-0x10(%ebp)
0830a6b0 +0x134:  cmpl   $0x4,-0x10(%ebp)
0830a6b4 +0x138:  setle  %al
0830a6b7 +0x13b:  test   %al,%al
0830a6b9 +0x13d:  jne    0830a67d <+0x101>
0830a6bb +0x13f:  movl   $0x0,-0xc(%ebp)
0830a6c2 +0x146:  jmp    0830a6f7 <+0x17b>
0830a6c4 +0x148:  mov    -0xc(%ebp),%ebx
0830a6c7 +0x14b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830a6cc +0x150:  mov    %eax,(%esp)
0830a6cf +0x153:  call   0836378c <_ZN12CDataManager27get_hellparty_script_valuesEv>  ; CDataManager::get_hellparty_script_values()
0830a6d4 +0x158:  mov    -0xc(%ebp),%edx
0830a6d7 +0x15b:  add    $0xc,%edx
0830a6da +0x15e:  flds   0xc(%eax,%edx,4)
0830a6de +0x162:  flds   &data#ed16ca85(.rodata)
0830a6e4 +0x168:  fdivrp %st,%st(1)
0830a6e6 +0x16a:  mov    0x8(%ebp),%eax
0830a6e9 +0x16d:  lea    0x84(%ebx),%edx
0830a6ef +0x173:  fstps  0x14(%eax,%edx,4)
0830a6f3 +0x177:  addl   $0x1,-0xc(%ebp)
0830a6f7 +0x17b:  cmpl   $0x3,-0xc(%ebp)
0830a6fb +0x17f:  setle  %al
0830a6fe +0x182:  test   %al,%al
0830a700 +0x184:  jne    0830a6c4 <+0x148>
0830a702 +0x186:  add    $0x24,%esp
0830a705 +0x189:  pop    %ebx
0830a706 +0x18a:  pop    %ebp
0830a707 +0x18b:  ret
```

## 反编译 C

```c
// CBattle_Field::reset_hell_party_value @ 0x830a57c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CBattle_Field::reset_hell_party_value() */

void __thiscall CBattle_Field::reset_hell_party_value(CBattle_Field *this)

{
  undefined4 *puVar1;
  int iVar2;
  int local_18;
  int local_14;
  int local_10;
  
  G_CDataManager();
  puVar1 = (undefined4 *)CDataManager::get_hellparty_script_values();
  *(undefined4 *)(this + 0x1e8) = *puVar1;
  G_CDataManager();
  iVar2 = CDataManager::get_hellparty_script_values();
  *(undefined4 *)(this + 0x1ec) = *(undefined4 *)(iVar2 + 4);
  G_CDataManager();
  iVar2 = CDataManager::get_hellparty_script_values();
  *(undefined4 *)(this + 500) = *(undefined4 *)(iVar2 + 0xc);
  G_CDataManager();
  iVar2 = CDataManager::get_hellparty_script_values();
  *(float *)(this + 0x1f8) = *(float *)(iVar2 + 0x10) / _DAT_08c23d74;
  G_CDataManager();
  iVar2 = CDataManager::get_hellparty_script_values();
  *(float *)(this + 0x1fc) = *(float *)(iVar2 + 0x14) / _DAT_08c23d74;
  G_CDataManager();
  iVar2 = CDataManager::get_hellparty_script_values();
  *(float *)(this + 0x234) = *(float *)(iVar2 + 0x4c) / _DAT_08c23d74;
  for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
    G_CDataManager();
    iVar2 = CDataManager::get_hellparty_script_values();
    *(float *)(this + (local_18 + 0x7c) * 4 + 0x10) =
         *(float *)(iVar2 + 8 + (local_18 + 4) * 4) / _DAT_08c23d74;
  }
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    G_CDataManager();
    iVar2 = CDataManager::get_hellparty_script_values();
    *(float *)(this + (local_14 + 0x80) * 4 + 0x10) =
         *(float *)(iVar2 + 8 + (local_14 + 8) * 4) / _DAT_08c23d74;
  }
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    G_CDataManager();
    iVar2 = CDataManager::get_hellparty_script_values();
    *(float *)(this + (local_10 + 0x84) * 4 + 0x14) =
         *(float *)(iVar2 + 0xc + (local_10 + 0xc) * 4) / _DAT_08c23d74;
  }
  return;
}
```

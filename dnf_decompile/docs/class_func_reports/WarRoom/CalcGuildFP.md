# CalcGuildFP

`_ZN7WarRoom11CalcGuildFPEv`

`WarRoom::CalcGuildFP()`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086bbea6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086bbea6  _ZN7WarRoom11CalcGuildFPEv
#           WarRoom::CalcGuildFP()
# range [0x086bbea6, 0x086bc0af]
086bbea6 +0x000:  push   %ebp
086bbea7 +0x001:  mov    %esp,%ebp
086bbea9 +0x003:  push   %ebx
086bbeaa +0x004:  sub    $0x54,%esp
086bbead +0x007:  lea    -0x3c(%ebp),%edx
086bbeb0 +0x00a:  mov    $0x0,%ecx
086bbeb5 +0x00f:  mov    $0x18,%eax
086bbeba +0x014:  mov    %eax,%ebx
086bbebc +0x016:  and    $0xfffffffc,%ebx
086bbebf +0x019:  mov    $0x0,%eax
086bbec4 +0x01e:  mov    %ecx,(%edx,%eax,1)
086bbec7 +0x021:  add    $0x4,%eax
086bbeca +0x024:  cmp    %ebx,%eax
086bbecc +0x026:  jb     086bbec4 <+0x1e>
086bbece +0x028:  add    %eax,%edx
086bbed0 +0x02a:  movl   $0x0,-0x42(%ebp)
086bbed7 +0x031:  movw   $0x0,-0x3e(%ebp)
086bbedd +0x037:  movl   $0x0,-0x24(%ebp)
086bbee4 +0x03e:  jmp    086bbf4f <+0xa9>
086bbee6 +0x040:  mov    -0x24(%ebp),%edx
086bbee9 +0x043:  mov    0x8(%ebp),%eax
086bbeec +0x046:  add    $0x48,%edx
086bbeef +0x049:  mov    0xc(%eax,%edx,4),%eax
086bbef3 +0x04d:  test   %eax,%eax
086bbef5 +0x04f:  je     086bbf4a <+0xa4>
086bbef7 +0x051:  mov    -0x24(%ebp),%ebx
086bbefa +0x054:  mov    -0x24(%ebp),%edx
086bbefd +0x057:  mov    0x8(%ebp),%eax
086bbf00 +0x05a:  add    $0x48,%edx
086bbf03 +0x05d:  mov    0xc(%eax,%edx,4),%eax
086bbf07 +0x061:  mov    %eax,(%esp)
086bbf0a +0x064:  call   086458ce <_ZN15CUserCharacInfo19GetFinishPointTotalEv>  ; CUserCharacInfo::GetFinishPointTotal()
086bbf0f +0x069:  mov    0x8(%ebp),%edx
086bbf12 +0x06c:  lea    0x68(%ebx),%ecx
086bbf15 +0x06f:  mov    %eax,0x4(%edx,%ecx,4)
086bbf19 +0x073:  mov    -0x24(%ebp),%ebx
086bbf1c +0x076:  mov    -0x24(%ebp),%edx
086bbf1f +0x079:  mov    0x8(%ebp),%eax
086bbf22 +0x07c:  add    $0x48,%edx
086bbf25 +0x07f:  mov    0xc(%eax,%edx,4),%eax
086bbf29 +0x083:  mov    %eax,(%esp)
086bbf2c +0x086:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
086bbf31 +0x08b:  mov    %eax,-0x3c(%ebp,%ebx,4)
086bbf35 +0x08f:  mov    -0x24(%ebp),%eax
086bbf38 +0x092:  mov    -0x3c(%ebp,%eax,4),%eax
086bbf3c +0x096:  test   %eax,%eax
086bbf3e +0x098:  jne    086bbf4b <+0xa5>
086bbf40 +0x09a:  mov    -0x24(%ebp),%eax
086bbf43 +0x09d:  movb   $0x1,-0x42(%ebp,%eax,1)
086bbf48 +0x0a2:  jmp    086bbf4b <+0xa5>
086bbf4a +0x0a4:  nop
086bbf4b +0x0a5:  addl   $0x1,-0x24(%ebp)
086bbf4f +0x0a9:  cmpl   $0x5,-0x24(%ebp)
086bbf53 +0x0ad:  setle  %al
086bbf56 +0x0b0:  test   %al,%al
086bbf58 +0x0b2:  jne    086bbee6 <+0x40>
086bbf5a +0x0b4:  movl   $0x0,-0x20(%ebp)
086bbf61 +0x0bb:  jmp    086bc09b <+0x1f5>
086bbf66 +0x0c0:  mov    -0x20(%ebp),%edx
086bbf69 +0x0c3:  mov    0x8(%ebp),%eax
086bbf6c +0x0c6:  add    $0x48,%edx
086bbf6f +0x0c9:  mov    0xc(%eax,%edx,4),%eax
086bbf73 +0x0cd:  test   %eax,%eax
086bbf75 +0x0cf:  je     086bc090 <+0x1ea>
086bbf7b +0x0d5:  mov    -0x20(%ebp),%eax
086bbf7e +0x0d8:  movzbl -0x42(%ebp,%eax,1),%eax
086bbf83 +0x0dd:  test   %al,%al
086bbf85 +0x0df:  jne    086bc093 <+0x1ed>
086bbf8b +0x0e5:  mov    -0x20(%ebp),%edx
086bbf8e +0x0e8:  mov    0x8(%ebp),%eax
086bbf91 +0x0eb:  add    $0x68,%edx
086bbf94 +0x0ee:  mov    0x4(%eax,%edx,4),%eax
086bbf98 +0x0f2:  mov    %eax,-0x1c(%ebp)
086bbf9b +0x0f5:  movl   $0x1,-0x18(%ebp)
086bbfa2 +0x0fc:  mov    -0x20(%ebp),%eax
086bbfa5 +0x0ff:  movb   $0x1,-0x42(%ebp,%eax,1)
086bbfaa +0x104:  movl   $0x0,-0x48(%ebp)
086bbfb1 +0x10b:  movw   $0x0,-0x44(%ebp)
086bbfb7 +0x111:  mov    -0x20(%ebp),%eax
086bbfba +0x114:  movb   $0x1,-0x48(%ebp,%eax,1)
086bbfbf +0x119:  mov    -0x20(%ebp),%eax
086bbfc2 +0x11c:  add    $0x1,%eax
086bbfc5 +0x11f:  mov    %eax,-0x10(%ebp)
086bbfc8 +0x122:  jmp    086bc027 <+0x181>
086bbfca +0x124:  mov    -0x10(%ebp),%edx
086bbfcd +0x127:  mov    0x8(%ebp),%eax
086bbfd0 +0x12a:  add    $0x48,%edx
086bbfd3 +0x12d:  mov    0xc(%eax,%edx,4),%eax
086bbfd7 +0x131:  test   %eax,%eax
086bbfd9 +0x133:  je     086bc01f <+0x179>
086bbfdb +0x135:  mov    -0x10(%ebp),%eax
086bbfde +0x138:  movzbl -0x42(%ebp,%eax,1),%eax
086bbfe3 +0x13d:  test   %al,%al
086bbfe5 +0x13f:  jne    086bc022 <+0x17c>
086bbfe7 +0x141:  mov    -0x20(%ebp),%eax
086bbfea +0x144:  mov    -0x3c(%ebp,%eax,4),%edx
086bbfee +0x148:  mov    -0x10(%ebp),%eax
086bbff1 +0x14b:  mov    -0x3c(%ebp,%eax,4),%eax
086bbff5 +0x14f:  cmp    %eax,%edx
086bbff7 +0x151:  jne    086bc023 <+0x17d>
086bbff9 +0x153:  mov    -0x10(%ebp),%edx
086bbffc +0x156:  mov    0x8(%ebp),%eax
086bbfff +0x159:  add    $0x68,%edx
086bc002 +0x15c:  mov    0x4(%eax,%edx,4),%eax
086bc006 +0x160:  add    %eax,-0x1c(%ebp)
086bc009 +0x163:  addl   $0x1,-0x18(%ebp)
086bc00d +0x167:  mov    -0x10(%ebp),%eax
086bc010 +0x16a:  movb   $0x1,-0x42(%ebp,%eax,1)
086bc015 +0x16f:  mov    -0x10(%ebp),%eax
086bc018 +0x172:  movb   $0x1,-0x48(%ebp,%eax,1)
086bc01d +0x177:  jmp    086bc023 <+0x17d>
086bc01f +0x179:  nop
086bc020 +0x17a:  jmp    086bc023 <+0x17d>
086bc022 +0x17c:  nop
086bc023 +0x17d:  addl   $0x1,-0x10(%ebp)
086bc027 +0x181:  cmpl   $0x5,-0x10(%ebp)
086bc02b +0x185:  setle  %al
086bc02e +0x188:  test   %al,%al
086bc030 +0x18a:  jne    086bbfca <+0x124>
086bc032 +0x18c:  cmpl   $0x1,-0x18(%ebp)
086bc036 +0x190:  jle    086bc096 <+0x1f0>
086bc038 +0x192:  mov    -0x1c(%ebp),%eax
086bc03b +0x195:  mov    %eax,%edx
086bc03d +0x197:  sar    $0x1f,%edx
086bc040 +0x19a:  idivl  -0x18(%ebp)
086bc043 +0x19d:  mov    %eax,-0x14(%ebp)
086bc046 +0x1a0:  movl   $0x0,-0xc(%ebp)
086bc04d +0x1a7:  jmp    086bc083 <+0x1dd>
086bc04f +0x1a9:  mov    -0xc(%ebp),%edx
086bc052 +0x1ac:  mov    0x8(%ebp),%eax
086bc055 +0x1af:  add    $0x48,%edx
086bc058 +0x1b2:  mov    0xc(%eax,%edx,4),%eax
086bc05c +0x1b6:  test   %eax,%eax
086bc05e +0x1b8:  je     086bc07e <+0x1d8>
086bc060 +0x1ba:  mov    -0xc(%ebp),%eax
086bc063 +0x1bd:  movzbl -0x48(%ebp,%eax,1),%eax
086bc068 +0x1c2:  test   %al,%al
086bc06a +0x1c4:  je     086bc07f <+0x1d9>
086bc06c +0x1c6:  mov    -0xc(%ebp),%edx
086bc06f +0x1c9:  mov    0x8(%ebp),%eax
086bc072 +0x1cc:  lea    0x68(%edx),%ecx
086bc075 +0x1cf:  mov    -0x14(%ebp),%edx
086bc078 +0x1d2:  mov    %edx,0x4(%eax,%ecx,4)
086bc07c +0x1d6:  jmp    086bc07f <+0x1d9>
086bc07e +0x1d8:  nop
086bc07f +0x1d9:  addl   $0x1,-0xc(%ebp)
086bc083 +0x1dd:  cmpl   $0x5,-0xc(%ebp)
086bc087 +0x1e1:  setle  %al
086bc08a +0x1e4:  test   %al,%al
086bc08c +0x1e6:  jne    086bc04f <+0x1a9>
086bc08e +0x1e8:  jmp    086bc097 <+0x1f1>
086bc090 +0x1ea:  nop
086bc091 +0x1eb:  jmp    086bc097 <+0x1f1>
086bc093 +0x1ed:  nop
086bc094 +0x1ee:  jmp    086bc097 <+0x1f1>
086bc096 +0x1f0:  nop
086bc097 +0x1f1:  addl   $0x1,-0x20(%ebp)
086bc09b +0x1f5:  cmpl   $0x5,-0x20(%ebp)
086bc09f +0x1f9:  setle  %al
086bc0a2 +0x1fc:  test   %al,%al
086bc0a4 +0x1fe:  jne    086bbf66 <+0xc0>
086bc0aa +0x204:  add    $0x54,%esp
086bc0ad +0x207:  pop    %ebx
086bc0ae +0x208:  pop    %ebp
086bc0af +0x209:  ret
```

## 反编译 C

```c
// WarRoom::CalcGuildFP @ 0x86bbea6

/* WarRoom::CalcGuildFP() */

void __thiscall WarRoom::CalcGuildFP(WarRoom *this)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char local_4c [12];
  int local_40 [6];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  uVar2 = 0;
  do {
    *(undefined4 *)((int)local_40 + uVar2) = 0;
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x18);
  local_4c[6] = '\0';
  local_4c[7] = '\0';
  local_4c[8] = '\0';
  local_4c[9] = '\0';
  local_4c[10] = '\0';
  local_4c[0xb] = '\0';
  for (local_28 = 0; iVar4 = local_28, local_28 < 6; local_28 = local_28 + 1) {
    if (*(int *)(this + (local_28 + 0x48) * 4 + 0xc) != 0) {
      uVar3 = CUserCharacInfo::GetFinishPointTotal
                        (*(CUserCharacInfo **)(this + (local_28 + 0x48) * 4 + 0xc));
      iVar1 = local_28;
      *(undefined4 *)(this + (iVar4 + 0x68) * 4 + 4) = uVar3;
      iVar4 = CUserCharacInfo::get_charac_guildkey
                        (*(CUserCharacInfo **)(this + (local_28 + 0x48) * 4 + 0xc));
      local_40[iVar1] = iVar4;
      if (local_40[local_28] == 0) {
        local_4c[local_28 + 6] = '\x01';
      }
    }
  }
  for (local_24 = 0; local_24 < 6; local_24 = local_24 + 1) {
    if ((*(int *)(this + (local_24 + 0x48) * 4 + 0xc) != 0) && (local_4c[local_24 + 6] == '\0')) {
      local_20 = *(int *)(this + (local_24 + 0x68) * 4 + 4);
      local_1c = 1;
      local_4c[local_24 + 6] = '\x01';
      local_4c[0] = '\0';
      local_4c[1] = '\0';
      local_4c[2] = '\0';
      local_4c[3] = '\0';
      local_4c[4] = '\0';
      local_4c[5] = '\0';
      local_4c[local_24] = '\x01';
      for (local_14 = local_24 + 1; local_14 < 6; local_14 = local_14 + 1) {
        if (((*(int *)(this + (local_14 + 0x48) * 4 + 0xc) != 0) && (local_4c[local_14 + 6] == '\0')
            ) && (local_40[local_24] == local_40[local_14])) {
          local_20 = local_20 + *(int *)(this + (local_14 + 0x68) * 4 + 4);
          local_1c = local_1c + 1;
          local_4c[local_14 + 6] = '\x01';
          local_4c[local_14] = '\x01';
        }
      }
      if (1 < local_1c) {
        local_18 = local_20 / local_1c;
        for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
          if ((*(int *)(this + (local_10 + 0x48) * 4 + 0xc) != 0) && (local_4c[local_10] != '\0')) {
            *(int *)(this + (local_10 + 0x68) * 4 + 4) = local_20 / local_1c;
          }
        }
      }
    }
  }
  return;
}
```

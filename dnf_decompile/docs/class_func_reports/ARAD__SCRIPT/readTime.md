# readTime

`_ZN4ARAD6SCRIPT8readTimeEPs`

`ARAD::SCRIPT::readTime(short*)`

| 类 | 地址 |
|---|---|
| `ARAD::SCRIPT` | `0x088b3970` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088b3970  _ZN4ARAD6SCRIPT8readTimeEPs
#           ARAD::SCRIPT::readTime(short*)
# range [0x088b3970, 0x088b3b4a]
088b3970 +0x000:  push   %ebp
088b3971 +0x001:  mov    %esp,%ebp
088b3973 +0x003:  push   %esi
088b3974 +0x004:  push   %ebx
088b3975 +0x005:  sub    $0x30,%esp
088b3978 +0x008:  movl   $0x0,-0x10(%ebp)
088b397f +0x00f:  movb   $0x0,-0x11(%ebp)
088b3983 +0x013:  mov    -0x10(%ebp),%eax
088b3986 +0x016:  add    %eax,%eax
088b3988 +0x018:  mov    %eax,%ebx
088b398a +0x01a:  add    0x8(%ebp),%ebx
088b398d +0x01d:  lea    -0x11(%ebp),%eax
088b3990 +0x020:  mov    %eax,(%esp)
088b3993 +0x023:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088b3998 +0x028:  mov    %ax,(%ebx)
088b399b +0x02b:  addl   $0x1,-0x10(%ebp)
088b399f +0x02f:  movzbl -0x11(%ebp),%eax
088b39a3 +0x033:  xor    $0x1,%eax
088b39a6 +0x036:  test   %al,%al
088b39a8 +0x038:  je     088b39d6 <+0x66>
088b39aa +0x03a:  movl   $0x4,(%esp)
088b39b1 +0x041:  call   08725800 <__cxa_allocate_exception>
088b39b6 +0x046:  mov    %eax,%edx
088b39b8 +0x048:  movl   $"start year",(%edx)
088b39be +0x04e:  movl   $0x0,0x8(%esp)
088b39c6 +0x056:  movl   $&_ZTIPKc,0x4(%esp)
088b39ce +0x05e:  mov    %eax,(%esp)
088b39d1 +0x061:  call   08724c50 <__cxa_throw>
088b39d6 +0x066:  mov    -0x10(%ebp),%eax
088b39d9 +0x069:  add    %eax,%eax
088b39db +0x06b:  mov    %eax,%ebx
088b39dd +0x06d:  add    0x8(%ebp),%ebx
088b39e0 +0x070:  lea    -0x11(%ebp),%eax
088b39e3 +0x073:  mov    %eax,(%esp)
088b39e6 +0x076:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088b39eb +0x07b:  mov    %ax,(%ebx)
088b39ee +0x07e:  addl   $0x1,-0x10(%ebp)
088b39f2 +0x082:  movzbl -0x11(%ebp),%eax
088b39f6 +0x086:  xor    $0x1,%eax
088b39f9 +0x089:  test   %al,%al
088b39fb +0x08b:  je     088b3a29 <+0xb9>
088b39fd +0x08d:  movl   $0x4,(%esp)
088b3a04 +0x094:  call   08725800 <__cxa_allocate_exception>
088b3a09 +0x099:  mov    %eax,%edx
088b3a0b +0x09b:  movl   $"start month",(%edx)
088b3a11 +0x0a1:  movl   $0x0,0x8(%esp)
088b3a19 +0x0a9:  movl   $&_ZTIPKc,0x4(%esp)
088b3a21 +0x0b1:  mov    %eax,(%esp)
088b3a24 +0x0b4:  call   08724c50 <__cxa_throw>
088b3a29 +0x0b9:  mov    -0x10(%ebp),%eax
088b3a2c +0x0bc:  add    %eax,%eax
088b3a2e +0x0be:  mov    %eax,%ebx
088b3a30 +0x0c0:  add    0x8(%ebp),%ebx
088b3a33 +0x0c3:  lea    -0x11(%ebp),%eax
088b3a36 +0x0c6:  mov    %eax,(%esp)
088b3a39 +0x0c9:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088b3a3e +0x0ce:  mov    %ax,(%ebx)
088b3a41 +0x0d1:  addl   $0x1,-0x10(%ebp)
088b3a45 +0x0d5:  movzbl -0x11(%ebp),%eax
088b3a49 +0x0d9:  xor    $0x1,%eax
088b3a4c +0x0dc:  test   %al,%al
088b3a4e +0x0de:  je     088b3a7c <+0x10c>
088b3a50 +0x0e0:  movl   $0x4,(%esp)
088b3a57 +0x0e7:  call   08725800 <__cxa_allocate_exception>
088b3a5c +0x0ec:  mov    %eax,%edx
088b3a5e +0x0ee:  movl   $"start day",(%edx)
088b3a64 +0x0f4:  movl   $0x0,0x8(%esp)
088b3a6c +0x0fc:  movl   $&_ZTIPKc,0x4(%esp)
088b3a74 +0x104:  mov    %eax,(%esp)
088b3a77 +0x107:  call   08724c50 <__cxa_throw>
088b3a7c +0x10c:  mov    -0x10(%ebp),%eax
088b3a7f +0x10f:  add    %eax,%eax
088b3a81 +0x111:  mov    %eax,%ebx
088b3a83 +0x113:  add    0x8(%ebp),%ebx
088b3a86 +0x116:  lea    -0x11(%ebp),%eax
088b3a89 +0x119:  mov    %eax,(%esp)
088b3a8c +0x11c:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088b3a91 +0x121:  mov    %ax,(%ebx)
088b3a94 +0x124:  addl   $0x1,-0x10(%ebp)
088b3a98 +0x128:  movzbl -0x11(%ebp),%eax
088b3a9c +0x12c:  xor    $0x1,%eax
088b3a9f +0x12f:  test   %al,%al
088b3aa1 +0x131:  je     088b3acf <+0x15f>
088b3aa3 +0x133:  movl   $0x4,(%esp)
088b3aaa +0x13a:  call   08725800 <__cxa_allocate_exception>
088b3aaf +0x13f:  mov    %eax,%edx
088b3ab1 +0x141:  movl   $"start time",(%edx)
088b3ab7 +0x147:  movl   $0x0,0x8(%esp)
088b3abf +0x14f:  movl   $&_ZTIPKc,0x4(%esp)
088b3ac7 +0x157:  mov    %eax,(%esp)
088b3aca +0x15a:  call   08724c50 <__cxa_throw>
088b3acf +0x15f:  mov    $0x1,%ebx
088b3ad4 +0x164:  jmp    088b3b42 <+0x1d2>
088b3ad6 +0x166:  cmp    $0x1,%edx
088b3ad9 +0x169:  je     088b3ae3 <+0x173>
088b3adb +0x16b:  mov    %eax,(%esp)
088b3ade +0x16e:  call   08ae3750 <_Unwind_Resume>
088b3ae3 +0x173:  mov    %eax,(%esp)
088b3ae6 +0x176:  call   08725ce0 <__cxa_begin_catch>
088b3aeb +0x17b:  mov    %eax,-0xc(%ebp)
088b3aee +0x17e:  mov    -0xc(%ebp),%eax
088b3af1 +0x181:  mov    %eax,0x14(%esp)
088b3af5 +0x185:  movl   $"[ARAD SCRIPT] Load fail. AradEventPeroid.etc %s",0x10(%esp)
088b3afd +0x18d:  movl   $0x27,0xc(%esp)
088b3b05 +0x195:  movl   $&_ZZN4ARAD6SCRIPT8readTimeEPsE12__FUNCTION__,0x8(%esp)
088b3b0d +0x19d:  movl   $"../localjapan/Arad_RDARScriptEtcParameter.cpp",0x4(%esp)
088b3b15 +0x1a5:  movl   $0x1,(%esp)
088b3b1c +0x1ac:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
088b3b21 +0x1b1:  mov    $0x0,%ebx
088b3b26 +0x1b6:  call   08725c30 <__cxa_end_catch>
088b3b2b +0x1bb:  jmp    088b3b42 <+0x1d2>
088b3b2d +0x1bd:  mov    %edx,%ebx
088b3b2f +0x1bf:  mov    %eax,%esi
088b3b31 +0x1c1:  call   08725c30 <__cxa_end_catch>
088b3b36 +0x1c6:  mov    %esi,%eax
088b3b38 +0x1c8:  mov    %ebx,%edx
088b3b3a +0x1ca:  mov    %eax,(%esp)
088b3b3d +0x1cd:  call   08ae3750 <_Unwind_Resume>
088b3b42 +0x1d2:  mov    %ebx,%eax
088b3b44 +0x1d4:  add    $0x30,%esp
088b3b47 +0x1d7:  pop    %ebx
088b3b48 +0x1d8:  pop    %esi
088b3b49 +0x1d9:  pop    %ebp
088b3b4a +0x1da:  ret
```

## 反编译 C

```c
// ARAD::SCRIPT::readTime @ 0x88b3970

/* ARAD::SCRIPT::readTime(short*) */

undefined4 ARAD::SCRIPT::readTime(short *param_1)

{
  short sVar1;
  undefined4 *puVar2;
  short *psVar3;
  bool local_15;
  int local_14;
  
  local_14 = 0;
  local_15 = false;
                    /* try { // try from 088b3993 to 088b3ace has its CatchHandler @ 088b3ad6 */
  sVar1 = ScanInt(&local_15);
  *param_1 = sVar1;
  local_14 = local_14 + 1;
  if (local_15 != true) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "start year";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  psVar3 = param_1 + local_14;
  sVar1 = ScanInt(&local_15);
  *psVar3 = sVar1;
  local_14 = local_14 + 1;
  if (local_15 != true) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "start month";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  psVar3 = param_1 + local_14;
  sVar1 = ScanInt(&local_15);
  *psVar3 = sVar1;
  local_14 = local_14 + 1;
  if (local_15 != true) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "start day";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  psVar3 = param_1 + local_14;
  sVar1 = ScanInt(&local_15);
  *psVar3 = sVar1;
  local_14 = local_14 + 1;
  if (local_15 != true) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "start time";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  return 1;
}
```

# readTime

`_ZN19CerashopAddRestrict8readTimeEPs`

`CerashopAddRestrict::readTime(short*)`

| 类 | 地址 |
|---|---|
| `CerashopAddRestrict` | `0x08abf164` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08abf164  _ZN19CerashopAddRestrict8readTimeEPs
#           CerashopAddRestrict::readTime(short*)
# range [0x08abf164, 0x08abf33e]
08abf164 +0x000:  push   %ebp
08abf165 +0x001:  mov    %esp,%ebp
08abf167 +0x003:  push   %esi
08abf168 +0x004:  push   %ebx
08abf169 +0x005:  sub    $0x30,%esp
08abf16c +0x008:  movl   $0x0,-0x10(%ebp)
08abf173 +0x00f:  movb   $0x0,-0x11(%ebp)
08abf177 +0x013:  mov    -0x10(%ebp),%eax
08abf17a +0x016:  add    %eax,%eax
08abf17c +0x018:  mov    %eax,%ebx
08abf17e +0x01a:  add    0x8(%ebp),%ebx
08abf181 +0x01d:  lea    -0x11(%ebp),%eax
08abf184 +0x020:  mov    %eax,(%esp)
08abf187 +0x023:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08abf18c +0x028:  mov    %ax,(%ebx)
08abf18f +0x02b:  addl   $0x1,-0x10(%ebp)
08abf193 +0x02f:  movzbl -0x11(%ebp),%eax
08abf197 +0x033:  xor    $0x1,%eax
08abf19a +0x036:  test   %al,%al
08abf19c +0x038:  je     08abf1ca <+0x66>
08abf19e +0x03a:  movl   $0x4,(%esp)
08abf1a5 +0x041:  call   08725800 <__cxa_allocate_exception>
08abf1aa +0x046:  mov    %eax,%edx
08abf1ac +0x048:  movl   $"start year",(%edx)
08abf1b2 +0x04e:  movl   $0x0,0x8(%esp)
08abf1ba +0x056:  movl   $&_ZTIPKc,0x4(%esp)
08abf1c2 +0x05e:  mov    %eax,(%esp)
08abf1c5 +0x061:  call   08724c50 <__cxa_throw>
08abf1ca +0x066:  mov    -0x10(%ebp),%eax
08abf1cd +0x069:  add    %eax,%eax
08abf1cf +0x06b:  mov    %eax,%ebx
08abf1d1 +0x06d:  add    0x8(%ebp),%ebx
08abf1d4 +0x070:  lea    -0x11(%ebp),%eax
08abf1d7 +0x073:  mov    %eax,(%esp)
08abf1da +0x076:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08abf1df +0x07b:  mov    %ax,(%ebx)
08abf1e2 +0x07e:  addl   $0x1,-0x10(%ebp)
08abf1e6 +0x082:  movzbl -0x11(%ebp),%eax
08abf1ea +0x086:  xor    $0x1,%eax
08abf1ed +0x089:  test   %al,%al
08abf1ef +0x08b:  je     08abf21d <+0xb9>
08abf1f1 +0x08d:  movl   $0x4,(%esp)
08abf1f8 +0x094:  call   08725800 <__cxa_allocate_exception>
08abf1fd +0x099:  mov    %eax,%edx
08abf1ff +0x09b:  movl   $"start month",(%edx)
08abf205 +0x0a1:  movl   $0x0,0x8(%esp)
08abf20d +0x0a9:  movl   $&_ZTIPKc,0x4(%esp)
08abf215 +0x0b1:  mov    %eax,(%esp)
08abf218 +0x0b4:  call   08724c50 <__cxa_throw>
08abf21d +0x0b9:  mov    -0x10(%ebp),%eax
08abf220 +0x0bc:  add    %eax,%eax
08abf222 +0x0be:  mov    %eax,%ebx
08abf224 +0x0c0:  add    0x8(%ebp),%ebx
08abf227 +0x0c3:  lea    -0x11(%ebp),%eax
08abf22a +0x0c6:  mov    %eax,(%esp)
08abf22d +0x0c9:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08abf232 +0x0ce:  mov    %ax,(%ebx)
08abf235 +0x0d1:  addl   $0x1,-0x10(%ebp)
08abf239 +0x0d5:  movzbl -0x11(%ebp),%eax
08abf23d +0x0d9:  xor    $0x1,%eax
08abf240 +0x0dc:  test   %al,%al
08abf242 +0x0de:  je     08abf270 <+0x10c>
08abf244 +0x0e0:  movl   $0x4,(%esp)
08abf24b +0x0e7:  call   08725800 <__cxa_allocate_exception>
08abf250 +0x0ec:  mov    %eax,%edx
08abf252 +0x0ee:  movl   $"start day",(%edx)
08abf258 +0x0f4:  movl   $0x0,0x8(%esp)
08abf260 +0x0fc:  movl   $&_ZTIPKc,0x4(%esp)
08abf268 +0x104:  mov    %eax,(%esp)
08abf26b +0x107:  call   08724c50 <__cxa_throw>
08abf270 +0x10c:  mov    -0x10(%ebp),%eax
08abf273 +0x10f:  add    %eax,%eax
08abf275 +0x111:  mov    %eax,%ebx
08abf277 +0x113:  add    0x8(%ebp),%ebx
08abf27a +0x116:  lea    -0x11(%ebp),%eax
08abf27d +0x119:  mov    %eax,(%esp)
08abf280 +0x11c:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08abf285 +0x121:  mov    %ax,(%ebx)
08abf288 +0x124:  addl   $0x1,-0x10(%ebp)
08abf28c +0x128:  movzbl -0x11(%ebp),%eax
08abf290 +0x12c:  xor    $0x1,%eax
08abf293 +0x12f:  test   %al,%al
08abf295 +0x131:  je     08abf2c3 <+0x15f>
08abf297 +0x133:  movl   $0x4,(%esp)
08abf29e +0x13a:  call   08725800 <__cxa_allocate_exception>
08abf2a3 +0x13f:  mov    %eax,%edx
08abf2a5 +0x141:  movl   $"start time",(%edx)
08abf2ab +0x147:  movl   $0x0,0x8(%esp)
08abf2b3 +0x14f:  movl   $&_ZTIPKc,0x4(%esp)
08abf2bb +0x157:  mov    %eax,(%esp)
08abf2be +0x15a:  call   08724c50 <__cxa_throw>
08abf2c3 +0x15f:  mov    $0x1,%ebx
08abf2c8 +0x164:  jmp    08abf336 <+0x1d2>
08abf2ca +0x166:  cmp    $0x1,%edx
08abf2cd +0x169:  je     08abf2d7 <+0x173>
08abf2cf +0x16b:  mov    %eax,(%esp)
08abf2d2 +0x16e:  call   08ae3750 <_Unwind_Resume>
08abf2d7 +0x173:  mov    %eax,(%esp)
08abf2da +0x176:  call   08725ce0 <__cxa_begin_catch>
08abf2df +0x17b:  mov    %eax,-0xc(%ebp)
08abf2e2 +0x17e:  mov    -0xc(%ebp),%eax
08abf2e5 +0x181:  mov    %eax,0x14(%esp)
08abf2e9 +0x185:  movl   $"readTime() Load fail. %s",0x10(%esp)
08abf2f1 +0x18d:  movl   $0x25,0xc(%esp)
08abf2f9 +0x195:  movl   $&_ZZN19CerashopAddRestrict8readTimeEPsE12__FUNCTION__,0x8(%esp)
08abf301 +0x19d:  movl   $"../RDARScriptCeraShopAddRestrictType.cpp",0x4(%esp)
08abf309 +0x1a5:  movl   $0x1,(%esp)
08abf310 +0x1ac:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08abf315 +0x1b1:  mov    $0x0,%ebx
08abf31a +0x1b6:  call   08725c30 <__cxa_end_catch>
08abf31f +0x1bb:  jmp    08abf336 <+0x1d2>
08abf321 +0x1bd:  mov    %edx,%ebx
08abf323 +0x1bf:  mov    %eax,%esi
08abf325 +0x1c1:  call   08725c30 <__cxa_end_catch>
08abf32a +0x1c6:  mov    %esi,%eax
08abf32c +0x1c8:  mov    %ebx,%edx
08abf32e +0x1ca:  mov    %eax,(%esp)
08abf331 +0x1cd:  call   08ae3750 <_Unwind_Resume>
08abf336 +0x1d2:  mov    %ebx,%eax
08abf338 +0x1d4:  add    $0x30,%esp
08abf33b +0x1d7:  pop    %ebx
08abf33c +0x1d8:  pop    %esi
08abf33d +0x1d9:  pop    %ebp
08abf33e +0x1da:  ret
```

## 反编译 C

```c
// CerashopAddRestrict::readTime @ 0x8abf164

/* CerashopAddRestrict::readTime(short*) */

undefined4 CerashopAddRestrict::readTime(short *param_1)

{
  short sVar1;
  undefined4 *puVar2;
  short *psVar3;
  bool local_15;
  int local_14;
  
  local_14 = 0;
  local_15 = false;
                    /* try { // try from 08abf187 to 08abf2c2 has its CatchHandler @ 08abf2ca */
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

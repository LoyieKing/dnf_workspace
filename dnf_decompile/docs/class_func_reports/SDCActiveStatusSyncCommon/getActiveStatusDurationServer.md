# getActiveStatusDurationServer

`_ZN25SDCActiveStatusSyncCommon29getActiveStatusDurationServerEiiiii`

`SDCActiveStatusSyncCommon::getActiveStatusDurationServer(int, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `SDCActiveStatusSyncCommon` | `0x0808d272` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808d272  _ZN25SDCActiveStatusSyncCommon29getActiveStatusDurationServerEiiiii
#           SDCActiveStatusSyncCommon::getActiveStatusDurationServer(int, int, int, int, int)
# range [0x0808d272, 0x0808d379]
0808d272 +0x000:  push   %ebp
0808d273 +0x001:  mov    %esp,%ebp
0808d275 +0x003:  push   %ebx
0808d276 +0x004:  sub    $0x34,%esp
0808d279 +0x007:  movl   $0x0,-0x18(%ebp)
0808d280 +0x00e:  cmpl   $0x11,0xc(%ebp)
0808d284 +0x012:  ja     0808d312 <+0xa0>
0808d28a +0x018:  mov    0xc(%ebp),%eax
0808d28d +0x01b:  mov    $0x1,%edx
0808d292 +0x020:  mov    %edx,%ebx
0808d294 +0x022:  mov    %eax,%ecx
0808d296 +0x024:  shl    %cl,%ebx
0808d298 +0x026:  mov    %ebx,%eax
0808d29a +0x028:  mov    %eax,%edx
0808d29c +0x02a:  and    $&_ZL12gTCharBuffer+0x607a,%edx
0808d2a2 +0x030:  test   %edx,%edx
0808d2a4 +0x032:  jne    0808d2d2 <+0x60>
0808d2a6 +0x034:  mov    %eax,%edx
0808d2a8 +0x036:  and    $0x3a55,%edx
0808d2ae +0x03c:  test   %edx,%edx
0808d2b0 +0x03e:  jne    0808d2bd <+0x4b>
0808d2b2 +0x040:  and    $0x4000,%eax
0808d2b7 +0x045:  test   %eax,%eax
0808d2b9 +0x047:  jne    0808d30b <+0x99>
0808d2bb +0x049:  jmp    0808d312 <+0xa0>
0808d2bd +0x04b:  mov    0xc(%ebp),%eax
0808d2c0 +0x04e:  mov    &ACTIVESTATUS_DURATION(,%eax,4),%eax
0808d2c7 +0x055:  imul   $0x3e8,%eax,%eax
0808d2cd +0x05b:  mov    %eax,-0x18(%ebp)
0808d2d0 +0x05e:  jmp    0808d312 <+0xa0>
0808d2d2 +0x060:  mov    0x10(%ebp),%eax
0808d2d5 +0x063:  mov    %eax,0x8(%esp)
0808d2d9 +0x067:  mov    0xc(%ebp),%eax
0808d2dc +0x06a:  mov    %eax,0x4(%esp)
0808d2e0 +0x06e:  mov    0x8(%ebp),%eax
0808d2e3 +0x071:  mov    %eax,(%esp)
0808d2e6 +0x074:  call   0808d37a <_ZN25SDCActiveStatusSyncCommon21getActiveStatusPower1Eii>  ; SDCActiveStatusSyncCommon::getActiveStatusPower1(int, int)
0808d2eb +0x079:  flds   &data#5e363cf6(.rodata)
0808d2f1 +0x07f:  fmulp  %st,%st(1)
0808d2f3 +0x081:  fnstcw -0x1a(%ebp)
0808d2f6 +0x084:  movzwl -0x1a(%ebp),%eax
0808d2fa +0x088:  mov    $0xc,%ah
0808d2fc +0x08a:  mov    %ax,-0x1c(%ebp)
0808d300 +0x08e:  fldcw  -0x1c(%ebp)
0808d303 +0x091:  fistpl -0x18(%ebp)
0808d306 +0x094:  fldcw  -0x1a(%ebp)
0808d309 +0x097:  jmp    0808d312 <+0xa0>
0808d30b +0x099:  movl   $0x0,-0x18(%ebp)
0808d312 +0x0a0:  movl   $0x211,0x4(%esp)
0808d31a +0x0a8:  mov    0x14(%ebp),%eax
0808d31d +0x0ab:  mov    %eax,(%esp)
0808d320 +0x0ae:  call   080950e8 <_ZN4_SDC12isObjectTypeEii>  ; _SDC::isObjectType(int, int)
0808d325 +0x0b3:  test   %al,%al
0808d327 +0x0b5:  je     0808d364 <+0xf2>
0808d329 +0x0b7:  fildl  0x1c(%ebp)
0808d32c +0x0ba:  flds   &data#c277e7ba(.rodata)
0808d332 +0x0c0:  fdivrp %st,%st(1)
0808d334 +0x0c2:  fstps  -0x14(%ebp)
0808d337 +0x0c5:  fildl  0x1c(%ebp)
0808d33a +0x0c8:  flds   -0x14(%ebp)
0808d33d +0x0cb:  fdivp  %st,%st(1)
0808d33f +0x0cd:  fstps  -0x10(%ebp)
0808d342 +0x0d0:  fildl  -0x18(%ebp)
0808d345 +0x0d3:  fmuls  -0x10(%ebp)
0808d348 +0x0d6:  fnstcw -0x1a(%ebp)
0808d34b +0x0d9:  movzwl -0x1a(%ebp),%eax
0808d34f +0x0dd:  mov    $0xc,%ah
0808d351 +0x0df:  mov    %ax,-0x1c(%ebp)
0808d355 +0x0e3:  fldcw  -0x1c(%ebp)
0808d358 +0x0e6:  fistpl -0xc(%ebp)
0808d35b +0x0e9:  fldcw  -0x1a(%ebp)
0808d35e +0x0ec:  mov    -0xc(%ebp),%eax
0808d361 +0x0ef:  sub    %eax,-0x18(%ebp)
0808d364 +0x0f2:  cmpl   $0x0,-0x18(%ebp)
0808d368 +0x0f6:  jns    0808d371 <+0xff>
0808d36a +0x0f8:  movl   $0x0,-0x18(%ebp)
0808d371 +0x0ff:  mov    -0x18(%ebp),%eax
0808d374 +0x102:  add    $0x34,%esp
0808d377 +0x105:  pop    %ebx
0808d378 +0x106:  pop    %ebp
0808d379 +0x107:  ret
```

## 反编译 C

```c
// SDCActiveStatusSyncCommon::getActiveStatusDurationServer @ 0x808d272

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SDCActiveStatusSyncCommon::getActiveStatusDurationServer(int, int, int, int, int) */

int __thiscall
SDCActiveStatusSyncCommon::getActiveStatusDurationServer
          (SDCActiveStatusSyncCommon *this,int param_1,int param_2,int param_3,int param_4,
          int param_5)

{
  char cVar1;
  uint uVar2;
  longdouble lVar3;
  int local_1c;
  
  local_1c = 0;
  if ((uint)param_1 < 0x12) {
    uVar2 = 1 << ((byte)param_1 & 0x1f);
    if ((uVar2 & 0x385aa) == 0) {
      if ((uVar2 & 0x3a55) == 0) {
        if ((uVar2 & 0x4000) != 0) {
          local_1c = 0;
        }
      }
      else {
        local_1c = *(int *)(ACTIVESTATUS_DURATION + param_1 * 4) * 1000;
      }
    }
    else {
      lVar3 = (longdouble)getActiveStatusPower1(this,param_1,param_2);
      local_1c = (int)ROUND((longdouble)_DAT_08af4c10 * lVar3);
    }
  }
  cVar1 = _SDC::isObjectType(param_3,0x211);
  if (cVar1 != '\0') {
    local_1c = local_1c -
               (int)ROUND((float)local_1c * (((float)param_5 / _DAT_08af4c14) / (float)param_5));
  }
  if (local_1c < 0) {
    local_1c = 0;
  }
  return local_1c;
}
```

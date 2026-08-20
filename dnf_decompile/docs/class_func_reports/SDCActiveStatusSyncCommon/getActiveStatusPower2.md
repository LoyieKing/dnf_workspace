# getActiveStatusPower2

`_ZN25SDCActiveStatusSyncCommon21getActiveStatusPower2Eii`

`SDCActiveStatusSyncCommon::getActiveStatusPower2(int, int)`

| 类 | 地址 |
|---|---|
| `SDCActiveStatusSyncCommon` | `0x0808d3dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808d3dc  _ZN25SDCActiveStatusSyncCommon21getActiveStatusPower2Eii
#           SDCActiveStatusSyncCommon::getActiveStatusPower2(int, int)
# range [0x0808d3dc, 0x0808d43d]
0808d3dc +0x00:  push   %ebp
0808d3dd +0x01:  mov    %esp,%ebp
0808d3df +0x03:  push   %ebx
0808d3e0 +0x04:  sub    $0x34,%esp
0808d3e3 +0x07:  movl   $0x0,-0x10(%ebp)
0808d3ea +0x0e:  movl   $0x1,-0xc(%ebp)
0808d3f1 +0x15:  mov    &ACTIVESTATUS_MAXLEVEL,%eax
0808d3f6 +0x1a:  lea    -0x1(%eax),%ebx
0808d3f9 +0x1d:  mov    0x10(%ebp),%eax
0808d3fc +0x20:  lea    -0x1(%eax),%ecx
0808d3ff +0x23:  mov    0xc(%ebp),%eax
0808d402 +0x26:  add    %eax,%eax
0808d404 +0x28:  add    $0x1,%eax
0808d407 +0x2b:  mov    &ACTIVESTATUS_POWER2(,%eax,4),%edx
0808d40e +0x32:  mov    0xc(%ebp),%eax
0808d411 +0x35:  mov    &ACTIVESTATUS_POWER2(,%eax,8),%eax
0808d418 +0x3c:  mov    %ebx,0xc(%esp)
0808d41c +0x40:  mov    %ecx,0x8(%esp)
0808d420 +0x44:  mov    %edx,0x4(%esp)
0808d424 +0x48:  mov    %eax,(%esp)
0808d427 +0x4b:  call   088924c1 <_Z26GetUniformVelocityFloatSDCffii>  ; GetUniformVelocityFloatSDC(float, float, int, int)
0808d42c +0x50:  fstps  -0x1c(%ebp)
0808d42f +0x53:  mov    -0x1c(%ebp),%eax
0808d432 +0x56:  mov    %eax,-0x1c(%ebp)
0808d435 +0x59:  flds   -0x1c(%ebp)
0808d438 +0x5c:  add    $0x34,%esp
0808d43b +0x5f:  pop    %ebx
0808d43c +0x60:  pop    %ebp
0808d43d +0x61:  ret
```

## 反编译 C

```c
// SDCActiveStatusSyncCommon::getActiveStatusPower2 @ 0x808d3dc

/* SDCActiveStatusSyncCommon::getActiveStatusPower2(int, int) */

longdouble __thiscall
SDCActiveStatusSyncCommon::getActiveStatusPower2
          (SDCActiveStatusSyncCommon *this,int param_1,int param_2)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)
          GetUniformVelocityFloatSDC
                    (*(float *)(ACTIVESTATUS_POWER2 + param_1 * 8),
                     *(float *)(ACTIVESTATUS_POWER2 + (param_1 * 2 + 1) * 4),param_2 + -1,
                     ACTIVESTATUS_MAXLEVEL + -1);
  return (longdouble)(float)lVar1;
}
```

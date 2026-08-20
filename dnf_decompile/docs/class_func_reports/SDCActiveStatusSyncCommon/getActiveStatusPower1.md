# getActiveStatusPower1

`_ZN25SDCActiveStatusSyncCommon21getActiveStatusPower1Eii`

`SDCActiveStatusSyncCommon::getActiveStatusPower1(int, int)`

| 类 | 地址 |
|---|---|
| `SDCActiveStatusSyncCommon` | `0x0808d37a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808d37a  _ZN25SDCActiveStatusSyncCommon21getActiveStatusPower1Eii
#           SDCActiveStatusSyncCommon::getActiveStatusPower1(int, int)
# range [0x0808d37a, 0x0808d3db]
0808d37a +0x00:  push   %ebp
0808d37b +0x01:  mov    %esp,%ebp
0808d37d +0x03:  push   %ebx
0808d37e +0x04:  sub    $0x34,%esp
0808d381 +0x07:  movl   $0x0,-0x14(%ebp)
0808d388 +0x0e:  movl   $0x1,-0x10(%ebp)
0808d38f +0x15:  mov    &ACTIVESTATUS_MAXLEVEL,%eax
0808d394 +0x1a:  lea    -0x1(%eax),%ebx
0808d397 +0x1d:  mov    0x10(%ebp),%eax
0808d39a +0x20:  lea    -0x1(%eax),%ecx
0808d39d +0x23:  mov    0xc(%ebp),%eax
0808d3a0 +0x26:  add    %eax,%eax
0808d3a2 +0x28:  add    $0x1,%eax
0808d3a5 +0x2b:  mov    &ACTIVESTATUS_POWER1(,%eax,4),%edx
0808d3ac +0x32:  mov    0xc(%ebp),%eax
0808d3af +0x35:  mov    &ACTIVESTATUS_POWER1(,%eax,8),%eax
0808d3b6 +0x3c:  mov    %ebx,0xc(%esp)
0808d3ba +0x40:  mov    %ecx,0x8(%esp)
0808d3be +0x44:  mov    %edx,0x4(%esp)
0808d3c2 +0x48:  mov    %eax,(%esp)
0808d3c5 +0x4b:  call   088924c1 <_Z26GetUniformVelocityFloatSDCffii>  ; GetUniformVelocityFloatSDC(float, float, int, int)
0808d3ca +0x50:  fstps  -0xc(%ebp)
0808d3cd +0x53:  mov    -0xc(%ebp),%eax
0808d3d0 +0x56:  mov    %eax,-0x1c(%ebp)
0808d3d3 +0x59:  flds   -0x1c(%ebp)
0808d3d6 +0x5c:  add    $0x34,%esp
0808d3d9 +0x5f:  pop    %ebx
0808d3da +0x60:  pop    %ebp
0808d3db +0x61:  ret
```

## 反编译 C

```c
// SDCActiveStatusSyncCommon::getActiveStatusPower1 @ 0x808d37a

/* SDCActiveStatusSyncCommon::getActiveStatusPower1(int, int) */

longdouble __thiscall
SDCActiveStatusSyncCommon::getActiveStatusPower1
          (SDCActiveStatusSyncCommon *this,int param_1,int param_2)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)
          GetUniformVelocityFloatSDC
                    (*(float *)(ACTIVESTATUS_POWER1 + param_1 * 8),
                     *(float *)(ACTIVESTATUS_POWER1 + (param_1 * 2 + 1) * 4),param_2 + -1,
                     ACTIVESTATUS_MAXLEVEL + -1);
  return (longdouble)(float)lVar1;
}
```

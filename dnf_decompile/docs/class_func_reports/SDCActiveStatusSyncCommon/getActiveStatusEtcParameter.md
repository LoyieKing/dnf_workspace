# getActiveStatusEtcParameter

`_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii`

`SDCActiveStatusSyncCommon::getActiveStatusEtcParameter(int, int, int)`

| 类 | 地址 |
|---|---|
| `SDCActiveStatusSyncCommon` | `0x0808d43e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808d43e  _ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii
#           SDCActiveStatusSyncCommon::getActiveStatusEtcParameter(int, int, int)
# range [0x0808d43e, 0x0808d4b3]
0808d43e +0x00:  push   %ebp
0808d43f +0x01:  mov    %esp,%ebp
0808d441 +0x03:  push   %esi
0808d442 +0x04:  push   %ebx
0808d443 +0x05:  sub    $0x30,%esp
0808d446 +0x08:  movl   $0x0,-0x14(%ebp)
0808d44d +0x0f:  movl   $0x1,-0x10(%ebp)
0808d454 +0x16:  mov    &ACTIVESTATUS_MAXLEVEL,%eax
0808d459 +0x1b:  lea    -0x1(%eax),%ebx
0808d45c +0x1e:  mov    0x10(%ebp),%eax
0808d45f +0x21:  lea    -0x1(%eax),%ecx
0808d462 +0x24:  mov    0xc(%ebp),%eax
0808d465 +0x27:  mov    0x14(%ebp),%edx
0808d468 +0x2a:  add    %edx,%edx
0808d46a +0x2c:  add    $0x1,%edx
0808d46d +0x2f:  shl    $0x3,%eax
0808d470 +0x32:  add    %edx,%eax
0808d472 +0x34:  mov    &ACTIVESTATUS_ETC_PARAMETERS(,%eax,4),%edx
0808d479 +0x3b:  mov    0xc(%ebp),%eax
0808d47c +0x3e:  mov    0x14(%ebp),%esi
0808d47f +0x41:  add    %esi,%esi
0808d481 +0x43:  shl    $0x3,%eax
0808d484 +0x46:  add    %esi,%eax
0808d486 +0x48:  mov    &ACTIVESTATUS_ETC_PARAMETERS(,%eax,4),%eax
0808d48d +0x4f:  mov    %ebx,0xc(%esp)
0808d491 +0x53:  mov    %ecx,0x8(%esp)
0808d495 +0x57:  mov    %edx,0x4(%esp)
0808d499 +0x5b:  mov    %eax,(%esp)
0808d49c +0x5e:  call   088924c1 <_Z26GetUniformVelocityFloatSDCffii>  ; GetUniformVelocityFloatSDC(float, float, int, int)
0808d4a1 +0x63:  fstps  -0xc(%ebp)
0808d4a4 +0x66:  mov    -0xc(%ebp),%eax
0808d4a7 +0x69:  mov    %eax,-0x1c(%ebp)
0808d4aa +0x6c:  flds   -0x1c(%ebp)
0808d4ad +0x6f:  add    $0x30,%esp
0808d4b0 +0x72:  pop    %ebx
0808d4b1 +0x73:  pop    %esi
0808d4b2 +0x74:  pop    %ebp
0808d4b3 +0x75:  ret
```

## 反编译 C

```c
// SDCActiveStatusSyncCommon::getActiveStatusEtcParameter @ 0x808d43e

/* SDCActiveStatusSyncCommon::getActiveStatusEtcParameter(int, int, int) */

longdouble __thiscall
SDCActiveStatusSyncCommon::getActiveStatusEtcParameter
          (SDCActiveStatusSyncCommon *this,int param_1,int param_2,int param_3)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)
          GetUniformVelocityFloatSDC
                    (*(float *)(ACTIVESTATUS_ETC_PARAMETERS + (param_1 * 8 + param_3 * 2) * 4),
                     *(float *)(ACTIVESTATUS_ETC_PARAMETERS + (param_1 * 8 + param_3 * 2 + 1) * 4),
                     param_2 + -1,ACTIVESTATUS_MAXLEVEL + -1);
  return (longdouble)(float)lVar1;
}
```

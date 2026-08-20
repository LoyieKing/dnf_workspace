# getBleedingDamageServer

`_ZN25SDCActiveStatusSyncCommon23getBleedingDamageServerEP29STSDCActiveStatusSyncDataSend`

`SDCActiveStatusSyncCommon::getBleedingDamageServer(STSDCActiveStatusSyncDataSend*)`

| 类 | 地址 |
|---|---|
| `SDCActiveStatusSyncCommon` | `0x0808df1a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808df1a  _ZN25SDCActiveStatusSyncCommon23getBleedingDamageServerEP29STSDCActiveStatusSyncDataSend
#           SDCActiveStatusSyncCommon::getBleedingDamageServer(STSDCActiveStatusSyncDataSend*)
# range [0x0808df1a, 0x0808df5b]
0808df1a +0x00:  push   %ebp
0808df1b +0x01:  mov    %esp,%ebp
0808df1d +0x03:  sub    $0x18,%esp
0808df20 +0x06:  mov    0xc(%ebp),%eax
0808df23 +0x09:  mov    0x3(%eax),%eax
0808df26 +0x0c:  mov    %eax,-0x14(%ebp)
0808df29 +0x0f:  fildl  -0x14(%ebp)
0808df2c +0x12:  fstps  -0x4(%ebp)
0808df2f +0x15:  flds   -0x4(%ebp)
0808df32 +0x18:  flds   &data#12eba5b3(.rodata)
0808df38 +0x1e:  fmulp  %st,%st(1)
0808df3a +0x20:  fstps  -0x4(%ebp)
0808df3d +0x23:  flds   -0x4(%ebp)
0808df40 +0x26:  fnstcw -0x16(%ebp)
0808df43 +0x29:  movzwl -0x16(%ebp),%eax
0808df47 +0x2d:  mov    $0xc,%ah
0808df49 +0x2f:  mov    %ax,-0x18(%ebp)
0808df4d +0x33:  fldcw  -0x18(%ebp)
0808df50 +0x36:  fistpl -0x14(%ebp)
0808df53 +0x39:  fldcw  -0x16(%ebp)
0808df56 +0x3c:  mov    -0x14(%ebp),%eax
0808df59 +0x3f:  leave
0808df5a +0x40:  ret
0808df5b +0x41:  nop
```

## 反编译 C

```c
// SDCActiveStatusSyncCommon::getBleedingDamageServer @ 0x808df1a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SDCActiveStatusSyncCommon::getBleedingDamageServer(STSDCActiveStatusSyncDataSend*) */

int __thiscall
SDCActiveStatusSyncCommon::getBleedingDamageServer
          (SDCActiveStatusSyncCommon *this,STSDCActiveStatusSyncDataSend *param_1)

{
  return (int)ROUND(_DAT_08af4c18 * (float)*(int *)(param_1 + 3));
}
```

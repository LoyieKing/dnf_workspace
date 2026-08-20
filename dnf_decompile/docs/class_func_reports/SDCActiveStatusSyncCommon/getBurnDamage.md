# getBurnDamage

`_ZN25SDCActiveStatusSyncCommon13getBurnDamageERbP29STSDCActiveStatusSyncDataSendPvi`

`SDCActiveStatusSyncCommon::getBurnDamage(bool&, STSDCActiveStatusSyncDataSend*, void*, int)`

| 类 | 地址 |
|---|---|
| `SDCActiveStatusSyncCommon` | `0x0808de08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808de08  _ZN25SDCActiveStatusSyncCommon13getBurnDamageERbP29STSDCActiveStatusSyncDataSendPvi
#           SDCActiveStatusSyncCommon::getBurnDamage(bool&, STSDCActiveStatusSyncDataSend*, void*, int)
# range [0x0808de08, 0x0808de9d]
0808de08 +0x00:  push   %ebp
0808de09 +0x01:  mov    %esp,%ebp
0808de0b +0x03:  sub    $0x38,%esp
0808de0e +0x06:  mov    0x10(%ebp),%eax
0808de11 +0x09:  mov    0x7(%eax),%eax
0808de14 +0x0c:  mov    0x10(%ebp),%edx
0808de17 +0x0f:  mov    0x3(%edx),%edx
0808de1a +0x12:  mov    %edx,-0x20(%ebp)
0808de1d +0x15:  fildl  -0x20(%ebp)
0808de20 +0x18:  mov    %eax,0xc(%esp)
0808de24 +0x1c:  mov    0x18(%ebp),%eax
0808de27 +0x1f:  mov    %eax,0x8(%esp)
0808de2b +0x23:  fstps  0x4(%esp)
0808de2f +0x27:  mov    $0x0,%eax
0808de34 +0x2c:  mov    %eax,(%esp)
0808de37 +0x2f:  call   088924c1 <_Z26GetUniformVelocityFloatSDCffii>  ; GetUniformVelocityFloatSDC(float, float, int, int)
0808de3c +0x34:  fstps  -0xc(%ebp)
0808de3f +0x37:  mov    0x10(%ebp),%eax
0808de42 +0x3a:  mov    0x3(%eax),%eax
0808de45 +0x3d:  test   %eax,%eax
0808de47 +0x3f:  jle    0808de4f <+0x47>
0808de49 +0x41:  mov    0xc(%ebp),%eax
0808de4c +0x44:  movb   $0x0,(%eax)
0808de4f +0x47:  mov    0x10(%ebp),%eax
0808de52 +0x4a:  movzbl 0xc(%eax),%eax
0808de56 +0x4e:  test   %al,%al
0808de58 +0x50:  je     0808de80 <+0x78>
0808de5a +0x52:  mov    0x10(%ebp),%eax
0808de5d +0x55:  movzbl 0xb(%eax),%eax
0808de61 +0x59:  cmp    $0xa,%al
0808de63 +0x5b:  sete   %al
0808de66 +0x5e:  movzbl %al,%eax
0808de69 +0x61:  mov    %eax,0x4(%esp)
0808de6d +0x65:  mov    0x8(%ebp),%eax
0808de70 +0x68:  mov    %eax,(%esp)
0808de73 +0x6b:  call   0808df5c <_ZN25SDCActiveStatusSyncCommon23getUserToUserDamageRateEb>  ; SDCActiveStatusSyncCommon::getUserToUserDamageRate(bool)
0808de78 +0x70:  flds   -0xc(%ebp)
0808de7b +0x73:  fmulp  %st,%st(1)
0808de7d +0x75:  fstps  -0xc(%ebp)
0808de80 +0x78:  flds   -0xc(%ebp)
0808de83 +0x7b:  fnstcw -0x1a(%ebp)
0808de86 +0x7e:  movzwl -0x1a(%ebp),%eax
0808de8a +0x82:  mov    $0xc,%ah
0808de8c +0x84:  mov    %ax,-0x1c(%ebp)
0808de90 +0x88:  fldcw  -0x1c(%ebp)
0808de93 +0x8b:  fistpl -0x20(%ebp)
0808de96 +0x8e:  fldcw  -0x1a(%ebp)
0808de99 +0x91:  mov    -0x20(%ebp),%eax
0808de9c +0x94:  leave
0808de9d +0x95:  ret
```

## 反编译 C

```c
// SDCActiveStatusSyncCommon::getBurnDamage @ 0x808de08

/* SDCActiveStatusSyncCommon::getBurnDamage(bool&, STSDCActiveStatusSyncDataSend*, void*, int) */

int __thiscall
SDCActiveStatusSyncCommon::getBurnDamage
          (SDCActiveStatusSyncCommon *this,bool *param_1,STSDCActiveStatusSyncDataSend *param_2,
          void *param_3,int param_4)

{
  longdouble lVar1;
  float local_10;
  
  lVar1 = (longdouble)
          GetUniformVelocityFloatSDC(0.0,(float)*(int *)(param_2 + 3),param_4,*(int *)(param_2 + 7))
  ;
  local_10 = (float)lVar1;
  if (0 < *(int *)(param_2 + 3)) {
    *param_1 = false;
  }
  if (param_2[0xc] != (STSDCActiveStatusSyncDataSend)0x0) {
    lVar1 = (longdouble)
            getUserToUserDamageRate(this,param_2[0xb] == (STSDCActiveStatusSyncDataSend)0xa);
    local_10 = (float)((longdouble)local_10 * lVar1);
  }
  return (int)ROUND(local_10);
}
```

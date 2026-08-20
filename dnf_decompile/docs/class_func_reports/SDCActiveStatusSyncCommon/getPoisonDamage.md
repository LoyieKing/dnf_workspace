# getPoisonDamage

`_ZN25SDCActiveStatusSyncCommon15getPoisonDamageEP29STSDCActiveStatusSyncDataSendPvi`

`SDCActiveStatusSyncCommon::getPoisonDamage(STSDCActiveStatusSyncDataSend*, void*, int)`

| 类 | 地址 |
|---|---|
| `SDCActiveStatusSyncCommon` | `0x0808dcc4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808dcc4  _ZN25SDCActiveStatusSyncCommon15getPoisonDamageEP29STSDCActiveStatusSyncDataSendPvi
#           SDCActiveStatusSyncCommon::getPoisonDamage(STSDCActiveStatusSyncDataSend*, void*, int)
# range [0x0808dcc4, 0x0808dd5b]
0808dcc4 +0x00:  push   %ebp
0808dcc5 +0x01:  mov    %esp,%ebp
0808dcc7 +0x03:  sub    $0x38,%esp
0808dcca +0x06:  mov    0xc(%ebp),%eax
0808dccd +0x09:  mov    0x1d(%eax),%eax
0808dcd0 +0x0c:  cmp    $0x63,%eax
0808dcd3 +0x0f:  jle    0808dcdc <+0x18>
0808dcd5 +0x11:  mov    $0x0,%eax
0808dcda +0x16:  jmp    0808dd5a <+0x96>
0808dcdc +0x18:  mov    0xc(%ebp),%eax
0808dcdf +0x1b:  mov    0x7(%eax),%eax
0808dce2 +0x1e:  mov    0xc(%ebp),%edx
0808dce5 +0x21:  mov    0x3(%edx),%edx
0808dce8 +0x24:  mov    %edx,-0x20(%ebp)
0808dceb +0x27:  fildl  -0x20(%ebp)
0808dcee +0x2a:  mov    %eax,0xc(%esp)
0808dcf2 +0x2e:  mov    0x14(%ebp),%eax
0808dcf5 +0x31:  mov    %eax,0x8(%esp)
0808dcf9 +0x35:  fstps  0x4(%esp)
0808dcfd +0x39:  mov    $0x0,%eax
0808dd02 +0x3e:  mov    %eax,(%esp)
0808dd05 +0x41:  call   088924c1 <_Z26GetUniformVelocityFloatSDCffii>  ; GetUniformVelocityFloatSDC(float, float, int, int)
0808dd0a +0x46:  fstps  -0xc(%ebp)
0808dd0d +0x49:  mov    0xc(%ebp),%eax
0808dd10 +0x4c:  movzbl 0xc(%eax),%eax
0808dd14 +0x50:  test   %al,%al
0808dd16 +0x52:  je     0808dd3e <+0x7a>
0808dd18 +0x54:  mov    0xc(%ebp),%eax
0808dd1b +0x57:  movzbl 0xb(%eax),%eax
0808dd1f +0x5b:  cmp    $0xa,%al
0808dd21 +0x5d:  sete   %al
0808dd24 +0x60:  movzbl %al,%eax
0808dd27 +0x63:  mov    %eax,0x4(%esp)
0808dd2b +0x67:  mov    0x8(%ebp),%eax
0808dd2e +0x6a:  mov    %eax,(%esp)
0808dd31 +0x6d:  call   0808df5c <_ZN25SDCActiveStatusSyncCommon23getUserToUserDamageRateEb>  ; SDCActiveStatusSyncCommon::getUserToUserDamageRate(bool)
0808dd36 +0x72:  flds   -0xc(%ebp)
0808dd39 +0x75:  fmulp  %st,%st(1)
0808dd3b +0x77:  fstps  -0xc(%ebp)
0808dd3e +0x7a:  flds   -0xc(%ebp)
0808dd41 +0x7d:  fnstcw -0x1a(%ebp)
0808dd44 +0x80:  movzwl -0x1a(%ebp),%eax
0808dd48 +0x84:  mov    $0xc,%ah
0808dd4a +0x86:  mov    %ax,-0x1c(%ebp)
0808dd4e +0x8a:  fldcw  -0x1c(%ebp)
0808dd51 +0x8d:  fistpl -0x20(%ebp)
0808dd54 +0x90:  fldcw  -0x1a(%ebp)
0808dd57 +0x93:  mov    -0x20(%ebp),%eax
0808dd5a +0x96:  leave
0808dd5b +0x97:  ret
```

## 反编译 C

```c
// SDCActiveStatusSyncCommon::getPoisonDamage @ 0x808dcc4

/* SDCActiveStatusSyncCommon::getPoisonDamage(STSDCActiveStatusSyncDataSend*, void*, int) */

int __thiscall
SDCActiveStatusSyncCommon::getPoisonDamage
          (SDCActiveStatusSyncCommon *this,STSDCActiveStatusSyncDataSend *param_1,void *param_2,
          int param_3)

{
  int iVar1;
  longdouble lVar2;
  float local_10;
  
  if (*(int *)(param_1 + 0x1d) < 100) {
    lVar2 = (longdouble)
            GetUniformVelocityFloatSDC
                      (0.0,(float)*(int *)(param_1 + 3),param_3,*(int *)(param_1 + 7));
    local_10 = (float)lVar2;
    if (param_1[0xc] != (STSDCActiveStatusSyncDataSend)0x0) {
      lVar2 = (longdouble)
              getUserToUserDamageRate(this,param_1[0xb] == (STSDCActiveStatusSyncDataSend)0xa);
      local_10 = (float)((longdouble)local_10 * lVar2);
    }
    iVar1 = (int)ROUND(local_10);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
```

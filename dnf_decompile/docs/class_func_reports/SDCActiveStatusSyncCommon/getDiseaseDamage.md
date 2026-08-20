# getDiseaseDamage

`_ZN25SDCActiveStatusSyncCommon16getDiseaseDamageEP29STSDCActiveStatusSyncDataSendi`

`SDCActiveStatusSyncCommon::getDiseaseDamage(STSDCActiveStatusSyncDataSend*, int)`

| 类 | 地址 |
|---|---|
| `SDCActiveStatusSyncCommon` | `0x0808dd5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808dd5c  _ZN25SDCActiveStatusSyncCommon16getDiseaseDamageEP29STSDCActiveStatusSyncDataSendi
#           SDCActiveStatusSyncCommon::getDiseaseDamage(STSDCActiveStatusSyncDataSend*, int)
# range [0x0808dd5c, 0x0808de07]
0808dd5c +0x00:  push   %ebp
0808dd5d +0x01:  mov    %esp,%ebp
0808dd5f +0x03:  sub    $0x38,%esp
0808dd62 +0x06:  mov    0xc(%ebp),%eax
0808dd65 +0x09:  mov    0x1d(%eax),%eax
0808dd68 +0x0c:  cmp    $0x63,%eax
0808dd6b +0x0f:  jle    0808dd77 <+0x1b>
0808dd6d +0x11:  mov    $0x0,%eax
0808dd72 +0x16:  jmp    0808de06 <+0xaa>
0808dd77 +0x1b:  mov    0xc(%ebp),%eax
0808dd7a +0x1e:  mov    0x7(%eax),%eax
0808dd7d +0x21:  mov    0xc(%ebp),%edx
0808dd80 +0x24:  mov    0x3(%edx),%edx
0808dd83 +0x27:  mov    %edx,-0x20(%ebp)
0808dd86 +0x2a:  fildl  -0x20(%ebp)
0808dd89 +0x2d:  mov    %eax,0xc(%esp)
0808dd8d +0x31:  mov    0x10(%ebp),%eax
0808dd90 +0x34:  mov    %eax,0x8(%esp)
0808dd94 +0x38:  fstps  0x4(%esp)
0808dd98 +0x3c:  mov    $0x0,%eax
0808dd9d +0x41:  mov    %eax,(%esp)
0808dda0 +0x44:  call   088924c1 <_Z26GetUniformVelocityFloatSDCffii>  ; GetUniformVelocityFloatSDC(float, float, int, int)
0808dda5 +0x49:  fnstcw -0x1a(%ebp)
0808dda8 +0x4c:  movzwl -0x1a(%ebp),%eax
0808ddac +0x50:  mov    $0xc,%ah
0808ddae +0x52:  mov    %ax,-0x1c(%ebp)
0808ddb2 +0x56:  fldcw  -0x1c(%ebp)
0808ddb5 +0x59:  fistpl -0xc(%ebp)
0808ddb8 +0x5c:  fldcw  -0x1a(%ebp)
0808ddbb +0x5f:  mov    0xc(%ebp),%eax
0808ddbe +0x62:  movzbl 0xc(%eax),%eax
0808ddc2 +0x66:  test   %al,%al
0808ddc4 +0x68:  je     0808de03 <+0xa7>
0808ddc6 +0x6a:  fildl  -0xc(%ebp)
0808ddc9 +0x6d:  fstps  -0x24(%ebp)
0808ddcc +0x70:  mov    0xc(%ebp),%eax
0808ddcf +0x73:  movzbl 0xb(%eax),%eax
0808ddd3 +0x77:  cmp    $0xa,%al
0808ddd5 +0x79:  sete   %al
0808ddd8 +0x7c:  movzbl %al,%eax
0808dddb +0x7f:  mov    %eax,0x4(%esp)
0808dddf +0x83:  mov    0x8(%ebp),%eax
0808dde2 +0x86:  mov    %eax,(%esp)
0808dde5 +0x89:  call   0808df5c <_ZN25SDCActiveStatusSyncCommon23getUserToUserDamageRateEb>  ; SDCActiveStatusSyncCommon::getUserToUserDamageRate(bool)
0808ddea +0x8e:  fmuls  -0x24(%ebp)
0808dded +0x91:  fnstcw -0x1a(%ebp)
0808ddf0 +0x94:  movzwl -0x1a(%ebp),%eax
0808ddf4 +0x98:  mov    $0xc,%ah
0808ddf6 +0x9a:  mov    %ax,-0x1c(%ebp)
0808ddfa +0x9e:  fldcw  -0x1c(%ebp)
0808ddfd +0xa1:  fistpl -0xc(%ebp)
0808de00 +0xa4:  fldcw  -0x1a(%ebp)
0808de03 +0xa7:  mov    -0xc(%ebp),%eax
0808de06 +0xaa:  leave
0808de07 +0xab:  ret
```

## 反编译 C

```c
// SDCActiveStatusSyncCommon::getDiseaseDamage @ 0x808dd5c

/* SDCActiveStatusSyncCommon::getDiseaseDamage(STSDCActiveStatusSyncDataSend*, int) */

int __thiscall
SDCActiveStatusSyncCommon::getDiseaseDamage
          (SDCActiveStatusSyncCommon *this,STSDCActiveStatusSyncDataSend *param_1,int param_2)

{
  int iVar1;
  longdouble lVar2;
  
  if (*(int *)(param_1 + 0x1d) < 100) {
    lVar2 = (longdouble)
            GetUniformVelocityFloatSDC
                      (0.0,(float)*(int *)(param_1 + 3),param_2,*(int *)(param_1 + 7));
    iVar1 = (int)ROUND(lVar2);
    if (param_1[0xc] != (STSDCActiveStatusSyncDataSend)0x0) {
      lVar2 = (longdouble)
              getUserToUserDamageRate(this,param_1[0xb] == (STSDCActiveStatusSyncDataSend)0xa);
      iVar1 = (int)ROUND(lVar2 * (longdouble)iVar1);
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
```

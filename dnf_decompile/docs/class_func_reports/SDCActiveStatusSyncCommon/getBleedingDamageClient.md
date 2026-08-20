# getBleedingDamageClient

`_ZN25SDCActiveStatusSyncCommon23getBleedingDamageClientEP29STSDCActiveStatusSyncDataSendbPv`

`SDCActiveStatusSyncCommon::getBleedingDamageClient(STSDCActiveStatusSyncDataSend*, bool, void*)`

| 类 | 地址 |
|---|---|
| `SDCActiveStatusSyncCommon` | `0x0808de9e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808de9e  _ZN25SDCActiveStatusSyncCommon23getBleedingDamageClientEP29STSDCActiveStatusSyncDataSendbPv
#           SDCActiveStatusSyncCommon::getBleedingDamageClient(STSDCActiveStatusSyncDataSend*, bool, void*)
# range [0x0808de9e, 0x0808df19]
0808de9e +0x00:  push   %ebp
0808de9f +0x01:  mov    %esp,%ebp
0808dea1 +0x03:  sub    $0x38,%esp
0808dea4 +0x06:  mov    0x10(%ebp),%eax
0808dea7 +0x09:  mov    %al,-0x1c(%ebp)
0808deaa +0x0c:  mov    0xc(%ebp),%eax
0808dead +0x0f:  mov    0x7(%eax),%ecx
0808deb0 +0x12:  mov    $0x10624dd3,%edx
0808deb5 +0x17:  mov    %ecx,%eax
0808deb7 +0x19:  imul   %edx
0808deb9 +0x1b:  sar    $0x5,%edx
0808debc +0x1e:  mov    %ecx,%eax
0808debe +0x20:  sar    $0x1f,%eax
0808dec1 +0x23:  mov    %edx,%ecx
0808dec3 +0x25:  sub    %eax,%ecx
0808dec5 +0x27:  mov    %ecx,%eax
0808dec7 +0x29:  mov    %eax,-0x18(%ebp)
0808deca +0x2c:  movl   $0x1,-0x14(%ebp)
0808ded1 +0x33:  lea    -0x18(%ebp),%eax
0808ded4 +0x36:  mov    %eax,0x4(%esp)
0808ded8 +0x3a:  lea    -0x14(%ebp),%eax
0808dedb +0x3d:  mov    %eax,(%esp)
0808dede +0x40:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
0808dee3 +0x45:  mov    (%eax),%eax
0808dee5 +0x47:  mov    %eax,-0x10(%ebp)
0808dee8 +0x4a:  mov    0xc(%ebp),%eax
0808deeb +0x4d:  mov    0x3(%eax),%eax
0808deee +0x50:  mov    %eax,-0x20(%ebp)
0808def1 +0x53:  fildl  -0x20(%ebp)
0808def4 +0x56:  fildl  -0x10(%ebp)
0808def7 +0x59:  fdivrp %st,%st(1)
0808def9 +0x5b:  fstps  -0xc(%ebp)
0808defc +0x5e:  flds   -0xc(%ebp)
0808deff +0x61:  fnstcw -0x22(%ebp)
0808df02 +0x64:  movzwl -0x22(%ebp),%eax
0808df06 +0x68:  mov    $0xc,%ah
0808df08 +0x6a:  mov    %ax,-0x24(%ebp)
0808df0c +0x6e:  fldcw  -0x24(%ebp)
0808df0f +0x71:  fistpl -0x20(%ebp)
0808df12 +0x74:  fldcw  -0x22(%ebp)
0808df15 +0x77:  mov    -0x20(%ebp),%eax
0808df18 +0x7a:  leave
0808df19 +0x7b:  ret
```

## 反编译 C

```c
// SDCActiveStatusSyncCommon::getBleedingDamageClient @ 0x808de9e

/* SDCActiveStatusSyncCommon::getBleedingDamageClient(STSDCActiveStatusSyncDataSend*, bool, void*)
    */

int SDCActiveStatusSyncCommon::getBleedingDamageClient
              (STSDCActiveStatusSyncDataSend *param_1,bool param_2,void *param_3)

{
  int *piVar1;
  undefined3 in_stack_00000009;
  int local_1c [6];
  
  local_1c[0] = *(int *)(_param_2 + 7) / 500;
  local_1c[1] = 1;
  piVar1 = std::max<int>(local_1c + 1,local_1c);
  return (int)ROUND((float)*(int *)(_param_2 + 3) / (float)*piVar1);
}
```

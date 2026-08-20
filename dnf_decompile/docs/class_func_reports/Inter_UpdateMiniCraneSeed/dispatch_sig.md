# dispatch_sig

`_ZN25Inter_UpdateMiniCraneSeed12dispatch_sigEP5CUserPci`

`Inter_UpdateMiniCraneSeed::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_UpdateMiniCraneSeed` | `0x084e8906` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e8906  _ZN25Inter_UpdateMiniCraneSeed12dispatch_sigEP5CUserPci
#           Inter_UpdateMiniCraneSeed::dispatch_sig(CUser*, char*, int)
# range [0x084e8906, 0x084e8935]
084e8906 +0x00:  push   %ebp
084e8907 +0x01:  mov    %esp,%ebp
084e8909 +0x03:  push   %ebx
084e890a +0x04:  sub    $0x24,%esp
084e890d +0x07:  mov    0x10(%ebp),%eax
084e8910 +0x0a:  mov    %eax,-0xc(%ebp)
084e8913 +0x0d:  mov    -0xc(%ebp),%eax
084e8916 +0x10:  mov    0xa(%eax),%ebx
084e8919 +0x13:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084e891e +0x18:  mov    %ebx,0x4(%esp)
084e8922 +0x1c:  mov    %eax,(%esp)
084e8925 +0x1f:  call   086d13ba <_ZN9GameWorld26ResetCraneItemNeedMaterialEi>  ; GameWorld::ResetCraneItemNeedMaterial(int)
084e892a +0x24:  mov    $0x0,%eax
084e892f +0x29:  add    $0x24,%esp
084e8932 +0x2c:  pop    %ebx
084e8933 +0x2d:  pop    %ebp
084e8934 +0x2e:  ret
084e8935 +0x2f:  nop
```

## 反编译 C

```c
// Inter_UpdateMiniCraneSeed::dispatch_sig @ 0x84e8906

/* Inter_UpdateMiniCraneSeed::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_UpdateMiniCraneSeed::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  GameWorld *this;
  
  iVar1 = *(int *)(param_3 + 10);
  this = (GameWorld *)G_GameWorld();
  GameWorld::ResetCraneItemNeedMaterial(this,iVar1);
  return 0;
}
```

# dispatch_sig

`_ZN21Inter_LoadNoCacheData12dispatch_sigEP5CUserPci`

`Inter_LoadNoCacheData::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadNoCacheData` | `0x084dd1ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084dd1ee  _ZN21Inter_LoadNoCacheData12dispatch_sigEP5CUserPci
#           Inter_LoadNoCacheData::dispatch_sig(CUser*, char*, int)
# range [0x084dd1ee, 0x084dd26b]
084dd1ee +0x00:  push   %ebp
084dd1ef +0x01:  mov    %esp,%ebp
084dd1f1 +0x03:  sub    $0x28,%esp
084dd1f4 +0x06:  cmpl   $0x0,0xc(%ebp)
084dd1f8 +0x0a:  je     084dd265 <+0x77>
084dd1fa +0x0c:  mov    0xc(%ebp),%eax
084dd1fd +0x0f:  mov    %eax,(%esp)
084dd200 +0x12:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084dd205 +0x17:  test   %eax,%eax
084dd207 +0x19:  setne  %al
084dd20a +0x1c:  test   %al,%al
084dd20c +0x1e:  je     084dd265 <+0x77>
084dd20e +0x20:  mov    0x10(%ebp),%eax
084dd211 +0x23:  mov    %eax,-0xc(%ebp)
084dd214 +0x26:  movl   $0xffffffff,0x4(%esp)
084dd21c +0x2e:  mov    0xc(%ebp),%eax
084dd21f +0x31:  mov    %eax,(%esp)
084dd222 +0x34:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084dd227 +0x39:  mov    -0xc(%ebp),%edx
084dd22a +0x3c:  mov    (%edx),%edx
084dd22c +0x3e:  cmp    %edx,%eax
084dd22e +0x40:  sete   %al
084dd231 +0x43:  test   %al,%al
084dd233 +0x45:  je     084dd265 <+0x77>
084dd235 +0x47:  movl   $0x1,0x4(%esp)
084dd23d +0x4f:  mov    0xc(%ebp),%eax
084dd240 +0x52:  mov    %eax,(%esp)
084dd243 +0x55:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084dd248 +0x5a:  mov    (%eax),%edx
084dd24a +0x5c:  add    $0x4,%edx
084dd24d +0x5f:  mov    (%edx),%ecx
084dd24f +0x61:  mov    -0xc(%ebp),%edx
084dd252 +0x64:  add    $0x4,%edx
084dd255 +0x67:  mov    %edx,0x8(%esp)
084dd259 +0x6b:  mov    0xc(%ebp),%edx
084dd25c +0x6e:  mov    %edx,0x4(%esp)
084dd260 +0x72:  mov    %eax,(%esp)
084dd263 +0x75:  call   *%ecx
084dd265 +0x77:  mov    $0x0,%eax
084dd26a +0x7c:  leave
084dd26b +0x7d:  ret
```

## 反编译 C

```c
// Inter_LoadNoCacheData::dispatch_sig @ 0x84dd1ee

/* Inter_LoadNoCacheData::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadNoCacheData::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 != (char *)0x0) {
    iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar1 != 0) {
      iVar1 = CUser::get_charac_no((CUser *)param_2,-1);
      if (iVar1 == *(int *)param_3) {
        piVar2 = (int *)CUser::GetCharacExpandData((CUser *)param_2,1);
        (**(code **)(*piVar2 + 4))(piVar2,param_2,param_3 + 4);
      }
    }
  }
  return 0;
}
```

# dispatch_sig

`_ZN19Inter_LoadExpertJob12dispatch_sigEP5CUserPci`

`Inter_LoadExpertJob::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadExpertJob` | `0x084db200` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084db200  _ZN19Inter_LoadExpertJob12dispatch_sigEP5CUserPci
#           Inter_LoadExpertJob::dispatch_sig(CUser*, char*, int)
# range [0x084db200, 0x084db293]
084db200 +0x00:  push   %ebp
084db201 +0x01:  mov    %esp,%ebp
084db203 +0x03:  sub    $0x18,%esp
084db206 +0x06:  mov    0xc(%ebp),%eax
084db209 +0x09:  mov    %eax,(%esp)
084db20c +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084db211 +0x11:  cmp    $0x1,%eax
084db214 +0x14:  setle  %al
084db217 +0x17:  test   %al,%al
084db219 +0x19:  je     084db222 <+0x22>
084db21b +0x1b:  mov    $0x0,%eax
084db220 +0x20:  jmp    084db291 <+0x91>
084db222 +0x22:  mov    0xc(%ebp),%eax
084db225 +0x25:  mov    %eax,(%esp)
084db228 +0x28:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084db22d +0x2d:  test   %eax,%eax
084db22f +0x2f:  sete   %al
084db232 +0x32:  test   %al,%al
084db234 +0x34:  je     084db23d <+0x3d>
084db236 +0x36:  mov    $0x0,%eax
084db23b +0x3b:  jmp    084db291 <+0x91>
084db23d +0x3d:  movl   $0x0,0x4(%esp)
084db245 +0x45:  mov    0xc(%ebp),%eax
084db248 +0x48:  mov    %eax,(%esp)
084db24b +0x4b:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084db250 +0x50:  mov    (%eax),%edx
084db252 +0x52:  add    $0x4,%edx
084db255 +0x55:  mov    (%edx),%ecx
084db257 +0x57:  mov    0x10(%ebp),%edx
084db25a +0x5a:  mov    %edx,0x8(%esp)
084db25e +0x5e:  mov    0xc(%ebp),%edx
084db261 +0x61:  mov    %edx,0x4(%esp)
084db265 +0x65:  mov    %eax,(%esp)
084db268 +0x68:  call   *%ecx
084db26a +0x6a:  movl   $0x0,0x4(%esp)
084db272 +0x72:  mov    0xc(%ebp),%eax
084db275 +0x75:  mov    %eax,(%esp)
084db278 +0x78:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084db27d +0x7d:  mov    0xc(%ebp),%edx
084db280 +0x80:  mov    %edx,0x4(%esp)
084db284 +0x84:  mov    %eax,(%esp)
084db287 +0x87:  call   0832b454 <_ZN10expert_job16CCharacExpertJob17SendExpertJobInfoEP5CUser>  ; expert_job::CCharacExpertJob::SendExpertJobInfo(CUser*)
084db28c +0x8c:  mov    $0x0,%eax
084db291 +0x91:  leave
084db292 +0x92:  ret
084db293 +0x93:  nop
```

## 反编译 C

```c
// Inter_LoadExpertJob::dispatch_sig @ 0x84db200

/* Inter_LoadExpertJob::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadExpertJob::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  CCharacExpertJob *this;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((1 < iVar1) &&
     (iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar1 != 0)) {
    piVar2 = (int *)CUser::GetCharacExpandData((CUser *)param_2,0);
    (**(code **)(*piVar2 + 4))(piVar2,param_2,param_3);
    this = (CCharacExpertJob *)CUser::GetCharacExpandData((CUser *)param_2,0);
    expert_job::CCharacExpertJob::SendExpertJobInfo(this,(CUser *)param_2);
  }
  return 0;
}
```

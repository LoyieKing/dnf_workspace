# dispatch_sig

`_ZN26Inter_MonitorGuildPointDel12dispatch_sigEP5CUserPci`

`Inter_MonitorGuildPointDel::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorGuildPointDel` | `0x084ce756` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ce756  _ZN26Inter_MonitorGuildPointDel12dispatch_sigEP5CUserPci
#           Inter_MonitorGuildPointDel::dispatch_sig(CUser*, char*, int)
# range [0x084ce756, 0x084ce7f5]
084ce756 +0x00:  push   %ebp
084ce757 +0x01:  mov    %esp,%ebp
084ce759 +0x03:  push   %esi
084ce75a +0x04:  push   %ebx
084ce75b +0x05:  sub    $0x30,%esp
084ce75e +0x08:  lea    -0x24(%ebp),%eax
084ce761 +0x0b:  mov    %eax,(%esp)
084ce764 +0x0e:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
084ce769 +0x13:  movl   $0x0,-0x10(%ebp)
084ce770 +0x1a:  movl   $0xc84,-0xc(%ebp)
084ce777 +0x21:  lea    -0x18(%ebp),%eax
084ce77a +0x24:  lea    -0x10(%ebp),%edx
084ce77d +0x27:  mov    %edx,0x8(%esp)
084ce781 +0x2b:  lea    -0xc(%ebp),%edx
084ce784 +0x2e:  mov    %edx,0x4(%esp)
084ce788 +0x32:  mov    %eax,(%esp)
084ce78b +0x35:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
084ce790 +0x3a:  sub    $0x4,%esp
084ce793 +0x3d:  lea    -0x18(%ebp),%eax
084ce796 +0x40:  mov    %eax,0x4(%esp)
084ce79a +0x44:  lea    -0x24(%ebp),%eax
084ce79d +0x47:  mov    %eax,(%esp)
084ce7a0 +0x4a:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
084ce7a5 +0x4f:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084ce7aa +0x54:  lea    -0x24(%ebp),%edx
084ce7ad +0x57:  mov    %edx,0x4(%esp)
084ce7b1 +0x5b:  mov    %eax,(%esp)
084ce7b4 +0x5e:  call   086ccbf4 <_ZN9GameWorld19deleteSpecificItemsEPKSt6vectorISt4pairIiiESaIS2_EE>  ; GameWorld::deleteSpecificItems(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const*)
084ce7b9 +0x63:  call   084eb100 <_GLOBAL__I__Z7getUserj+0x20b2>  ; global constructors keyed to getUser(unsigned int)+0x20b2
084ce7be +0x68:  mov    $0x0,%ebx
084ce7c3 +0x6d:  lea    -0x24(%ebp),%eax
084ce7c6 +0x70:  mov    %eax,(%esp)
084ce7c9 +0x73:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
084ce7ce +0x78:  mov    %ebx,%eax
084ce7d0 +0x7a:  lea    -0x8(%ebp),%esp
084ce7d3 +0x7d:  add    $0x0,%esp
084ce7d6 +0x80:  pop    %ebx
084ce7d7 +0x81:  pop    %esi
084ce7d8 +0x82:  pop    %ebp
084ce7d9 +0x83:  ret
084ce7da +0x84:  mov    %edx,%ebx
084ce7dc +0x86:  mov    %eax,%esi
084ce7de +0x88:  lea    -0x24(%ebp),%eax
084ce7e1 +0x8b:  mov    %eax,(%esp)
084ce7e4 +0x8e:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
084ce7e9 +0x93:  mov    %esi,%eax
084ce7eb +0x95:  mov    %ebx,%edx
084ce7ed +0x97:  mov    %eax,(%esp)
084ce7f0 +0x9a:  call   08ae3750 <_Unwind_Resume>
084ce7f5 +0x9f:  nop
```

## 反编译 C

```c
// Inter_MonitorGuildPointDel::dispatch_sig @ 0x84ce756

/* Inter_MonitorGuildPointDel::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorGuildPointDel::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  GameWorld *this;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_28 [12];
  int local_1c [2];
  undefined4 local_14;
  int local_10;
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_28);
  local_14 = 0;
  local_10 = 0xc84;
                    /* try { // try from 084ce78b to 084ce7b8 has its CatchHandler @ 084ce7da */
  std::make_pair<int,int>(local_1c,&local_10);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            (local_28,(pair *)local_1c);
  this = (GameWorld *)G_GameWorld();
  GameWorld::deleteSpecificItems(this,(vector *)local_28);
  setLastDeleteTime();
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_28);
  return 0;
}
```

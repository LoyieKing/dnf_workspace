# dispatch_sig

`_ZN40Inter_LoadOnlinePreliminaryTeamMatchList12dispatch_sigEP5CUserPci`

`Inter_LoadOnlinePreliminaryTeamMatchList::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadOnlinePreliminaryTeamMatchList` | `0x084e2790` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e2790  _ZN40Inter_LoadOnlinePreliminaryTeamMatchList12dispatch_sigEP5CUserPci
#           Inter_LoadOnlinePreliminaryTeamMatchList::dispatch_sig(CUser*, char*, int)
# range [0x084e2790, 0x084e27b7]
084e2790 +0x00:  push   %ebp
084e2791 +0x01:  mov    %esp,%ebp
084e2793 +0x03:  sub    $0x18,%esp
084e2796 +0x06:  mov    &_ZN10GlobalData26s_onlinePreliminaryTeamMgrE,%eax
084e279b +0x0b:  mov    0x10(%ebp),%edx
084e279e +0x0e:  mov    %edx,0x8(%esp)
084e27a2 +0x12:  mov    0xc(%ebp),%edx
084e27a5 +0x15:  mov    %edx,0x4(%esp)
084e27a9 +0x19:  mov    %eax,(%esp)
084e27ac +0x1c:  call   08588be4 <_ZN18online_preliminary25COnlinePreliminaryTeamMgr14OnLoadTeamInfoEP5CUserPc>  ; online_preliminary::COnlinePreliminaryTeamMgr::OnLoadTeamInfo(CUser*, char*)
084e27b1 +0x21:  mov    $0x0,%eax
084e27b6 +0x26:  leave
084e27b7 +0x27:  ret
```

## 反编译 C

```c
// Inter_LoadOnlinePreliminaryTeamMatchList::dispatch_sig @ 0x84e2790

/* Inter_LoadOnlinePreliminaryTeamMatchList::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_LoadOnlinePreliminaryTeamMatchList::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  online_preliminary::COnlinePreliminaryTeamMgr::OnLoadTeamInfo
            (GlobalData::s_onlinePreliminaryTeamMgr,(CUser *)param_2,(char *)param_3);
  return 0;
}
```

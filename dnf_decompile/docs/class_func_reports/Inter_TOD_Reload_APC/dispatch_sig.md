# dispatch_sig

`_ZN20Inter_TOD_Reload_APC12dispatch_sigEP5CUserPci`

`Inter_TOD_Reload_APC::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_TOD_Reload_APC` | `0x084e4e26` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e4e26  _ZN20Inter_TOD_Reload_APC12dispatch_sigEP5CUserPci
#           Inter_TOD_Reload_APC::dispatch_sig(CUser*, char*, int)
# range [0x084e4e26, 0x084e4e83]
084e4e26 +0x00:  push   %ebp
084e4e27 +0x01:  mov    %esp,%ebp
084e4e29 +0x03:  sub    $0x28,%esp
084e4e2c +0x06:  mov    0x10(%ebp),%eax
084e4e2f +0x09:  mov    %eax,-0x10(%ebp)
084e4e32 +0x0c:  mov    &_ZN10GlobalData20s_pTowerOfDespairMgrE,%eax
084e4e37 +0x11:  mov    %eax,(%esp)
084e4e3a +0x14:  call   0864431e <_ZN17TowerOfDespairMgr12ResetAPCInfoEv>  ; TowerOfDespairMgr::ResetAPCInfo()
084e4e3f +0x19:  movl   $0x0,-0xc(%ebp)
084e4e46 +0x20:  jmp    084e4e72 <+0x4c>
084e4e48 +0x22:  mov    -0xc(%ebp),%eax
084e4e4b +0x25:  imul   $0xbc,%eax,%eax
084e4e51 +0x2b:  mov    %eax,%ecx
084e4e53 +0x2d:  add    -0x10(%ebp),%ecx
084e4e56 +0x30:  mov    -0xc(%ebp),%edx
084e4e59 +0x33:  mov    &_ZN10GlobalData20s_pTowerOfDespairMgrE,%eax
084e4e5e +0x38:  mov    %ecx,0x8(%esp)
084e4e62 +0x3c:  mov    %edx,0x4(%esp)
084e4e66 +0x40:  mov    %eax,(%esp)
084e4e69 +0x43:  call   086442ca <_ZN17TowerOfDespairMgr10SetAPCInfoEjRK8_APCInfo>  ; TowerOfDespairMgr::SetAPCInfo(unsigned int, _APCInfo const&)
084e4e6e +0x48:  addl   $0x1,-0xc(%ebp)
084e4e72 +0x4c:  cmpl   $0x9,-0xc(%ebp)
084e4e76 +0x50:  setle  %al
084e4e79 +0x53:  test   %al,%al
084e4e7b +0x55:  jne    084e4e48 <+0x22>
084e4e7d +0x57:  mov    $0x0,%eax
084e4e82 +0x5c:  leave
084e4e83 +0x5d:  ret
```

## 反编译 C

```c
// Inter_TOD_Reload_APC::dispatch_sig @ 0x84e4e26

/* Inter_TOD_Reload_APC::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_TOD_Reload_APC::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 local_10;
  
  TowerOfDespairMgr::ResetAPCInfo(GlobalData::s_pTowerOfDespairMgr);
  for (local_10 = 0; (int)local_10 < 10; local_10 = local_10 + 1) {
    TowerOfDespairMgr::SetAPCInfo
              (GlobalData::s_pTowerOfDespairMgr,local_10,(_APCInfo *)(local_10 * 0xbc + param_3));
  }
  return 0;
}
```

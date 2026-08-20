# checkValidPassword_Jpn

`_ZN8WongWork10CSimpleSSO22checkValidPassword_JpnEjPKcS2_RNS0_14stOutputData_tE`

`WongWork::CSimpleSSO::checkValidPassword_Jpn(unsigned int, char const*, char const*, WongWork::CSimpleSSO::stOutputData_t&)`

| 类 | 地址 |
|---|---|
| `WongWork::CSimpleSSO` | `0x081b25ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b25ec  _ZN8WongWork10CSimpleSSO22checkValidPassword_JpnEjPKcS2_RNS0_14stOutputData_tE
#           WongWork::CSimpleSSO::checkValidPassword_Jpn(unsigned int, char const*, char const*, WongWork::CSimpleSSO::stOutputData_t&)
# range [0x081b25ec, 0x081b26a7]
081b25ec +0x00:  push   %ebp
081b25ed +0x01:  mov    %esp,%ebp
081b25ef +0x03:  sub    $0x48,%esp
081b25f2 +0x06:  movl   $0x0,-0x1c(%ebp)
081b25f9 +0x0d:  movl   $0x0,-0x20(%ebp)
081b2600 +0x14:  mov    0x18(%ebp),%eax
081b2603 +0x17:  mov    %eax,0x10(%esp)
081b2607 +0x1b:  lea    -0x20(%ebp),%eax
081b260a +0x1e:  mov    %eax,0xc(%esp)
081b260e +0x22:  lea    -0x1c(%ebp),%eax
081b2611 +0x25:  mov    %eax,0x8(%esp)
081b2615 +0x29:  mov    0xc(%ebp),%eax
081b2618 +0x2c:  mov    %eax,0x4(%esp)
081b261c +0x30:  mov    0x8(%ebp),%eax
081b261f +0x33:  mov    %eax,(%esp)
081b2622 +0x36:  call   086031f6 <_ZN8WongWork10CSimpleSSO16getGameStartTimeEjRlS1_RNS0_14stOutputData_tE>  ; WongWork::CSimpleSSO::getGameStartTime(unsigned int, long&, long&, WongWork::CSimpleSSO::stOutputData_t&)
081b2627 +0x3b:  mov    &_ZN10GlobalData12s_GM_ManagerE,%eax
081b262c +0x40:  mov    0xc(%ebp),%edx
081b262f +0x43:  mov    %edx,0x4(%esp)
081b2633 +0x47:  mov    %eax,(%esp)
081b2636 +0x4a:  call   0829948c <_ZN11CGM_Manager4IsGmEj>  ; CGM_Manager::IsGm(unsigned int)
081b263b +0x4f:  test   %al,%al
081b263d +0x51:  je     081b26a1 <+0xb5>
081b263f +0x53:  movl   $0x84,0x8(%esp)
081b2647 +0x5b:  mov    0x14(%ebp),%eax
081b264a +0x5e:  mov    %eax,0x4(%esp)
081b264e +0x62:  mov    0x10(%ebp),%eax
081b2651 +0x65:  mov    %eax,(%esp)
081b2654 +0x68:  call   0807e8c0 <_init+0x11b8>
081b2659 +0x6d:  test   %eax,%eax
081b265b +0x6f:  jne    081b26a1 <+0xb5>
081b265d +0x71:  movl   $0x0,0xc(%esp)
081b2665 +0x79:  movl   $0x2e,0x8(%esp)
081b266d +0x81:  movl   $&_ZZN8WongWork10CSimpleSSO22checkValidPassword_JpnEjPKcS2_RNS0_14stOutputData_tEE19__PRETTY_FUNCTION__,0x4(%esp)
081b2675 +0x89:  lea    -0x18(%ebp),%eax
081b2678 +0x8c:  mov    %eax,(%esp)
081b267b +0x8f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081b2680 +0x94:  mov    0xc(%ebp),%eax
081b2683 +0x97:  mov    %eax,0x8(%esp)
081b2687 +0x9b:  movl   $"[!]GM User Check Password Sucess=> m_id(%d)",0x4(%esp)
081b268f +0xa3:  lea    -0x18(%ebp),%eax
081b2692 +0xa6:  mov    %eax,(%esp)
081b2695 +0xa9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081b269a +0xae:  mov    $0x1,%eax
081b269f +0xb3:  jmp    081b26a6 <+0xba>
081b26a1 +0xb5:  mov    $0x1,%eax
081b26a6 +0xba:  leave
081b26a7 +0xbb:  ret
```

## 反编译 C

```c
// WongWork::CSimpleSSO::checkValidPassword_Jpn @ 0x81b25ec

/* WongWork::CSimpleSSO::checkValidPassword_Jpn(unsigned int, char const*, char const*,
   WongWork::CSimpleSSO::stOutputData_t&) */

undefined4 __thiscall
WongWork::CSimpleSSO::checkValidPassword_Jpn
          (CSimpleSSO *this,uint param_1,char *param_2,char *param_3,stOutputData_t *param_4)

{
  char cVar1;
  int iVar2;
  long local_24 [2];
  cMyTrace local_1c [24];
  
  local_24[1] = 0;
  local_24[0] = 0;
  getGameStartTime(this,param_1,local_24 + 1,local_24,param_4);
  cVar1 = CGM_Manager::IsGm(GlobalData::s_GM_Manager);
  if ((cVar1 != '\0') && (iVar2 = strncmp(param_2,param_3,0x84), iVar2 == 0)) {
    cMyTrace::cMyTrace(local_1c,
                       "bool WongWork::CSimpleSSO::checkValidPassword_Jpn(unsigned int, const char*, const char*, WongWork::CSimpleSSO::stOutputData_t&)"
                       ,0x2e,0);
    cMyTrace::operator()(local_1c,"[!]GM User Check Password Sucess=> m_id(%d)",param_1);
  }
  return 1;
}
```

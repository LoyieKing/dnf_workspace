# CheckDeleteCharacTime

`_ZN5CUser21CheckDeleteCharacTimeEi`

`CUser::CheckDeleteCharacTime(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864a830` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864a830  _ZN5CUser21CheckDeleteCharacTimeEi
#           CUser::CheckDeleteCharacTime(int)
# range [0x0864a830, 0x0864a955]
0864a830 +0x000:  push   %ebp
0864a831 +0x001:  mov    %esp,%ebp
0864a833 +0x003:  push   %ebx
0864a834 +0x004:  sub    $0x34,%esp
0864a837 +0x007:  lea    -0x20(%ebp),%eax
0864a83a +0x00a:  mov    %eax,(%esp)
0864a83d +0x00d:  call   082a4224 <_GLOBAL__I__ZN4CLog5this_E+0x64b>  ; global constructors keyed to CLog::this_+0x64b
0864a842 +0x012:  mov    0xc(%ebp),%eax
0864a845 +0x015:  mov    0x8(%ebp),%edx
0864a848 +0x018:  add    $0x796e8,%edx
0864a84e +0x01e:  mov    %eax,0x4(%esp)
0864a852 +0x022:  mov    %edx,(%esp)
0864a855 +0x025:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864a85a +0x02a:  movzbl 0x39(%eax),%edx
0864a85e +0x02e:  movzbl -0x20(%ebp),%eax
0864a862 +0x032:  cmp    %al,%dl
0864a864 +0x034:  jne    0864a8b5 <+0x85>
0864a866 +0x036:  mov    0xc(%ebp),%eax
0864a869 +0x039:  mov    0x8(%ebp),%edx
0864a86c +0x03c:  add    $0x796e8,%edx
0864a872 +0x042:  mov    %eax,0x4(%esp)
0864a876 +0x046:  mov    %edx,(%esp)
0864a879 +0x049:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864a87e +0x04e:  movzbl 0x3a(%eax),%edx
0864a882 +0x052:  movzbl -0x1f(%ebp),%eax
0864a886 +0x056:  cmp    %al,%dl
0864a888 +0x058:  jne    0864a8b5 <+0x85>
0864a88a +0x05a:  mov    0xc(%ebp),%eax
0864a88d +0x05d:  mov    0x8(%ebp),%edx
0864a890 +0x060:  add    $0x796e8,%edx
0864a896 +0x066:  mov    %eax,0x4(%esp)
0864a89a +0x06a:  mov    %edx,(%esp)
0864a89d +0x06d:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864a8a2 +0x072:  movzbl 0x3b(%eax),%edx
0864a8a6 +0x076:  movzbl -0x1e(%ebp),%eax
0864a8aa +0x07a:  cmp    %al,%dl
0864a8ac +0x07c:  jne    0864a8b5 <+0x85>
0864a8ae +0x07e:  mov    $0x1,%eax
0864a8b3 +0x083:  jmp    0864a8ba <+0x8a>
0864a8b5 +0x085:  mov    $0x0,%eax
0864a8ba +0x08a:  test   %al,%al
0864a8bc +0x08c:  je     0864a94a <+0x11a>
0864a8c2 +0x092:  mov    0xc(%ebp),%eax
0864a8c5 +0x095:  mov    0x8(%ebp),%edx
0864a8c8 +0x098:  add    $0x796e8,%edx
0864a8ce +0x09e:  mov    %eax,0x4(%esp)
0864a8d2 +0x0a2:  mov    %edx,(%esp)
0864a8d5 +0x0a5:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864a8da +0x0aa:  movzbl 0x3c(%eax),%eax
0864a8de +0x0ae:  movsbl %al,%eax
0864a8e1 +0x0b1:  shl    $0x2,%eax
0864a8e4 +0x0b4:  mov    %eax,%edx
0864a8e6 +0x0b6:  shl    $0x4,%edx
0864a8e9 +0x0b9:  mov    %edx,%ebx
0864a8eb +0x0bb:  sub    %eax,%ebx
0864a8ed +0x0bd:  mov    0xc(%ebp),%eax
0864a8f0 +0x0c0:  mov    0x8(%ebp),%edx
0864a8f3 +0x0c3:  add    $0x796e8,%edx
0864a8f9 +0x0c9:  mov    %eax,0x4(%esp)
0864a8fd +0x0cd:  mov    %edx,(%esp)
0864a900 +0x0d0:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864a905 +0x0d5:  movzbl 0x3d(%eax),%eax
0864a909 +0x0d9:  movsbl %al,%eax
0864a90c +0x0dc:  lea    (%ebx,%eax,1),%eax
0864a90f +0x0df:  mov    %eax,-0x10(%ebp)
0864a912 +0x0e2:  movzbl -0x1d(%ebp),%eax
0864a916 +0x0e6:  movsbl %al,%eax
0864a919 +0x0e9:  shl    $0x2,%eax
0864a91c +0x0ec:  mov    %eax,%edx
0864a91e +0x0ee:  shl    $0x4,%edx
0864a921 +0x0f1:  sub    %eax,%edx
0864a923 +0x0f3:  movzbl -0x1c(%ebp),%eax
0864a927 +0x0f7:  movsbl %al,%eax
0864a92a +0x0fa:  lea    (%edx,%eax,1),%eax
0864a92d +0x0fd:  mov    %eax,-0xc(%ebp)
0864a930 +0x100:  mov    -0x10(%ebp),%eax
0864a933 +0x103:  mov    -0xc(%ebp),%edx
0864a936 +0x106:  mov    %edx,%ecx
0864a938 +0x108:  sub    %eax,%ecx
0864a93a +0x10a:  mov    %ecx,%eax
0864a93c +0x10c:  cmp    $0x59f,%eax
0864a941 +0x111:  jg     0864a94a <+0x11a>
0864a943 +0x113:  mov    $0x0,%eax
0864a948 +0x118:  jmp    0864a94f <+0x11f>
0864a94a +0x11a:  mov    $0x1,%eax
0864a94f +0x11f:  add    $0x34,%esp
0864a952 +0x122:  pop    %ebx
0864a953 +0x123:  pop    %ebp
0864a954 +0x124:  ret
0864a955 +0x125:  nop
```

## 反编译 C

```c
// CUser::CheckDeleteCharacTime @ 0x864a830

/* CUser::CheckDeleteCharacTime(int) */

undefined4 __thiscall CUser::CheckDeleteCharacTime(CUser *this,int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  CommonTime local_24;
  char local_23;
  char local_22;
  char local_21;
  char local_20;
  
  CommonTime::SetCurTime(&local_24);
  iVar3 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                    ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),param_1);
  if (((*(CommonTime *)(iVar3 + 0x39) == local_24) &&
      (iVar3 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                         ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                          param_1), *(char *)(iVar3 + 0x3a) == local_23)) &&
     (iVar3 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1), *(char *)(iVar3 + 0x3b) == local_22)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    iVar3 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),param_1
                      );
    cVar1 = *(char *)(iVar3 + 0x3c);
    iVar3 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),param_1
                      );
    if ((local_21 * 0x3c + (int)local_20) - (cVar1 * 0x3c + (int)*(char *)(iVar3 + 0x3d)) < 0x5a0) {
      return 0;
    }
  }
  return 1;
}
```

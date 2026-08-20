# CDisjointMachine

`_ZN10expert_job16CDisjointMachineC1EP5CUserPKcicii`

`expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)`

| 类 | 地址 |
|---|---|
| `expert_job::CDisjointMachine` | `0x085d1ae8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d1ae8  _ZN10expert_job16CDisjointMachineC1EP5CUserPKcicii
#           expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)
# range [0x085d1ae8, 0x085d1bbb]
085d1ae8 +0x00:  push   %ebp
085d1ae9 +0x01:  mov    %esp,%ebp
085d1aeb +0x03:  push   %esi
085d1aec +0x04:  push   %ebx
085d1aed +0x05:  sub    $0x20,%esp
085d1af0 +0x08:  mov    0x18(%ebp),%eax
085d1af3 +0x0b:  mov    %al,-0xc(%ebp)
085d1af6 +0x0e:  mov    0x8(%ebp),%eax
085d1af9 +0x11:  mov    %eax,(%esp)
085d1afc +0x14:  call   082845aa <_GLOBAL__I__ZN9CTimeGate15put_object_infoER11PacketGuard+0x26>  ; global constructors keyed to CTimeGate::put_object_info(PacketGuard&)+0x26
085d1b01 +0x19:  mov    0x8(%ebp),%eax
085d1b04 +0x1c:  movl   $&_ZTVN10expert_job16CDisjointMachineE+0x8,(%eax)
085d1b0a +0x22:  mov    0x8(%ebp),%eax
085d1b0d +0x25:  add    $0x4,%eax
085d1b10 +0x28:  mov    %eax,(%esp)
085d1b13 +0x2b:  call   085cb45a <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x170>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x170
085d1b18 +0x30:  mov    0x8(%ebp),%eax
085d1b1b +0x33:  add    $0x18,%eax
085d1b1e +0x36:  mov    %eax,(%esp)
085d1b21 +0x39:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
085d1b26 +0x3e:  mov    0x8(%ebp),%eax
085d1b29 +0x41:  mov    0xc(%ebp),%edx
085d1b2c +0x44:  mov    %edx,0x14(%eax)
085d1b2f +0x47:  mov    0x8(%ebp),%eax
085d1b32 +0x4a:  lea    0x18(%eax),%edx
085d1b35 +0x4d:  mov    0x10(%ebp),%eax
085d1b38 +0x50:  mov    %eax,0x4(%esp)
085d1b3c +0x54:  mov    %edx,(%esp)
085d1b3f +0x57:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
085d1b44 +0x5c:  mov    0x8(%ebp),%eax
085d1b47 +0x5f:  mov    0x14(%ebp),%edx
085d1b4a +0x62:  mov    %edx,0x1c(%eax)
085d1b4d +0x65:  mov    0x8(%ebp),%eax
085d1b50 +0x68:  movzbl -0xc(%ebp),%edx
085d1b54 +0x6c:  mov    %dl,0x20(%eax)
085d1b57 +0x6f:  mov    0x8(%ebp),%eax
085d1b5a +0x72:  mov    0x1c(%ebp),%edx
085d1b5d +0x75:  mov    %edx,0x24(%eax)
085d1b60 +0x78:  mov    0x8(%ebp),%eax
085d1b63 +0x7b:  mov    0x20(%ebp),%edx
085d1b66 +0x7e:  mov    %edx,0x28(%eax)
085d1b69 +0x81:  mov    0x8(%ebp),%eax
085d1b6c +0x84:  mov    0x24(%eax),%eax
085d1b6f +0x87:  lea    -0x50(%eax),%edx
085d1b72 +0x8a:  mov    0x8(%ebp),%eax
085d1b75 +0x8d:  mov    %edx,0x4(%eax)
085d1b78 +0x90:  mov    0x8(%ebp),%eax
085d1b7b +0x93:  movl   $0xa0,0xc(%eax)
085d1b82 +0x9a:  mov    0x8(%ebp),%eax
085d1b85 +0x9d:  mov    0x28(%eax),%eax
085d1b88 +0xa0:  lea    -0x32(%eax),%edx
085d1b8b +0xa3:  mov    0x8(%ebp),%eax
085d1b8e +0xa6:  mov    %edx,0x8(%eax)
085d1b91 +0xa9:  mov    0x8(%ebp),%eax
085d1b94 +0xac:  movl   $0x64,0x10(%eax)
085d1b9b +0xb3:  add    $0x20,%esp
085d1b9e +0xb6:  pop    %ebx
085d1b9f +0xb7:  pop    %esi
085d1ba0 +0xb8:  pop    %ebp
085d1ba1 +0xb9:  ret
085d1ba2 +0xba:  mov    %edx,%ebx
085d1ba4 +0xbc:  mov    %eax,%esi
085d1ba6 +0xbe:  mov    0x8(%ebp),%eax
085d1ba9 +0xc1:  add    $0x18,%eax
085d1bac +0xc4:  mov    %eax,(%esp)
085d1baf +0xc7:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
085d1bb4 +0xcc:  mov    %esi,%eax
085d1bb6 +0xce:  mov    %ebx,%edx
085d1bb8 +0xd0:  mov    %eax,(%esp)
085d1bbb +0xd3:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// expert_job::CDisjointMachine::CDisjointMachine @ 0x85d1ae8

/* expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int) */

void __thiscall
expert_job::CDisjointMachine::CDisjointMachine
          (CDisjointMachine *this,CUser *param_1,char *param_2,int param_3,char param_4,int param_5,
          int param_6)

{
  village_object::IObject::IObject((IObject *)this);
  *(undefined ***)this = &PTR_include_08cc0848;
  collision_detection::Rectangle::Rectangle((Rectangle *)(this + 4));
  std::string::string((string *)(this + 0x18));
  *(CUser **)(this + 0x14) = param_1;
                    /* try { // try from 085d1b3f to 085d1b43 has its CatchHandler @ 085d1ba2 */
  std::string::operator=((string *)(this + 0x18),param_2);
  *(int *)(this + 0x1c) = param_3;
  this[0x20] = (CDisjointMachine)param_4;
  *(int *)(this + 0x24) = param_5;
  *(int *)(this + 0x28) = param_6;
  *(int *)(this + 4) = *(int *)(this + 0x24) + -0x50;
  *(undefined4 *)(this + 0xc) = 0xa0;
  *(int *)(this + 8) = *(int *)(this + 0x28) + -0x32;
  *(undefined4 *)(this + 0x10) = 100;
  return;
}
```

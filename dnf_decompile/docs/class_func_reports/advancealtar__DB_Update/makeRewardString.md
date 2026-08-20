# makeRewardString

`_ZN12advancealtar9DB_Update16makeRewardStringERSsPKNS_7_RewardEi`

`advancealtar::DB_Update::makeRewardString(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, advancealtar::_Reward const*, int)`

| 类 | 地址 |
|---|---|
| `advancealtar::DB_Update` | `0x0813f66a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813f66a  _ZN12advancealtar9DB_Update16makeRewardStringERSsPKNS_7_RewardEi
#           advancealtar::DB_Update::makeRewardString(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, advancealtar::_Reward const*, int)
# range [0x0813f66a, 0x0813f729]
0813f66a +0x00:  push   %ebp
0813f66b +0x01:  mov    %esp,%ebp
0813f66d +0x03:  sub    $0xb8,%esp
0813f673 +0x09:  cmpl   $0x0,0x10(%ebp)
0813f677 +0x0d:  je     0813f727 <+0xbd>
0813f67d +0x13:  mov    0xc(%ebp),%eax
0813f680 +0x16:  mov    %eax,(%esp)
0813f683 +0x19:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
0813f688 +0x1e:  movl   $0x0,-0xc(%ebp)
0813f68f +0x25:  jmp    0813f714 <+0xaa>
0813f694 +0x2a:  mov    -0xc(%ebp),%edx
0813f697 +0x2d:  mov    %edx,%eax
0813f699 +0x2f:  shl    $0x2,%eax
0813f69c +0x32:  add    %edx,%eax
0813f69e +0x34:  add    0x10(%ebp),%eax
0813f6a1 +0x37:  mov    (%eax),%eax
0813f6a3 +0x39:  test   %eax,%eax
0813f6a5 +0x3b:  jle    0813f70f <+0xa5>
0813f6a7 +0x3d:  mov    -0xc(%ebp),%edx
0813f6aa +0x40:  mov    %edx,%eax
0813f6ac +0x42:  shl    $0x2,%eax
0813f6af +0x45:  add    %edx,%eax
0813f6b1 +0x47:  add    0x10(%ebp),%eax
0813f6b4 +0x4a:  movzbl 0x4(%eax),%eax
0813f6b8 +0x4e:  movzbl %al,%ecx
0813f6bb +0x51:  mov    -0xc(%ebp),%edx
0813f6be +0x54:  mov    %edx,%eax
0813f6c0 +0x56:  shl    $0x2,%eax
0813f6c3 +0x59:  add    %edx,%eax
0813f6c5 +0x5b:  add    0x10(%ebp),%eax
0813f6c8 +0x5e:  mov    (%eax),%eax
0813f6ca +0x60:  movl   $"|",0x14(%esp)
0813f6d2 +0x68:  mov    %ecx,0x10(%esp)
0813f6d6 +0x6c:  movl   $",",0xc(%esp)
0813f6de +0x74:  mov    %eax,0x8(%esp)
0813f6e2 +0x78:  movl   $"%d%s%d%s",0x4(%esp)
0813f6ea +0x80:  lea    -0x8c(%ebp),%eax
0813f6f0 +0x86:  mov    %eax,(%esp)
0813f6f3 +0x89:  call   0807e440 <_init+0xd38>
0813f6f8 +0x8e:  lea    -0x8c(%ebp),%eax
0813f6fe +0x94:  mov    %eax,0x4(%esp)
0813f702 +0x98:  mov    0xc(%ebp),%eax
0813f705 +0x9b:  mov    %eax,(%esp)
0813f708 +0x9e:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
0813f70d +0xa3:  jmp    0813f710 <+0xa6>
0813f70f +0xa5:  nop
0813f710 +0xa6:  addl   $0x1,-0xc(%ebp)
0813f714 +0xaa:  mov    -0xc(%ebp),%eax
0813f717 +0xad:  cmp    0x14(%ebp),%eax
0813f71a +0xb0:  setl   %al
0813f71d +0xb3:  test   %al,%al
0813f71f +0xb5:  jne    0813f694 <+0x2a>
0813f725 +0xbb:  jmp    0813f728 <+0xbe>
0813f727 +0xbd:  nop
0813f728 +0xbe:  leave
0813f729 +0xbf:  ret
```

## 反编译 C

```c
// advancealtar::DB_Update::makeRewardString @ 0x813f66a

/* advancealtar::DB_Update::makeRewardString(std::string&, advancealtar::_Reward const*, int) */

void __thiscall
advancealtar::DB_Update::makeRewardString
          (DB_Update *this,string *param_1,_Reward *param_2,int param_3)

{
  char local_90 [128];
  int local_10;
  
  if (param_2 != (_Reward *)0x0) {
    std::string::clear((string *)param_1);
    for (local_10 = 0; local_10 < param_3; local_10 = local_10 + 1) {
      if (0 < *(int *)(param_2 + local_10 * 5)) {
        sprintf(local_90,"%d%s%d%s",*(undefined4 *)(param_2 + local_10 * 5),&DAT_08b6d831,
                (uint)(byte)param_2[local_10 * 5 + 4],&DAT_08b6d82f);
        std::string::operator+=((string *)param_1,local_90);
      }
    }
  }
  return;
}
```

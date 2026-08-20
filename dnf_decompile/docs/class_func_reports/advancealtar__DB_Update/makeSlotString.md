# makeSlotString

`_ZN12advancealtar9DB_Update14makeSlotStringERSsPKNS_5_SlotEi`

`advancealtar::DB_Update::makeSlotString(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, advancealtar::_Slot const*, int)`

| 类 | 地址 |
|---|---|
| `advancealtar::DB_Update` | `0x0813f442` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813f442  _ZN12advancealtar9DB_Update14makeSlotStringERSsPKNS_5_SlotEi
#           advancealtar::DB_Update::makeSlotString(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, advancealtar::_Slot const*, int)
# range [0x0813f442, 0x0813f53b]
0813f442 +0x00:  push   %ebp
0813f443 +0x01:  mov    %esp,%ebp
0813f445 +0x03:  push   %esi
0813f446 +0x04:  push   %ebx
0813f447 +0x05:  sub    $0xc0,%esp
0813f44d +0x0b:  cmpl   $0x0,0x10(%ebp)
0813f451 +0x0f:  je     0813f531 <+0xef>
0813f457 +0x15:  mov    0xc(%ebp),%eax
0813f45a +0x18:  mov    %eax,(%esp)
0813f45d +0x1b:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
0813f462 +0x20:  movl   $0x0,-0xc(%ebp)
0813f469 +0x27:  jmp    0813f51e <+0xdc>
0813f46e +0x2c:  mov    -0xc(%ebp),%edx
0813f471 +0x2f:  mov    %edx,%eax
0813f473 +0x31:  shl    $0x2,%eax
0813f476 +0x34:  add    %edx,%eax
0813f478 +0x36:  add    %eax,%eax
0813f47a +0x38:  add    0x10(%ebp),%eax
0813f47d +0x3b:  mov    0x6(%eax),%esi
0813f480 +0x3e:  mov    -0xc(%ebp),%edx
0813f483 +0x41:  mov    %edx,%eax
0813f485 +0x43:  shl    $0x2,%eax
0813f488 +0x46:  add    %edx,%eax
0813f48a +0x48:  add    %eax,%eax
0813f48c +0x4a:  add    0x10(%ebp),%eax
0813f48f +0x4d:  movzbl 0x5(%eax),%eax
0813f493 +0x51:  movzbl %al,%ebx
0813f496 +0x54:  mov    -0xc(%ebp),%edx
0813f499 +0x57:  mov    %edx,%eax
0813f49b +0x59:  shl    $0x2,%eax
0813f49e +0x5c:  add    %edx,%eax
0813f4a0 +0x5e:  add    %eax,%eax
0813f4a2 +0x60:  add    0x10(%ebp),%eax
0813f4a5 +0x63:  mov    0x1(%eax),%eax
0813f4a8 +0x66:  mov    %eax,%ecx
0813f4aa +0x68:  mov    -0xc(%ebp),%edx
0813f4ad +0x6b:  mov    %edx,%eax
0813f4af +0x6d:  shl    $0x2,%eax
0813f4b2 +0x70:  add    %edx,%eax
0813f4b4 +0x72:  add    %eax,%eax
0813f4b6 +0x74:  add    0x10(%ebp),%eax
0813f4b9 +0x77:  movzbl (%eax),%eax
0813f4bc +0x7a:  movzbl %al,%eax
0813f4bf +0x7d:  movl   $"|",0x24(%esp)
0813f4c7 +0x85:  mov    %esi,0x20(%esp)
0813f4cb +0x89:  movl   $",",0x1c(%esp)
0813f4d3 +0x91:  mov    %ebx,0x18(%esp)
0813f4d7 +0x95:  movl   $",",0x14(%esp)
0813f4df +0x9d:  mov    %ecx,0x10(%esp)
0813f4e3 +0xa1:  movl   $",",0xc(%esp)
0813f4eb +0xa9:  mov    %eax,0x8(%esp)
0813f4ef +0xad:  movl   $"%d%s%d%s%d%s%d%s",0x4(%esp)
0813f4f7 +0xb5:  lea    -0x8c(%ebp),%eax
0813f4fd +0xbb:  mov    %eax,(%esp)
0813f500 +0xbe:  call   0807e440 <_init+0xd38>
0813f505 +0xc3:  lea    -0x8c(%ebp),%eax
0813f50b +0xc9:  mov    %eax,0x4(%esp)
0813f50f +0xcd:  mov    0xc(%ebp),%eax
0813f512 +0xd0:  mov    %eax,(%esp)
0813f515 +0xd3:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
0813f51a +0xd8:  addl   $0x1,-0xc(%ebp)
0813f51e +0xdc:  mov    -0xc(%ebp),%eax
0813f521 +0xdf:  cmp    0x14(%ebp),%eax
0813f524 +0xe2:  setl   %al
0813f527 +0xe5:  test   %al,%al
0813f529 +0xe7:  jne    0813f46e <+0x2c>
0813f52f +0xed:  jmp    0813f532 <+0xf0>
0813f531 +0xef:  nop
0813f532 +0xf0:  add    $0xc0,%esp
0813f538 +0xf6:  pop    %ebx
0813f539 +0xf7:  pop    %esi
0813f53a +0xf8:  pop    %ebp
0813f53b +0xf9:  ret
```

## 反编译 C

```c
// advancealtar::DB_Update::makeSlotString @ 0x813f442

/* advancealtar::DB_Update::makeSlotString(std::string&, advancealtar::_Slot const*, int) */

void __thiscall
advancealtar::DB_Update::makeSlotString(DB_Update *this,string *param_1,_Slot *param_2,int param_3)

{
  char local_90 [128];
  int local_10;
  
  if (param_2 != (_Slot *)0x0) {
    std::string::clear((string *)param_1);
    for (local_10 = 0; local_10 < param_3; local_10 = local_10 + 1) {
      sprintf(local_90,"%d%s%d%s%d%s%d%s",(uint)(byte)param_2[local_10 * 10],&DAT_08b6d831,
              *(undefined4 *)(param_2 + local_10 * 10 + 1),&DAT_08b6d831,
              (uint)(byte)param_2[local_10 * 10 + 5],&DAT_08b6d831,
              *(undefined4 *)(param_2 + local_10 * 10 + 6),&DAT_08b6d82f);
      std::string::operator+=((string *)param_1,local_90);
    }
  }
  return;
}
```

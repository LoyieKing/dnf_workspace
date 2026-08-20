# makeBuyItemString

`_ZN12advancealtar9DB_Update17makeBuyItemStringERSsPKNS_8_BuyItemEi`

`advancealtar::DB_Update::makeBuyItemString(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, advancealtar::_BuyItem const*, int)`

| 类 | 地址 |
|---|---|
| `advancealtar::DB_Update` | `0x0813f53c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813f53c  _ZN12advancealtar9DB_Update17makeBuyItemStringERSsPKNS_8_BuyItemEi
#           advancealtar::DB_Update::makeBuyItemString(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, advancealtar::_BuyItem const*, int)
# range [0x0813f53c, 0x0813f669]
0813f53c +0x000:  push   %ebp
0813f53d +0x001:  mov    %esp,%ebp
0813f53f +0x003:  push   %esi
0813f540 +0x004:  push   %ebx
0813f541 +0x005:  sub    $0xc0,%esp
0813f547 +0x00b:  cmpl   $0x0,0x10(%ebp)
0813f54b +0x00f:  je     0813f65e <+0x122>
0813f551 +0x015:  mov    0xc(%ebp),%eax
0813f554 +0x018:  mov    %eax,(%esp)
0813f557 +0x01b:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
0813f55c +0x020:  movl   $0x0,-0xc(%ebp)
0813f563 +0x027:  jmp    0813f64b <+0x10f>
0813f568 +0x02c:  mov    -0xc(%ebp),%edx
0813f56b +0x02f:  mov    %edx,%eax
0813f56d +0x031:  add    %eax,%eax
0813f56f +0x033:  add    %edx,%eax
0813f571 +0x035:  shl    $0x2,%eax
0813f574 +0x038:  add    0x10(%ebp),%eax
0813f577 +0x03b:  mov    0x4(%eax),%eax
0813f57a +0x03e:  test   %eax,%eax
0813f57c +0x040:  jne    0813f59a <+0x5e>
0813f57e +0x042:  mov    -0xc(%ebp),%edx
0813f581 +0x045:  mov    %edx,%eax
0813f583 +0x047:  add    %eax,%eax
0813f585 +0x049:  add    %edx,%eax
0813f587 +0x04b:  shl    $0x2,%eax
0813f58a +0x04e:  add    0x10(%ebp),%eax
0813f58d +0x051:  movzwl 0x8(%eax),%eax
0813f591 +0x055:  test   %ax,%ax
0813f594 +0x058:  je     0813f646 <+0x10a>
0813f59a +0x05e:  mov    -0xc(%ebp),%edx
0813f59d +0x061:  mov    %edx,%eax
0813f59f +0x063:  add    %eax,%eax
0813f5a1 +0x065:  add    %edx,%eax
0813f5a3 +0x067:  shl    $0x2,%eax
0813f5a6 +0x06a:  add    0x10(%ebp),%eax
0813f5a9 +0x06d:  movzwl 0xa(%eax),%eax
0813f5ad +0x071:  movswl %ax,%esi
0813f5b0 +0x074:  mov    -0xc(%ebp),%edx
0813f5b3 +0x077:  mov    %edx,%eax
0813f5b5 +0x079:  add    %eax,%eax
0813f5b7 +0x07b:  add    %edx,%eax
0813f5b9 +0x07d:  shl    $0x2,%eax
0813f5bc +0x080:  add    0x10(%ebp),%eax
0813f5bf +0x083:  movzwl 0x8(%eax),%eax
0813f5c3 +0x087:  movswl %ax,%ebx
0813f5c6 +0x08a:  mov    -0xc(%ebp),%edx
0813f5c9 +0x08d:  mov    %edx,%eax
0813f5cb +0x08f:  add    %eax,%eax
0813f5cd +0x091:  add    %edx,%eax
0813f5cf +0x093:  shl    $0x2,%eax
0813f5d2 +0x096:  add    0x10(%ebp),%eax
0813f5d5 +0x099:  mov    0x4(%eax),%ecx
0813f5d8 +0x09c:  mov    -0xc(%ebp),%edx
0813f5db +0x09f:  mov    %edx,%eax
0813f5dd +0x0a1:  add    %eax,%eax
0813f5df +0x0a3:  add    %edx,%eax
0813f5e1 +0x0a5:  shl    $0x2,%eax
0813f5e4 +0x0a8:  add    0x10(%ebp),%eax
0813f5e7 +0x0ab:  mov    (%eax),%eax
0813f5e9 +0x0ad:  movl   $"|",0x24(%esp)
0813f5f1 +0x0b5:  mov    %esi,0x20(%esp)
0813f5f5 +0x0b9:  movl   $",",0x1c(%esp)
0813f5fd +0x0c1:  mov    %ebx,0x18(%esp)
0813f601 +0x0c5:  movl   $",",0x14(%esp)
0813f609 +0x0cd:  mov    %ecx,0x10(%esp)
0813f60d +0x0d1:  movl   $",",0xc(%esp)
0813f615 +0x0d9:  mov    %eax,0x8(%esp)
0813f619 +0x0dd:  movl   $"%d%s%d%s%d%s%d%s",0x4(%esp)
0813f621 +0x0e5:  lea    -0x8c(%ebp),%eax
0813f627 +0x0eb:  mov    %eax,(%esp)
0813f62a +0x0ee:  call   0807e440 <_init+0xd38>
0813f62f +0x0f3:  lea    -0x8c(%ebp),%eax
0813f635 +0x0f9:  mov    %eax,0x4(%esp)
0813f639 +0x0fd:  mov    0xc(%ebp),%eax
0813f63c +0x100:  mov    %eax,(%esp)
0813f63f +0x103:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
0813f644 +0x108:  jmp    0813f647 <+0x10b>
0813f646 +0x10a:  nop
0813f647 +0x10b:  addl   $0x1,-0xc(%ebp)
0813f64b +0x10f:  mov    -0xc(%ebp),%eax
0813f64e +0x112:  cmp    0x14(%ebp),%eax
0813f651 +0x115:  setl   %al
0813f654 +0x118:  test   %al,%al
0813f656 +0x11a:  jne    0813f568 <+0x2c>
0813f65c +0x120:  jmp    0813f65f <+0x123>
0813f65e +0x122:  nop
0813f65f +0x123:  add    $0xc0,%esp
0813f665 +0x129:  pop    %ebx
0813f666 +0x12a:  pop    %esi
0813f667 +0x12b:  pop    %ebp
0813f668 +0x12c:  ret
0813f669 +0x12d:  nop
```

## 反编译 C

```c
// advancealtar::DB_Update::makeBuyItemString @ 0x813f53c

/* advancealtar::DB_Update::makeBuyItemString(std::string&, advancealtar::_BuyItem const*, int) */

void __thiscall
advancealtar::DB_Update::makeBuyItemString
          (DB_Update *this,string *param_1,_BuyItem *param_2,int param_3)

{
  char local_90 [128];
  int local_10;
  
  if (param_2 != (_BuyItem *)0x0) {
    std::string::clear((string *)param_1);
    for (local_10 = 0; local_10 < param_3; local_10 = local_10 + 1) {
      if ((*(int *)(param_2 + local_10 * 0xc + 4) != 0) ||
         (*(short *)(param_2 + local_10 * 0xc + 8) != 0)) {
        sprintf(local_90,"%d%s%d%s%d%s%d%s",*(undefined4 *)(param_2 + local_10 * 0xc),&DAT_08b6d831,
                *(undefined4 *)(param_2 + local_10 * 0xc + 4),&DAT_08b6d831,
                (int)*(short *)(param_2 + local_10 * 0xc + 8),&DAT_08b6d831,
                (int)*(short *)(param_2 + local_10 * 0xc + 10),&DAT_08b6d82f);
        std::string::operator+=((string *)param_1,local_90);
      }
    }
  }
  return;
}
```

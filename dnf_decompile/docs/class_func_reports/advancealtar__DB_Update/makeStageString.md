# makeStageString

`_ZN12advancealtar9DB_Update15makeStageStringERSsPKNS_6_StageEi`

`advancealtar::DB_Update::makeStageString(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, advancealtar::_Stage const*, int)`

| 类 | 地址 |
|---|---|
| `advancealtar::DB_Update` | `0x0813f380` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813f380  _ZN12advancealtar9DB_Update15makeStageStringERSsPKNS_6_StageEi
#           advancealtar::DB_Update::makeStageString(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, advancealtar::_Stage const*, int)
# range [0x0813f380, 0x0813f441]
0813f380 +0x00:  push   %ebp
0813f381 +0x01:  mov    %esp,%ebp
0813f383 +0x03:  sub    $0xb8,%esp
0813f389 +0x09:  cmpl   $0x0,0x10(%ebp)
0813f38d +0x0d:  je     0813f43f <+0xbf>
0813f393 +0x13:  mov    0xc(%ebp),%eax
0813f396 +0x16:  mov    %eax,(%esp)
0813f399 +0x19:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
0813f39e +0x1e:  movl   $0x0,-0xc(%ebp)
0813f3a5 +0x25:  jmp    0813f42c <+0xac>
0813f3aa +0x2a:  mov    -0xc(%ebp),%eax
0813f3ad +0x2d:  shl    $0x3,%eax
0813f3b0 +0x30:  add    0x10(%ebp),%eax
0813f3b3 +0x33:  mov    (%eax),%eax
0813f3b5 +0x35:  test   %eax,%eax
0813f3b7 +0x37:  jne    0813f3c9 <+0x49>
0813f3b9 +0x39:  mov    -0xc(%ebp),%eax
0813f3bc +0x3c:  shl    $0x3,%eax
0813f3bf +0x3f:  add    0x10(%ebp),%eax
0813f3c2 +0x42:  mov    0x4(%eax),%eax
0813f3c5 +0x45:  test   %eax,%eax
0813f3c7 +0x47:  je     0813f427 <+0xa7>
0813f3c9 +0x49:  mov    -0xc(%ebp),%eax
0813f3cc +0x4c:  shl    $0x3,%eax
0813f3cf +0x4f:  add    0x10(%ebp),%eax
0813f3d2 +0x52:  mov    0x4(%eax),%eax
0813f3d5 +0x55:  mov    %eax,%edx
0813f3d7 +0x57:  mov    -0xc(%ebp),%eax
0813f3da +0x5a:  shl    $0x3,%eax
0813f3dd +0x5d:  add    0x10(%ebp),%eax
0813f3e0 +0x60:  mov    (%eax),%eax
0813f3e2 +0x62:  movl   $"|",0x14(%esp)
0813f3ea +0x6a:  mov    %edx,0x10(%esp)
0813f3ee +0x6e:  movl   $",",0xc(%esp)
0813f3f6 +0x76:  mov    %eax,0x8(%esp)
0813f3fa +0x7a:  movl   $"%d%s%d%s",0x4(%esp)
0813f402 +0x82:  lea    -0x8c(%ebp),%eax
0813f408 +0x88:  mov    %eax,(%esp)
0813f40b +0x8b:  call   0807e440 <_init+0xd38>
0813f410 +0x90:  lea    -0x8c(%ebp),%eax
0813f416 +0x96:  mov    %eax,0x4(%esp)
0813f41a +0x9a:  mov    0xc(%ebp),%eax
0813f41d +0x9d:  mov    %eax,(%esp)
0813f420 +0xa0:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
0813f425 +0xa5:  jmp    0813f428 <+0xa8>
0813f427 +0xa7:  nop
0813f428 +0xa8:  addl   $0x1,-0xc(%ebp)
0813f42c +0xac:  mov    -0xc(%ebp),%eax
0813f42f +0xaf:  cmp    0x14(%ebp),%eax
0813f432 +0xb2:  setl   %al
0813f435 +0xb5:  test   %al,%al
0813f437 +0xb7:  jne    0813f3aa <+0x2a>
0813f43d +0xbd:  jmp    0813f440 <+0xc0>
0813f43f +0xbf:  nop
0813f440 +0xc0:  leave
0813f441 +0xc1:  ret
```

## 反编译 C

```c
// advancealtar::DB_Update::makeStageString @ 0x813f380

/* advancealtar::DB_Update::makeStageString(std::string&, advancealtar::_Stage const*, int) */

void __thiscall
advancealtar::DB_Update::makeStageString
          (DB_Update *this,string *param_1,_Stage *param_2,int param_3)

{
  char local_90 [128];
  int local_10;
  
  if (param_2 != (_Stage *)0x0) {
    std::string::clear((string *)param_1);
    for (local_10 = 0; local_10 < param_3; local_10 = local_10 + 1) {
      if ((*(int *)(param_2 + local_10 * 8) != 0) || (*(int *)(param_2 + local_10 * 8 + 4) != 0)) {
        sprintf(local_90,"%d%s%d%s",*(undefined4 *)(param_2 + local_10 * 8),&DAT_08b6d831,
                *(undefined4 *)(param_2 + local_10 * 8 + 4),&DAT_08b6d82f);
        std::string::operator+=((string *)param_1,local_90);
      }
    }
  }
  return;
}
```

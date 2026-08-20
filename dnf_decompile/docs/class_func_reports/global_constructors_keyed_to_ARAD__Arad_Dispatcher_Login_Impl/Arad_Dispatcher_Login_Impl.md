# Arad_Dispatcher_Login_Impl

`_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev`

`global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl` | `0x0818fafe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818fafe  _GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev
#           global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()
# range [0x0818fafe, 0x0818fdbf]
0818fafe +0x000:  push   %ebp
0818faff +0x001:  mov    %esp,%ebp
0818fb01 +0x003:  sub    $0x18,%esp
0818fb04 +0x006:  movl   $0xffff,0x4(%esp)
0818fb0c +0x00e:  movl   $0x1,(%esp)
0818fb13 +0x015:  call   0818fabe <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0818fb18 +0x01a:  leave
0818fb19 +0x01b:  ret
0818fb1a +0x01c:  push   %ebp
0818fb1b +0x01d:  mov    %esp,%ebp
0818fb1d +0x01f:  mov    0x8(%ebp),%eax
0818fb20 +0x022:  mov    0xc(%ebp),%edx
0818fb23 +0x025:  mov    %edx,0x4(%eax)
0818fb26 +0x028:  pop    %ebp
0818fb27 +0x029:  ret
0818fb28 +0x02a:  push   %ebp
0818fb29 +0x02b:  mov    %esp,%ebp
0818fb2b +0x02d:  mov    0x8(%ebp),%eax
0818fb2e +0x030:  movl   $0x0,(%eax)
0818fb34 +0x036:  mov    0x8(%ebp),%eax
0818fb37 +0x039:  movl   $0x0,0x4(%eax)
0818fb3e +0x040:  mov    0x8(%ebp),%eax
0818fb41 +0x043:  movl   $0x0,0x8(%eax)
0818fb48 +0x04a:  mov    0x8(%ebp),%eax
0818fb4b +0x04d:  movl   $0x0,0xc(%eax)
0818fb52 +0x054:  mov    0x8(%ebp),%eax
0818fb55 +0x057:  movb   $0x0,0x10(%eax)
0818fb59 +0x05b:  mov    0x8(%ebp),%eax
0818fb5c +0x05e:  movl   $0x0,0x14(%eax)
0818fb63 +0x065:  mov    0x8(%ebp),%eax
0818fb66 +0x068:  movb   $0x0,0x18(%eax)
0818fb6a +0x06c:  mov    0x8(%ebp),%eax
0818fb6d +0x06f:  movb   $0x0,0x2c(%eax)
0818fb71 +0x073:  mov    0x8(%ebp),%eax
0818fb74 +0x076:  movl   $0x0,0x30(%eax)
0818fb7b +0x07d:  mov    0x8(%ebp),%eax
0818fb7e +0x080:  movl   $0x0,0x34(%eax)
0818fb85 +0x087:  mov    0x8(%ebp),%eax
0818fb88 +0x08a:  mov    $0x0,%edx
0818fb8d +0x08f:  mov    %edx,0x38(%eax)
0818fb90 +0x092:  mov    0x8(%ebp),%eax
0818fb93 +0x095:  movb   $0x0,0x3c(%eax)
0818fb97 +0x099:  mov    0x8(%ebp),%eax
0818fb9a +0x09c:  movb   $0x0,0x3d(%eax)
0818fb9e +0x0a0:  mov    0x8(%ebp),%eax
0818fba1 +0x0a3:  movl   $0x0,0x40(%eax)
0818fba8 +0x0aa:  mov    0x8(%ebp),%eax
0818fbab +0x0ad:  movl   $0x0,0x44(%eax)
0818fbb2 +0x0b4:  pop    %ebp
0818fbb3 +0x0b5:  ret
0818fbb4 +0x0b6:  push   %ebp
0818fbb5 +0x0b7:  mov    %esp,%ebp
0818fbb7 +0x0b9:  sub    $0x28,%esp
0818fbba +0x0bc:  movl   $0x4358,0x4(%esp)
0818fbc2 +0x0c4:  mov    0x8(%ebp),%eax
0818fbc5 +0x0c7:  mov    %eax,(%esp)
0818fbc8 +0x0ca:  call   0861bfdc <_ZN6Stream10enable_outEi>  ; Stream::enable_out(int)
0818fbcd +0x0cf:  xor    $0x1,%eax
0818fbd0 +0x0d2:  test   %al,%al
0818fbd2 +0x0d4:  je     0818fbdb <+0xdd>
0818fbd4 +0x0d6:  mov    $0x0,%eax
0818fbd9 +0x0db:  jmp    0818fc05 <+0x107>
0818fbdb +0x0dd:  mov    0x8(%ebp),%eax
0818fbde +0x0e0:  mov    0x8(%eax),%eax
0818fbe1 +0x0e3:  mov    %eax,%edx
0818fbe3 +0x0e5:  mov    0x8(%ebp),%eax
0818fbe6 +0x0e8:  mov    0x10(%eax),%eax
0818fbe9 +0x0eb:  lea    (%edx,%eax,1),%eax
0818fbec +0x0ee:  mov    %eax,-0xc(%ebp)
0818fbef +0x0f1:  movl   $0x4358,0x4(%esp)
0818fbf7 +0x0f9:  mov    0x8(%ebp),%eax
0818fbfa +0x0fc:  mov    %eax,(%esp)
0818fbfd +0x0ff:  call   0861be34 <_ZN6Stream7out_ptrEi>  ; Stream::out_ptr(int)
0818fc02 +0x104:  mov    -0xc(%ebp),%eax
0818fc05 +0x107:  leave
0818fc06 +0x108:  ret
0818fc07 +0x109:  nop
0818fc08 +0x10a:  push   %ebp
0818fc09 +0x10b:  mov    %esp,%ebp
0818fc0b +0x10d:  sub    $0x18,%esp
0818fc0e +0x110:  mov    0x8(%ebp),%eax
0818fc11 +0x113:  mov    %eax,(%esp)
0818fc14 +0x116:  call   0818fcda <+0x1dc>
0818fc19 +0x11b:  leave
0818fc1a +0x11c:  ret
0818fc1b +0x11d:  nop
0818fc1c +0x11e:  push   %ebp
0818fc1d +0x11f:  mov    %esp,%ebp
0818fc1f +0x121:  push   %esi
0818fc20 +0x122:  push   %ebx
0818fc21 +0x123:  sub    $0x10,%esp
0818fc24 +0x126:  mov    0x8(%ebp),%eax
0818fc27 +0x129:  mov    %eax,(%esp)
0818fc2a +0x12c:  call   0818d876 <_GLOBAL__I__ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_charater_name_checkEP5MySQLP17SIG_CREATE_CHARACPKc+0x5f6>  ; global constructors keyed to ARAD::DATABASE::CREATE_QUERY::arad_sp_charater_name_check(MySQL*, SIG_CREATE_CHARAC*, char const*)+0x5f6
0818fc2f +0x131:  mov    0x8(%ebp),%edx
0818fc32 +0x134:  mov    0x4(%edx),%ecx
0818fc35 +0x137:  mov    0x8(%ebp),%edx
0818fc38 +0x13a:  mov    (%edx),%edx
0818fc3a +0x13c:  mov    %eax,0x8(%esp)
0818fc3e +0x140:  mov    %ecx,0x4(%esp)
0818fc42 +0x144:  mov    %edx,(%esp)
0818fc45 +0x147:  call   0818d8e9 <_GLOBAL__I__ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_charater_name_checkEP5MySQLP17SIG_CREATE_CHARACPKc+0x669>  ; global constructors keyed to ARAD::DATABASE::CREATE_QUERY::arad_sp_charater_name_check(MySQL*, SIG_CREATE_CHARAC*, char const*)+0x669
0818fc4a +0x14c:  jmp    0818fc67 <+0x169>
0818fc4c +0x14e:  mov    %edx,%ebx
0818fc4e +0x150:  mov    %eax,%esi
0818fc50 +0x152:  mov    0x8(%ebp),%eax
0818fc53 +0x155:  mov    %eax,(%esp)
0818fc56 +0x158:  call   0818fcee <+0x1f0>
0818fc5b +0x15d:  mov    %esi,%eax
0818fc5d +0x15f:  mov    %ebx,%edx
0818fc5f +0x161:  mov    %eax,(%esp)
0818fc62 +0x164:  call   08ae3750 <_Unwind_Resume>
0818fc67 +0x169:  mov    0x8(%ebp),%eax
0818fc6a +0x16c:  mov    %eax,(%esp)
0818fc6d +0x16f:  call   0818fcee <+0x1f0>
0818fc72 +0x174:  add    $0x10,%esp
0818fc75 +0x177:  pop    %ebx
0818fc76 +0x178:  pop    %esi
0818fc77 +0x179:  pop    %ebp
0818fc78 +0x17a:  ret
0818fc79 +0x17b:  push   %ebp
0818fc7a +0x17c:  mov    %esp,%ebp
0818fc7c +0x17e:  push   %ebx
0818fc7d +0x17f:  sub    $0x14,%esp
0818fc80 +0x182:  mov    0x8(%ebp),%eax
0818fc83 +0x185:  mov    %eax,(%esp)
0818fc86 +0x188:  call   0818d6f2 <_GLOBAL__I__ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_charater_name_checkEP5MySQLP17SIG_CREATE_CHARACPKc+0x472>  ; global constructors keyed to ARAD::DATABASE::CREATE_QUERY::arad_sp_charater_name_check(MySQL*, SIG_CREATE_CHARAC*, char const*)+0x472
0818fc8b +0x18d:  mov    (%eax),%ebx
0818fc8d +0x18f:  mov    0xc(%ebp),%eax
0818fc90 +0x192:  mov    %eax,(%esp)
0818fc93 +0x195:  call   0818d6f2 <_GLOBAL__I__ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_charater_name_checkEP5MySQLP17SIG_CREATE_CHARACPKc+0x472>  ; global constructors keyed to ARAD::DATABASE::CREATE_QUERY::arad_sp_charater_name_check(MySQL*, SIG_CREATE_CHARAC*, char const*)+0x472
0818fc98 +0x19a:  mov    (%eax),%eax
0818fc9a +0x19c:  cmp    %eax,%ebx
0818fc9c +0x19e:  setne  %al
0818fc9f +0x1a1:  add    $0x14,%esp
0818fca2 +0x1a4:  pop    %ebx
0818fca3 +0x1a5:  pop    %ebp
0818fca4 +0x1a6:  ret
0818fca5 +0x1a7:  nop
0818fca6 +0x1a8:  push   %ebp
0818fca7 +0x1a9:  mov    %esp,%ebp
0818fca9 +0x1ab:  mov    0x8(%ebp),%eax
0818fcac +0x1ae:  mov    (%eax),%eax
0818fcae +0x1b0:  lea    0x18(%eax),%edx
0818fcb1 +0x1b3:  mov    0x8(%ebp),%eax
0818fcb4 +0x1b6:  mov    %edx,(%eax)
0818fcb6 +0x1b8:  mov    0x8(%ebp),%eax
0818fcb9 +0x1bb:  pop    %ebp
0818fcba +0x1bc:  ret
0818fcbb +0x1bd:  nop
0818fcbc +0x1be:  push   %ebp
0818fcbd +0x1bf:  mov    %esp,%ebp
0818fcbf +0x1c1:  mov    0x8(%ebp),%eax
0818fcc2 +0x1c4:  mov    (%eax),%eax
0818fcc4 +0x1c6:  pop    %ebp
0818fcc5 +0x1c7:  ret
0818fcc6 +0x1c8:  push   %ebp
0818fcc7 +0x1c9:  mov    %esp,%ebp
0818fcc9 +0x1cb:  sub    $0x18,%esp
0818fccc +0x1ce:  mov    0x8(%ebp),%eax
0818fccf +0x1d1:  mov    %eax,(%esp)
0818fcd2 +0x1d4:  call   0818fd8c <+0x28e>
0818fcd7 +0x1d9:  leave
0818fcd8 +0x1da:  ret
0818fcd9 +0x1db:  nop
0818fcda +0x1dc:  push   %ebp
0818fcdb +0x1dd:  mov    %esp,%ebp
0818fcdd +0x1df:  sub    $0x18,%esp
0818fce0 +0x1e2:  mov    0x8(%ebp),%eax
0818fce3 +0x1e5:  mov    %eax,(%esp)
0818fce6 +0x1e8:  call   0818fd5c <+0x25e>
0818fceb +0x1ed:  leave
0818fcec +0x1ee:  ret
0818fced +0x1ef:  nop
0818fcee +0x1f0:  push   %ebp
0818fcef +0x1f1:  mov    %esp,%ebp
0818fcf1 +0x1f3:  push   %esi
0818fcf2 +0x1f4:  push   %ebx
0818fcf3 +0x1f5:  sub    $0x10,%esp
0818fcf6 +0x1f8:  mov    0x8(%ebp),%eax
0818fcf9 +0x1fb:  mov    0x8(%eax),%eax
0818fcfc +0x1fe:  mov    %eax,%edx
0818fcfe +0x200:  mov    0x8(%ebp),%eax
0818fd01 +0x203:  mov    (%eax),%eax
0818fd03 +0x205:  mov    %edx,%ecx
0818fd05 +0x207:  sub    %eax,%ecx
0818fd07 +0x209:  mov    %ecx,%eax
0818fd09 +0x20b:  sar    $0x3,%eax
0818fd0c +0x20e:  imul   $0xaaaaaaab,%eax,%eax
0818fd12 +0x214:  mov    %eax,%edx
0818fd14 +0x216:  mov    0x8(%ebp),%eax
0818fd17 +0x219:  mov    (%eax),%eax
0818fd19 +0x21b:  mov    %edx,0x8(%esp)
0818fd1d +0x21f:  mov    %eax,0x4(%esp)
0818fd21 +0x223:  mov    0x8(%ebp),%eax
0818fd24 +0x226:  mov    %eax,(%esp)
0818fd27 +0x229:  call   0818d904 <_GLOBAL__I__ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_charater_name_checkEP5MySQLP17SIG_CREATE_CHARACPKc+0x684>  ; global constructors keyed to ARAD::DATABASE::CREATE_QUERY::arad_sp_charater_name_check(MySQL*, SIG_CREATE_CHARAC*, char const*)+0x684
0818fd2c +0x22e:  jmp    0818fd49 <+0x24b>
0818fd2e +0x230:  mov    %edx,%ebx
0818fd30 +0x232:  mov    %eax,%esi
0818fd32 +0x234:  mov    0x8(%ebp),%eax
0818fd35 +0x237:  mov    %eax,(%esp)
0818fd38 +0x23a:  call   0818fcc6 <+0x1c8>
0818fd3d +0x23f:  mov    %esi,%eax
0818fd3f +0x241:  mov    %ebx,%edx
0818fd41 +0x243:  mov    %eax,(%esp)
0818fd44 +0x246:  call   08ae3750 <_Unwind_Resume>
0818fd49 +0x24b:  mov    0x8(%ebp),%eax
0818fd4c +0x24e:  mov    %eax,(%esp)
0818fd4f +0x251:  call   0818fcc6 <+0x1c8>
0818fd54 +0x256:  add    $0x10,%esp
0818fd57 +0x259:  pop    %ebx
0818fd58 +0x25a:  pop    %esi
0818fd59 +0x25b:  pop    %ebp
0818fd5a +0x25c:  ret
0818fd5b +0x25d:  nop
0818fd5c +0x25e:  push   %ebp
0818fd5d +0x25f:  mov    %esp,%ebp
0818fd5f +0x261:  sub    $0x18,%esp
0818fd62 +0x264:  mov    0x8(%ebp),%eax
0818fd65 +0x267:  mov    %eax,(%esp)
0818fd68 +0x26a:  call   0818fda0 <+0x2a2>
0818fd6d +0x26f:  mov    0x8(%ebp),%eax
0818fd70 +0x272:  movl   $0x0,(%eax)
0818fd76 +0x278:  mov    0x8(%ebp),%eax
0818fd79 +0x27b:  movl   $0x0,0x4(%eax)
0818fd80 +0x282:  mov    0x8(%ebp),%eax
0818fd83 +0x285:  movl   $0x0,0x8(%eax)
0818fd8a +0x28c:  leave
0818fd8b +0x28d:  ret
0818fd8c +0x28e:  push   %ebp
0818fd8d +0x28f:  mov    %esp,%ebp
0818fd8f +0x291:  sub    $0x18,%esp
0818fd92 +0x294:  mov    0x8(%ebp),%eax
0818fd95 +0x297:  mov    %eax,(%esp)
0818fd98 +0x29a:  call   0818fdb4 <+0x2b6>
0818fd9d +0x29f:  leave
0818fd9e +0x2a0:  ret
0818fd9f +0x2a1:  nop
0818fda0 +0x2a2:  push   %ebp
0818fda1 +0x2a3:  mov    %esp,%ebp
0818fda3 +0x2a5:  sub    $0x18,%esp
0818fda6 +0x2a8:  mov    0x8(%ebp),%eax
0818fda9 +0x2ab:  mov    %eax,(%esp)
0818fdac +0x2ae:  call   0818fdba <+0x2bc>
0818fdb1 +0x2b3:  leave
0818fdb2 +0x2b4:  ret
0818fdb3 +0x2b5:  nop
0818fdb4 +0x2b6:  push   %ebp
0818fdb5 +0x2b7:  mov    %esp,%ebp
0818fdb7 +0x2b9:  pop    %ebp
0818fdb8 +0x2ba:  ret
0818fdb9 +0x2bb:  nop
0818fdba +0x2bc:  push   %ebp
0818fdbb +0x2bd:  mov    %esp,%ebp
0818fdbd +0x2bf:  pop    %ebp
0818fdbe +0x2c0:  ret
0818fdbf +0x2c1:  nop
```

## 反编译 C

```c
// <global>::global @ 0x818fafe

/* ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl() */

void ARAD::Arad_Dispatcher_Login_Impl::_GLOBAL__I_Arad_Dispatcher_Login_Impl(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```

# dispatch_sig

`_ZN28Inter_MonitorNoticeBlackList12dispatch_sigEP5CUserPci`

`Inter_MonitorNoticeBlackList::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorNoticeBlackList` | `0x084d0b3a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d0b3a  _ZN28Inter_MonitorNoticeBlackList12dispatch_sigEP5CUserPci
#           Inter_MonitorNoticeBlackList::dispatch_sig(CUser*, char*, int)
# range [0x084d0b3a, 0x084d0ba5]
084d0b3a +0x00:  push   %ebp
084d0b3b +0x01:  mov    %esp,%ebp
084d0b3d +0x03:  sub    $0x28,%esp
084d0b40 +0x06:  mov    0xc(%ebp),%eax
084d0b43 +0x09:  mov    %eax,(%esp)
084d0b46 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084d0b4b +0x11:  test   %eax,%eax
084d0b4d +0x13:  sete   %al
084d0b50 +0x16:  test   %al,%al
084d0b52 +0x18:  je     084d0b5b <+0x21>
084d0b54 +0x1a:  mov    $0x0,%eax
084d0b59 +0x1f:  jmp    084d0ba3 <+0x69>
084d0b5b +0x21:  mov    0x10(%ebp),%eax
084d0b5e +0x24:  mov    %eax,-0x10(%ebp)
084d0b61 +0x27:  movl   $0x0,-0xc(%ebp)
084d0b68 +0x2e:  jmp    084d0b8a <+0x50>
084d0b6a +0x30:  mov    -0xc(%ebp),%edx
084d0b6d +0x33:  mov    -0x10(%ebp),%eax
084d0b70 +0x36:  add    $0x4,%edx
084d0b73 +0x39:  mov    0x3(%eax,%edx,4),%eax
084d0b77 +0x3d:  mov    %eax,0x4(%esp)
084d0b7b +0x41:  mov    0xc(%ebp),%eax
084d0b7e +0x44:  mov    %eax,(%esp)
084d0b81 +0x47:  call   0867efae <_ZN5CUser19registerToBlackListEj>  ; CUser::registerToBlackList(unsigned int)
084d0b86 +0x4c:  addl   $0x1,-0xc(%ebp)
084d0b8a +0x50:  mov    -0x10(%ebp),%eax
084d0b8d +0x53:  movzbl 0x12(%eax),%eax
084d0b91 +0x57:  movzbl %al,%eax
084d0b94 +0x5a:  cmp    -0xc(%ebp),%eax
084d0b97 +0x5d:  setg   %al
084d0b9a +0x60:  test   %al,%al
084d0b9c +0x62:  jne    084d0b6a <+0x30>
084d0b9e +0x64:  mov    $0x0,%eax
084d0ba3 +0x69:  leave
084d0ba4 +0x6a:  ret
084d0ba5 +0x6b:  nop
```

## 反编译 C

```c
// Inter_MonitorNoticeBlackList::dispatch_sig @ 0x84d0b3a

/* Inter_MonitorNoticeBlackList::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorNoticeBlackList::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 != 0) {
    for (local_10 = 0; local_10 < (int)(uint)*(byte *)(param_3 + 0x12); local_10 = local_10 + 1) {
      CUser::registerToBlackList((CUser *)param_2,*(uint *)(param_3 + 3 + (local_10 + 4) * 4));
    }
  }
  return 0;
}
```

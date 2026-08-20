# process

`_ZN33Dispatcher_ChangeAnotherSkillTree7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_ChangeAnotherSkillTree::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ChangeAnotherSkillTree` | `0x081d1fca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d1fca  _ZN33Dispatcher_ChangeAnotherSkillTree7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_ChangeAnotherSkillTree::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d1fca, 0x081d2093]
081d1fca +0x00:  push   %ebp
081d1fcb +0x01:  mov    %esp,%ebp
081d1fcd +0x03:  sub    $0x28,%esp
081d1fd0 +0x06:  mov    0x14(%ebp),%eax
081d1fd3 +0x09:  mov    %eax,-0x10(%ebp)
081d1fd6 +0x0c:  mov    0x10(%ebp),%eax
081d1fd9 +0x0f:  mov    %eax,0x8(%esp)
081d1fdd +0x13:  mov    0xc(%ebp),%eax
081d1fe0 +0x16:  mov    %eax,0x4(%esp)
081d1fe4 +0x1a:  mov    0x8(%ebp),%eax
081d1fe7 +0x1d:  mov    %eax,(%esp)
081d1fea +0x20:  call   081d2094 <_ZN33Dispatcher_ChangeAnotherSkillTree11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_ChangeAnotherSkillTree::check_error(CUser*, MSG_BASE&)
081d1fef +0x25:  mov    -0x10(%ebp),%edx
081d1ff2 +0x28:  mov    %eax,0x4(%edx)
081d1ff5 +0x2b:  mov    -0x10(%ebp),%eax
081d1ff8 +0x2e:  mov    0x4(%eax),%eax
081d1ffb +0x31:  test   %eax,%eax
081d1ffd +0x33:  jle    081d2009 <+0x3f>
081d1fff +0x35:  mov    $0x0,%eax
081d2004 +0x3a:  jmp    081d2092 <+0xc8>
081d2009 +0x3f:  mov    -0x10(%ebp),%eax
081d200c +0x42:  mov    0x4(%eax),%eax
081d200f +0x45:  test   %eax,%eax
081d2011 +0x47:  jns    081d203b <+0x71>
081d2013 +0x49:  mov    -0x10(%ebp),%eax
081d2016 +0x4c:  mov    0x4(%eax),%eax
081d2019 +0x4f:  movl   $0x0,0xc(%esp)
081d2021 +0x57:  mov    %eax,0x8(%esp)
081d2025 +0x5b:  movl   $&_ZZN33Dispatcher_ChangeAnotherSkillTree7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081d202d +0x63:  movl   $0x2ecf,(%esp)
081d2034 +0x6a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d2039 +0x6f:  jmp    081d2092 <+0xc8>
081d203b +0x71:  mov    0x10(%ebp),%eax
081d203e +0x74:  mov    %eax,-0xc(%ebp)
081d2041 +0x77:  mov    -0xc(%ebp),%eax
081d2044 +0x7a:  movzbl 0xd(%eax),%eax
081d2048 +0x7e:  test   %al,%al
081d204a +0x80:  jne    081d2068 <+0x9e>
081d204c +0x82:  mov    0xc(%ebp),%eax
081d204f +0x85:  movl   $0x1,0x4(%esp)
081d2057 +0x8d:  mov    %eax,(%esp)
081d205a +0x90:  call   0822f308 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49b2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49b2
081d205f +0x95:  mov    -0x10(%ebp),%eax
081d2062 +0x98:  movb   $0x1,0x8(%eax)
081d2066 +0x9c:  jmp    081d208d <+0xc3>
081d2068 +0x9e:  mov    -0xc(%ebp),%eax
081d206b +0xa1:  movzbl 0xd(%eax),%eax
081d206f +0xa5:  cmp    $0x1,%al
081d2071 +0xa7:  jne    081d208d <+0xc3>
081d2073 +0xa9:  mov    0xc(%ebp),%eax
081d2076 +0xac:  movl   $0x0,0x4(%esp)
081d207e +0xb4:  mov    %eax,(%esp)
081d2081 +0xb7:  call   0822f308 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49b2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49b2
081d2086 +0xbc:  mov    -0x10(%ebp),%eax
081d2089 +0xbf:  movb   $0x0,0x8(%eax)
081d208d +0xc3:  mov    $0x0,%eax
081d2092 +0xc8:  leave
081d2093 +0xc9:  ret
```

## 反编译 C

```c
// Dispatcher_ChangeAnotherSkillTree::process @ 0x81d1fca

/* Dispatcher_ChangeAnotherSkillTree::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_ChangeAnotherSkillTree::process
          (Dispatcher_ChangeAnotherSkillTree *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  undefined4 uVar1;
  
  uVar1 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar1 = LineFunc(0x2ecf,
                       "virtual int Dispatcher_ChangeAnotherSkillTree::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),0);
    }
    else {
      if (param_2[0xd] == (MSG_BASE)0x0) {
        CUserCharacInfo::SetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1,'\x01');
        param_3[8] = (ParamBase)0x1;
      }
      else if (param_2[0xd] == (MSG_BASE)0x1) {
        CUserCharacInfo::SetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1,'\0');
        param_3[8] = (ParamBase)0x0;
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```

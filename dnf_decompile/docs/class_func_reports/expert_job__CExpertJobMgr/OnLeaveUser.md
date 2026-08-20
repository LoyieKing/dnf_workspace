# OnLeaveUser

`_ZN10expert_job13CExpertJobMgr11OnLeaveUserEP5CUser`

`expert_job::CExpertJobMgr::OnLeaveUser(CUser*)`

| 类 | 地址 |
|---|---|
| `expert_job::CExpertJobMgr` | `0x0849e214` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849e214  _ZN10expert_job13CExpertJobMgr11OnLeaveUserEP5CUser
#           expert_job::CExpertJobMgr::OnLeaveUser(CUser*)
# range [0x0849e214, 0x0849e255]
0849e214 +0x00:  push   %ebp
0849e215 +0x01:  mov    %esp,%ebp
0849e217 +0x03:  sub    $0x18,%esp
0849e21a +0x06:  mov    0xc(%ebp),%eax
0849e21d +0x09:  mov    %eax,(%esp)
0849e220 +0x0c:  call   0822f8d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f7e
0849e225 +0x11:  test   %eax,%eax
0849e227 +0x13:  setne  %al
0849e22a +0x16:  test   %al,%al
0849e22c +0x18:  je     0849e254 <+0x40>
0849e22e +0x1a:  mov    0xc(%ebp),%eax
0849e231 +0x1d:  mov    %eax,(%esp)
0849e234 +0x20:  call   0822f8d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f7e
0849e239 +0x25:  mov    (%eax),%edx
0849e23b +0x27:  add    $0x4,%edx
0849e23e +0x2a:  mov    (%edx),%ecx
0849e240 +0x2c:  movl   $0x1,0x8(%esp)
0849e248 +0x34:  mov    0xc(%ebp),%edx
0849e24b +0x37:  mov    %edx,0x4(%esp)
0849e24f +0x3b:  mov    %eax,(%esp)
0849e252 +0x3e:  call   *%ecx
0849e254 +0x40:  leave
0849e255 +0x41:  ret
```

## 反编译 C

```c
// expert_job::CExpertJobMgr::OnLeaveUser @ 0x849e214

/* expert_job::CExpertJobMgr::OnLeaveUser(CUser*) */

void __thiscall expert_job::CExpertJobMgr::OnLeaveUser(CExpertJobMgr *this,CUser *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = CUserCharacInfo::GetCurCharacExpertJob((CUserCharacInfo *)param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)CUserCharacInfo::GetCurCharacExpertJob((CUserCharacInfo *)param_1);
    (**(code **)(*piVar2 + 4))(piVar2,param_1,1);
  }
  return;
}
```

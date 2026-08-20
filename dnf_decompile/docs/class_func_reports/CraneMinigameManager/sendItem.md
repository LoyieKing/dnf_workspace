# sendItem

`_ZN20CraneMinigameManager8sendItemEP5CUseri`

`CraneMinigameManager::sendItem(CUser*, int)`

| 类 | 地址 |
|---|---|
| `CraneMinigameManager` | `0x080ebd7a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ebd7a  _ZN20CraneMinigameManager8sendItemEP5CUseri
#           CraneMinigameManager::sendItem(CUser*, int)
# range [0x080ebd7a, 0x080ebe05]
080ebd7a +0x00:  push   %ebp
080ebd7b +0x01:  mov    %esp,%ebp
080ebd7d +0x03:  sub    $0x28,%esp
080ebd80 +0x06:  mov    0x10(%ebp),%eax
080ebd83 +0x09:  movswl %ax,%edx
080ebd86 +0x0c:  mov    0x8(%ebp),%eax
080ebd89 +0x0f:  mov    %edx,0x4(%esp)
080ebd8d +0x13:  mov    %eax,(%esp)
080ebd90 +0x16:  call   088e38d6 <_ZN19CraneMinigameScript7getItemEs>  ; CraneMinigameScript::getItem(short)
080ebd95 +0x1b:  mov    %eax,-0xc(%ebp)
080ebd98 +0x1e:  cmpl   $0x0,-0xc(%ebp)
080ebd9c +0x22:  je     080ebdfe <+0x84>
080ebd9e +0x24:  mov    -0xc(%ebp),%eax
080ebda1 +0x27:  movzwl 0x8(%eax),%eax
080ebda5 +0x2b:  cmp    $0xffff,%ax
080ebda9 +0x2f:  jne    080ebdb2 <+0x38>
080ebdab +0x31:  mov    $0x15,%eax
080ebdb0 +0x36:  jmp    080ebe03 <+0x89>
080ebdb2 +0x38:  mov    -0xc(%ebp),%eax
080ebdb5 +0x3b:  movzwl 0x8(%eax),%eax
080ebdb9 +0x3f:  movswl %ax,%edx
080ebdbc +0x42:  mov    -0xc(%ebp),%eax
080ebdbf +0x45:  mov    0x4(%eax),%eax
080ebdc2 +0x48:  mov    0x8(%ebp),%ecx
080ebdc5 +0x4b:  add    $0x18,%ecx
080ebdc8 +0x4e:  mov    %edx,0x8(%esp)
080ebdcc +0x52:  mov    %eax,0x4(%esp)
080ebdd0 +0x56:  mov    %ecx,(%esp)
080ebdd3 +0x59:  call   080ec08c <_GLOBAL__I__ZN20CraneMinigameManagerC2Ev+0x83>  ; global constructors keyed to CraneMinigameManager::CraneMinigameManager()+0x83
080ebdd8 +0x5e:  mov    0x8(%ebp),%eax
080ebddb +0x61:  add    $0x18,%eax
080ebdde +0x64:  movl   $0x1,0xc(%esp)
080ebde6 +0x6c:  mov    %eax,0x8(%esp)
080ebdea +0x70:  mov    0xc(%ebp),%eax
080ebded +0x73:  mov    %eax,0x4(%esp)
080ebdf1 +0x77:  lea    -0xd(%ebp),%eax
080ebdf4 +0x7a:  mov    %eax,(%esp)
080ebdf7 +0x7d:  call   0810cf32 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb>  ; EventClassify::CEventActionMng::process_action_send_mail(CUser*, Action_SendMail&, bool)
080ebdfc +0x82:  jmp    080ebe03 <+0x89>
080ebdfe +0x84:  mov    $0x15,%eax
080ebe03 +0x89:  leave
080ebe04 +0x8a:  ret
080ebe05 +0x8b:  nop
```

## 反编译 C

```c
// CraneMinigameManager::sendItem @ 0x80ebd7a

/* CraneMinigameManager::sendItem(CUser*, int) */

undefined4 __thiscall
CraneMinigameManager::sendItem(CraneMinigameManager *this,CUser *param_1,int param_2)

{
  undefined4 uVar1;
  CEventActionMng local_11;
  int local_10;
  
  local_10 = CraneMinigameScript::getItem((CraneMinigameScript *)this,(short)param_2);
  if (local_10 == 0) {
    uVar1 = 0x15;
  }
  else if (*(short *)(local_10 + 8) == -1) {
    uVar1 = 0x15;
  }
  else {
    Action_SendMail::set_item
              ((Action_SendMail *)(this + 0x18),*(int *)(local_10 + 4),(int)*(short *)(local_10 + 8)
              );
    uVar1 = EventClassify::CEventActionMng::process_action_send_mail
                      (&local_11,param_1,(Action_SendMail *)(this + 0x18),true);
  }
  return uVar1;
}
```

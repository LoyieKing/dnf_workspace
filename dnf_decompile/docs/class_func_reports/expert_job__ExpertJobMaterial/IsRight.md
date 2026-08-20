# IsRight

`_ZN10expert_job17ExpertJobMaterial7IsRightEv`

`expert_job::ExpertJobMaterial::IsRight()`

| 类 | 地址 |
|---|---|
| `expert_job::ExpertJobMaterial` | `0x0849c06e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849c06e  _ZN10expert_job17ExpertJobMaterial7IsRightEv
#           expert_job::ExpertJobMaterial::IsRight()
# range [0x0849c06e, 0x0849c113]
0849c06e +0x00:  push   %ebp
0849c06f +0x01:  mov    %esp,%ebp
0849c071 +0x03:  sub    $0x28,%esp
0849c074 +0x06:  mov    0x8(%ebp),%eax
0849c077 +0x09:  mov    %eax,(%esp)
0849c07a +0x0c:  call   0849f286 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0xb7>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0xb7
0849c07f +0x11:  test   %al,%al
0849c081 +0x13:  je     0849c08d <+0x1f>
0849c083 +0x15:  mov    $0x11,%eax
0849c088 +0x1a:  jmp    0849c112 <+0xa4>
0849c08d +0x1f:  mov    0x8(%ebp),%eax
0849c090 +0x22:  mov    (%eax),%eax
0849c092 +0x24:  mov    %eax,(%esp)
0849c095 +0x27:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0849c09a +0x2c:  test   %eax,%eax
0849c09c +0x2e:  sete   %al
0849c09f +0x31:  test   %al,%al
0849c0a1 +0x33:  je     0849c0aa <+0x3c>
0849c0a3 +0x35:  mov    $0x3,%eax
0849c0a8 +0x3a:  jmp    0849c112 <+0xa4>
0849c0aa +0x3c:  mov    0x8(%ebp),%eax
0849c0ad +0x3f:  movzwl 0xe(%eax),%eax
0849c0b1 +0x43:  test   %ax,%ax
0849c0b4 +0x46:  je     0849c0bd <+0x4f>
0849c0b6 +0x48:  mov    $0x11,%eax
0849c0bb +0x4d:  jmp    0849c112 <+0xa4>
0849c0bd +0x4f:  mov    0x8(%ebp),%eax
0849c0c0 +0x52:  movzwl 0xc(%eax),%eax
0849c0c4 +0x56:  movzwl %ax,%ecx
0849c0c7 +0x59:  mov    0x8(%ebp),%eax
0849c0ca +0x5c:  movzwl 0xe(%eax),%eax
0849c0ce +0x60:  movzwl %ax,%edx
0849c0d1 +0x63:  mov    0x8(%ebp),%eax
0849c0d4 +0x66:  mov    (%eax),%eax
0849c0d6 +0x68:  mov    %ecx,0x8(%esp)
0849c0da +0x6c:  mov    %edx,0x4(%esp)
0849c0de +0x70:  mov    %eax,(%esp)
0849c0e1 +0x73:  call   08680f2e <_ZN5CUser24GetCurCharacInventoryRefEtt>  ; CUser::GetCurCharacInventoryRef(unsigned short, unsigned short)
0849c0e6 +0x78:  mov    %eax,-0xc(%ebp)
0849c0e9 +0x7b:  cmpl   $0x0,-0xc(%ebp)
0849c0ed +0x7f:  jne    0849c0f6 <+0x88>
0849c0ef +0x81:  mov    $0x11,%eax
0849c0f4 +0x86:  jmp    0849c112 <+0xa4>
0849c0f6 +0x88:  mov    -0xc(%ebp),%eax
0849c0f9 +0x8b:  mov    0x2(%eax),%edx
0849c0fc +0x8e:  mov    0x8(%ebp),%eax
0849c0ff +0x91:  mov    0x8(%eax),%eax
0849c102 +0x94:  cmp    %eax,%edx
0849c104 +0x96:  je     0849c10d <+0x9f>
0849c106 +0x98:  mov    $0x11,%eax
0849c10b +0x9d:  jmp    0849c112 <+0xa4>
0849c10d +0x9f:  mov    $0x0,%eax
0849c112 +0xa4:  leave
0849c113 +0xa5:  ret
```

## 反编译 C

```c
// expert_job::ExpertJobMaterial::IsRight @ 0x849c06e

/* expert_job::ExpertJobMaterial::IsRight() */

undefined4 __thiscall expert_job::ExpertJobMaterial::IsRight(ExpertJobMaterial *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = Empty(this);
  if (cVar1 == '\0') {
    iVar3 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)this);
    if (iVar3 == 0) {
      uVar2 = 3;
    }
    else if (*(short *)(this + 0xe) == 0) {
      iVar3 = CUser::GetCurCharacInventoryRef
                        (*(CUser **)this,*(ushort *)(this + 0xe),*(ushort *)(this + 0xc));
      if (iVar3 == 0) {
        uVar2 = 0x11;
      }
      else if (*(int *)(iVar3 + 2) == *(int *)(this + 8)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0x11;
      }
    }
    else {
      uVar2 = 0x11;
    }
  }
  else {
    uVar2 = 0x11;
  }
  return uVar2;
}
```

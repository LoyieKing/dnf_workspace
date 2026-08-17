# advancealtar__AchievementRewardData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## AchievementRewardData

```asm
// === 0889ad06 advancealtar::AchievementRewardData::AchievementRewardData  [0x0889ad06-0x889adb9] ===
 889ad06:	55                   	push   %ebp
 889ad07:	89 e5                	mov    %esp,%ebp
 889ad09:	56                   	push   %esi
 889ad0a:	53                   	push   %ebx
 889ad0b:	83 ec 10             	sub    $0x10,%esp
 889ad0e:	8b 45 08             	mov    0x8(%ebp),%eax
 889ad11:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 889ad17:	8b 45 08             	mov    0x8(%ebp),%eax
 889ad1a:	c7 40 04 ff ff ff ff 	movl   $0xffffffff,0x4(%eax)
 889ad21:	8b 45 08             	mov    0x8(%ebp),%eax
 889ad24:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 889ad2b:	8b 45 08             	mov    0x8(%ebp),%eax
 889ad2e:	83 c0 10             	add    $0x10,%eax
 889ad31:	89 04 24             	mov    %eax,(%esp)
 889ad34:	e8 a7 9e 89 ff       	call   8134be0 <_ZNSt6vectorIN12advancealtar11_RewardItemESaIS1_EEC1Ev>
 889ad39:	8b 45 08             	mov    0x8(%ebp),%eax
 889ad3c:	83 c0 1c             	add    $0x1c,%eax
 889ad3f:	89 04 24             	mov    %eax,(%esp)
 889ad42:	e8 89 b8 e6 ff       	call   87065d0 <_ZNSsC1Ev>
 889ad47:	8b 45 08             	mov    0x8(%ebp),%eax
 889ad4a:	83 c0 20             	add    $0x20,%eax
 889ad4d:	89 04 24             	mov    %eax,(%esp)
 889ad50:	e8 7b b8 e6 ff       	call   87065d0 <_ZNSsC1Ev>
 889ad55:	8b 45 08             	mov    0x8(%ebp),%eax
 889ad58:	83 c0 24             	add    $0x24,%eax
 889ad5b:	89 04 24             	mov    %eax,(%esp)
 889ad5e:	e8 6d b8 e6 ff       	call   87065d0 <_ZNSsC1Ev>
 889ad63:	eb 4e                	jmp    889adb3 <_ZN12advancealtar21AchievementRewardDataC1Ev+0xad>
 889ad65:	89 d3                	mov    %edx,%ebx
 889ad67:	89 c6                	mov    %eax,%esi
 889ad69:	8b 45 08             	mov    0x8(%ebp),%eax
 889ad6c:	83 c0 20             	add    $0x20,%eax
 889ad6f:	89 04 24             	mov    %eax,(%esp)
 889ad72:	e8 69 ce e6 ff       	call   8707be0 <_ZNSsD1Ev>
 889ad77:	89 f0                	mov    %esi,%eax
 889ad79:	89 da                	mov    %ebx,%edx
 889ad7b:	eb 00                	jmp    889ad7d <_ZN12advancealtar21AchievementRewardDataC1Ev+0x77>
 889ad7d:	89 d3                	mov    %edx,%ebx
 889ad7f:	89 c6                	mov    %eax,%esi
 889ad81:	8b 45 08             	mov    0x8(%ebp),%eax
 889ad84:	83 c0 1c             	add    $0x1c,%eax
 889ad87:	89 04 24             	mov    %eax,(%esp)
 889ad8a:	e8 51 ce e6 ff       	call   8707be0 <_ZNSsD1Ev>
 889ad8f:	89 f0                	mov    %esi,%eax
 889ad91:	89 da                	mov    %ebx,%edx
 889ad93:	eb 00                	jmp    889ad95 <_ZN12advancealtar21AchievementRewardDataC1Ev+0x8f>
 889ad95:	89 d3                	mov    %edx,%ebx
 889ad97:	89 c6                	mov    %eax,%esi
 889ad99:	8b 45 08             	mov    0x8(%ebp),%eax
 889ad9c:	83 c0 10             	add    $0x10,%eax
 889ad9f:	89 04 24             	mov    %eax,(%esp)
 889ada2:	e8 4d 9e 89 ff       	call   8134bf4 <_ZNSt6vectorIN12advancealtar11_RewardItemESaIS1_EED1Ev>
 889ada7:	89 f0                	mov    %esi,%eax
 889ada9:	89 da                	mov    %ebx,%edx
 889adab:	89 04 24             	mov    %eax,(%esp)
 889adae:	e8 9d 89 24 00       	call   8ae3750 <_Unwind_Resume>
 889adb3:	83 c4 10             	add    $0x10,%esp
 889adb6:	5b                   	pop    %ebx
 889adb7:	5e                   	pop    %esi
 889adb8:	5d                   	pop    %ebp
 889adb9:	c3                   	ret

```

```c
// advancealtar::AchievementRewardData::AchievementRewardData @ 0x889ad06

/* advancealtar::AchievementRewardData::AchievementRewardData() */

void __thiscall
advancealtar::AchievementRewardData::AchievementRewardData(AchievementRewardData *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 8) = 0;
  std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::vector
            ((vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>> *)
             (this + 0x10));
                    /* try { // try from 0889ad42 to 0889ad46 has its CatchHandler @ 0889ad95 */
  std::string::string((string *)(this + 0x1c));
                    /* try { // try from 0889ad50 to 0889ad54 has its CatchHandler @ 0889ad7d */
  std::string::string((string *)(this + 0x20));
                    /* try { // try from 0889ad5e to 0889ad62 has its CatchHandler @ 0889ad65 */
  std::string::string((string *)(this + 0x24));
  return;
}

```

---

## reset

```asm
// === 0889ae56 advancealtar::AchievementRewardData::reset  [0x0889ae56-0x889aebd] ===
 889ae56:	55                   	push   %ebp
 889ae57:	89 e5                	mov    %esp,%ebp
 889ae59:	83 ec 18             	sub    $0x18,%esp
 889ae5c:	8b 45 08             	mov    0x8(%ebp),%eax
 889ae5f:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 889ae65:	8b 45 08             	mov    0x8(%ebp),%eax
 889ae68:	c7 40 04 ff ff ff ff 	movl   $0xffffffff,0x4(%eax)
 889ae6f:	8b 45 08             	mov    0x8(%ebp),%eax
 889ae72:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 889ae79:	8b 45 08             	mov    0x8(%ebp),%eax
 889ae7c:	c7 40 0c ff ff ff ff 	movl   $0xffffffff,0xc(%eax)
 889ae83:	8b 45 08             	mov    0x8(%ebp),%eax
 889ae86:	83 c0 10             	add    $0x10,%eax
 889ae89:	89 04 24             	mov    %eax,(%esp)
 889ae8c:	e8 c1 9d 89 ff       	call   8134c52 <_ZNSt6vectorIN12advancealtar11_RewardItemESaIS1_EE5clearEv>
 889ae91:	8b 45 08             	mov    0x8(%ebp),%eax
 889ae94:	83 c0 1c             	add    $0x1c,%eax
 889ae97:	89 04 24             	mov    %eax,(%esp)
 889ae9a:	e8 31 df e6 ff       	call   8708dd0 <_ZNSs5clearEv>
 889ae9f:	8b 45 08             	mov    0x8(%ebp),%eax
 889aea2:	83 c0 20             	add    $0x20,%eax
 889aea5:	89 04 24             	mov    %eax,(%esp)
 889aea8:	e8 23 df e6 ff       	call   8708dd0 <_ZNSs5clearEv>
 889aead:	8b 45 08             	mov    0x8(%ebp),%eax
 889aeb0:	83 c0 24             	add    $0x24,%eax
 889aeb3:	89 04 24             	mov    %eax,(%esp)
 889aeb6:	e8 15 df e6 ff       	call   8708dd0 <_ZNSs5clearEv>
 889aebb:	c9                   	leave
 889aebc:	c3                   	ret
 889aebd:	90                   	nop

```

```c
// advancealtar::AchievementRewardData::reset @ 0x889ae56

/* advancealtar::AchievementRewardData::reset() */

void __thiscall advancealtar::AchievementRewardData::reset(AchievementRewardData *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::clear
            ((vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>> *)
             (this + 0x10));
  std::string::clear((string *)(this + 0x1c));
  std::string::clear((string *)(this + 0x20));
  std::string::clear((string *)(this + 0x24));
  return;
}

```

---

## ~AchievementRewardData

```asm
// === 0889adba advancealtar::AchievementRewardData::~AchievementRewardData  [0x0889adba-0x889ae55] ===
 889adba:	55                   	push   %ebp
 889adbb:	89 e5                	mov    %esp,%ebp
 889adbd:	56                   	push   %esi
 889adbe:	53                   	push   %ebx
 889adbf:	83 ec 10             	sub    $0x10,%esp
 889adc2:	8b 45 08             	mov    0x8(%ebp),%eax
 889adc5:	83 c0 24             	add    $0x24,%eax
 889adc8:	89 04 24             	mov    %eax,(%esp)
 889adcb:	e8 10 ce e6 ff       	call   8707be0 <_ZNSsD1Ev>
 889add0:	eb 18                	jmp    889adea <_ZN12advancealtar21AchievementRewardDataD1Ev+0x30>
 889add2:	89 d3                	mov    %edx,%ebx
 889add4:	89 c6                	mov    %eax,%esi
 889add6:	8b 45 08             	mov    0x8(%ebp),%eax
 889add9:	83 c0 20             	add    $0x20,%eax
 889addc:	89 04 24             	mov    %eax,(%esp)
 889addf:	e8 fc cd e6 ff       	call   8707be0 <_ZNSsD1Ev>
 889ade4:	89 f0                	mov    %esi,%eax
 889ade6:	89 da                	mov    %ebx,%edx
 889ade8:	eb 10                	jmp    889adfa <_ZN12advancealtar21AchievementRewardDataD1Ev+0x40>
 889adea:	8b 45 08             	mov    0x8(%ebp),%eax
 889aded:	83 c0 20             	add    $0x20,%eax
 889adf0:	89 04 24             	mov    %eax,(%esp)
 889adf3:	e8 e8 cd e6 ff       	call   8707be0 <_ZNSsD1Ev>
 889adf8:	eb 18                	jmp    889ae12 <_ZN12advancealtar21AchievementRewardDataD1Ev+0x58>
 889adfa:	89 d3                	mov    %edx,%ebx
 889adfc:	89 c6                	mov    %eax,%esi
 889adfe:	8b 45 08             	mov    0x8(%ebp),%eax
 889ae01:	83 c0 1c             	add    $0x1c,%eax
 889ae04:	89 04 24             	mov    %eax,(%esp)
 889ae07:	e8 d4 cd e6 ff       	call   8707be0 <_ZNSsD1Ev>
 889ae0c:	89 f0                	mov    %esi,%eax
 889ae0e:	89 da                	mov    %ebx,%edx
 889ae10:	eb 10                	jmp    889ae22 <_ZN12advancealtar21AchievementRewardDataD1Ev+0x68>
 889ae12:	8b 45 08             	mov    0x8(%ebp),%eax
 889ae15:	83 c0 1c             	add    $0x1c,%eax
 889ae18:	89 04 24             	mov    %eax,(%esp)
 889ae1b:	e8 c0 cd e6 ff       	call   8707be0 <_ZNSsD1Ev>
 889ae20:	eb 1e                	jmp    889ae40 <_ZN12advancealtar21AchievementRewardDataD1Ev+0x86>
 889ae22:	89 d3                	mov    %edx,%ebx
 889ae24:	89 c6                	mov    %eax,%esi
 889ae26:	8b 45 08             	mov    0x8(%ebp),%eax
 889ae29:	83 c0 10             	add    $0x10,%eax
 889ae2c:	89 04 24             	mov    %eax,(%esp)
 889ae2f:	e8 c0 9d 89 ff       	call   8134bf4 <_ZNSt6vectorIN12advancealtar11_RewardItemESaIS1_EED1Ev>
 889ae34:	89 f0                	mov    %esi,%eax
 889ae36:	89 da                	mov    %ebx,%edx
 889ae38:	89 04 24             	mov    %eax,(%esp)
 889ae3b:	e8 10 89 24 00       	call   8ae3750 <_Unwind_Resume>
 889ae40:	8b 45 08             	mov    0x8(%ebp),%eax
 889ae43:	83 c0 10             	add    $0x10,%eax
 889ae46:	89 04 24             	mov    %eax,(%esp)
 889ae49:	e8 a6 9d 89 ff       	call   8134bf4 <_ZNSt6vectorIN12advancealtar11_RewardItemESaIS1_EED1Ev>
 889ae4e:	83 c4 10             	add    $0x10,%esp
 889ae51:	5b                   	pop    %ebx
 889ae52:	5e                   	pop    %esi
 889ae53:	5d                   	pop    %ebp
 889ae54:	c3                   	ret
 889ae55:	90                   	nop

```

```c
// advancealtar::AchievementRewardData::~AchievementRewardData @ 0x889adba

/* advancealtar::AchievementRewardData::~AchievementRewardData() */

void __thiscall
advancealtar::AchievementRewardData::~AchievementRewardData(AchievementRewardData *this)

{
                    /* try { // try from 0889adcb to 0889adcf has its CatchHandler @ 0889add2 */
  std::string::~string((string *)(this + 0x24));
                    /* try { // try from 0889adf3 to 0889adf7 has its CatchHandler @ 0889adfa */
  std::string::~string((string *)(this + 0x20));
                    /* try { // try from 0889ae1b to 0889ae1f has its CatchHandler @ 0889ae22 */
  std::string::~string((string *)(this + 0x1c));
  std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::~vector
            ((vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>> *)
             (this + 0x10));
  return;
}

```


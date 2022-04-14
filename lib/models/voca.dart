class Voca {
  final int? id;
  final String? english;
  final String? korean;

  Voca({
    this.id,
    this.english,
    this.korean,
});

  Map<String, dynamic> toMap() => {
      'id': this.id,
      'english': this.english,
      'korean': this.korean
    };


  /*
  @override
  String toString() {
    return 'Voca{id: $id, english: $english, korean:$korean}';
  }
   */

}

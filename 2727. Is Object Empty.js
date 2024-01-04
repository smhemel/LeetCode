/**
 * @param {Object|Array} obj
 * @return {boolean}
 */
var isEmpty = function(obj) {
    if (typeof obj === 'object' && Object.keys(obj).length == 0) return true;
    if (typeof obj == 'array' && obj.length == 0) return true;

    return false;
};
